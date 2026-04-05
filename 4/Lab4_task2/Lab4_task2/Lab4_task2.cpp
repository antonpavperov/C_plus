#include <iostream>
using namespace std;

bool Input(int& a, int& b)
{
    cout << "Enter two integers: ";

    if (!(cin >> a >> b)) 
    {
        return false;
    }

    return true;
}

int main()
{
    int a, b;

    if (Input(a, b) == false) 
    {
        cerr << "error";
        return 1;
    }

    int s = a + b;
    cout << "Sum = " << s << endl;

    return 0;
}