#include <iostream>
#include <cmath>
using namespace std;


double area(double a)
{
    return (sqrt(3) / 4) * a * a;
}


double area(double a, double b, double c)
{
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main()
{
    int choice;

    cout << "Choose triangle type:\n";
    cout << "1 - Equilateral triangle\n";
    cout << "2 - Scalene triangle\n";
    cin >> choice;

    if (choice == 1)
    {
        double a;
        cout << "Enter side: ";
        cin >> a;

        cout << "Area: " << area(a) << endl;
    }
    else if (choice == 2)
    {
        double a, b, c;
        cout << "Enter 3 sides: ";
        cin >> a >> b >> c;

        cout << "Area: " << area(a, b, c) << endl;
    }
    else
    {
        cout << "Wrong choice\n";
    }

    return 0;
}