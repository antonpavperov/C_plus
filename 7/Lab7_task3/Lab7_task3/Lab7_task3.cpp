#include <iostream>
#include <cmath>
#include <tuple>
using namespace std;


tuple<int, double, double> solve(double a, double b, double c)
{
    double D = b * b - 4 * a * c;

    if (D < 0)
    {
        return make_tuple(-1, 0, 0); 
    }
    else if (D == 0)
    {
        double x = -b / (2 * a);
        return make_tuple(0, x, x); 
    }
    else
    {
        double x1 = (-b + sqrt(D)) / (2 * a);
        double x2 = (-b - sqrt(D)) / (2 * a);
        return make_tuple(1, x1, x2); 
    }
}

int main()
{
    double a, b, c;

    cout << "Enter a b c: ";
    cin >> a >> b >> c;

    int flag;
    double x1, x2;

    tie(flag, x1, x2) = solve(a, b, c);

    if (flag == -1)
    {
        cout << "No real roots\n";
    }
    else if (flag == 0)
    {
        cout << "One root: x = " << x1 << endl;
    }
    else
    {
        cout << "x1 = " << x1 << ", x2 = " << x2 << endl;
    }

    return 0;
}