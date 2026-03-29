#include <iostream>
using namespace std;

int sumSeries(int n)
{
    if (n == 1)
        return 5;

    return 5 * n + sumSeries(n - 1);
}

int main()
{
    int n;
    cin >> n;

    if (n <= 0)
    {
        cout << "n must be > 0\n";
        return 0;
    }

    cout << sumSeries(n) << endl;

    return 0;
}