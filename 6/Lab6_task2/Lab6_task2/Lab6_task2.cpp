#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    const int N = 10;

    int a[N] = { 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };
    int original[N];

    
    for (int i = 0; i < N; i++)
        original[i] = a[i];

    int min = 0;
    int buf = 0;

    
    for (int i = 0; i < N; i++)
    {
        min = i;

        for (int j = i + 1; j < N; j++)
            min = (a[j] < a[min]) ? j : min;

        if (i != min)
        {
            buf = a[i];
            a[i] = a[min];
            a[min] = buf;
        }
    }

   
    ofstream out("arrays.txt");

    if (!out)
    {
        cout << "Error opening file\n";
        return 1;
    }

    out << "Original array:\n";
    for (int i = 0; i < N; i++)
        out << original[i] << " ";

    out << "\nSorted array:\n";
    for (int i = 0; i < N; i++)
        out << a[i] << " ";

    out.close();

    cout << "Arrays saved to file\n";

    return 0;
}