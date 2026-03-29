#include <iostream>
#include <cmath>
using namespace std;


double cubeRootPow(double a)
{
    return pow(a, 1.0 / 3.0);
}


double cubeRootIter(double a)
{
    if (a == 0)
        return 0;

    double x = a; 

    for (int i = 0; i < 20; i++)
    {
        x = (2.0 * x + a / (x * x)) / 3.0;
    }

    return x;
}

int main()
{
    double a;
    cout << "Enter number: ";
    cin >> a;

    cout << "Cube root (pow): " << cubeRootPow(a) << endl;
    cout << "Cube root (iter): " << cubeRootIter(a) << endl;

    return 0;
}