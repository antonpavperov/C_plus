#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x1, y1, x2, y2, x3, y3, x4, y4, x5, y5;

    cout << "Enter 5 points (x y):\n";

    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;
    cin >> x4 >> y4;
    cin >> x5 >> y5;

    double area;

    area = x1 * y2 + x2 * y3 + x3 * y4 + x4 * y5 + x5 * y1
        - (y1 * x2 + y2 * x3 + y3 * x4 + y4 * x5 + y5 * x1);

    area = fabs(area) / 2.0;

    cout << "Area = " << area << endl;

    return 0;
}