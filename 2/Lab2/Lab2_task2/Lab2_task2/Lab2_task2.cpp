#include <iostream>
#include <string>
using namespace std;

int main()
{
    string snils;
    cin >> snils;

    
    if (snils.length() != 11)
    {
        cout << "False\n";
        return 0;
    }

    
    for (int i = 0; i < 7; i++)
    {
        if (snils[i] == snils[i + 1] && snils[i] == snils[i + 2])
        {
            cout << "False\n";
            return 0;
        }
    }

    
    int sum = 0;

    for (int i = 0; i < 9; i++)
    {
        int digit = snils[i] - '0'; 
        int position = 9 - i;
        sum += digit * position;
    }

    
    int control;

    if (sum < 100)
        control = sum;
    else if (sum == 100 || sum == 101)
        control = 0;
    else
    {
        int remainder = sum % 101;
        if (remainder < 100)
            control = remainder;
        else
            control = 0;
    }

   
    int given_control = (snils[9] - '0') * 10 + (snils[10] - '0');

    
    if (control == given_control)
        cout << "True\n";
    else
        cout << "False\n";

    return 0;
}