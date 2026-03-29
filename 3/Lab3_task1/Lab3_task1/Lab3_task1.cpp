#include <iostream>
#include <string>
using namespace std;

bool isValidSNILS(string snils)
{
    string digits = "";

    for (int i = 0; i < snils.length(); i++)
    {
        if (isdigit(snils[i]))
        {
            digits += snils[i];
        }
        else if (snils[i] == ' ' || snils[i] == '-')
        {
            continue;
        }
        else
        {
            return false;
        }
    }

    if (digits.length() != 11)
        return false;

    int sum = 0;

    for (int i = 0; i < 9; i++)
    {
        int digit = digits[i] - '0';
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

    int given_control = (digits[9] - '0') * 10 + (digits[10] - '0');

    return control == given_control;
}

int main()
{
    string snils;
    getline(cin, snils);

    if (isValidSNILS(snils))
        cout << "True\n";
    else
        cout << "False\n";

    return 0;
}