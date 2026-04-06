#include <iostream>
#include <cmath>
using namespace std;

struct Roots
{
    double x1;
    double x2;
};


Roots solveQuadratic(double a, double b, double c)
{
    Roots r;

    double D = b * b - 4 * a * c;

    if (D < 0)
    {
        r.x1 = r.x2 = 0; 
    }
    else if (D == 0)
    {
        r.x1 = r.x2 = -b / (2 * a);
    }
    else
    {
        r.x1 = (-b + sqrt(D)) / (2 * a);
        r.x2 = (-b - sqrt(D)) / (2 * a);
    }

    return r;
}

int main()
{
    double a, b, c;

    cout << "Enter a b c: ";
    cin >> a >> b >> c;

    Roots res = solveQuadratic(a, b, c);

    double D = b * b - 4 * a * c;

    if (D < 0)
    {
        cout << "No real roots\n";
    }
    else if (D == 0)
    {
        cout << "One root: x = " << res.x1 << endl;
    }
    else
    {
        cout << "x1 = " << res.x1 << ", x2 = " << res.x2 << endl;
    }

    return 0;
}