#include <iostream>
using namespace std;

void toBinary(int num)
{
    if (num > 1)
        toBinary(num / 2);

    cout << num % 2;
}

int main()
{
    int num;
    cin >> num;

    if (num <= 0)
    {
        cout << "Number must be positive\n";
        return 0;
    }

    toBinary(num);
    cout << endl;

    return 0;
}