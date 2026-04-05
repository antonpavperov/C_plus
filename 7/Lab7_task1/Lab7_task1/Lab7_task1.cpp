#include <iostream>
using namespace std;

struct Time
{
    int hours;
    int minutes;
    int seconds;

    
    int toSeconds() const
    {
        return hours * 3600 + minutes * 60 + seconds;
    }

    
    Time add(const Time& t) const
    {
        Time res;

        res.seconds = seconds + t.seconds;
        res.minutes = minutes + t.minutes + res.seconds / 60;
        res.seconds %= 60;

        res.hours = hours + t.hours + res.minutes / 60;
        res.minutes %= 60;

        return res;
    }

    
    Time subtract(const Time& t) const
    {
        int total1 = toSeconds();
        int total2 = t.toSeconds();

        int diff = total1 - total2;

        if (diff < 0) diff = 0; 

        Time res;
        res.hours = diff / 3600;
        diff %= 3600;

        res.minutes = diff / 60;
        res.seconds = diff % 60;

        return res;
    }
};

int main()
{
    Time t1, t2;

    cout << "Enter time 1 (h m s): ";
    cin >> t1.hours >> t1.minutes >> t1.seconds;

    cout << "Enter time 2 (h m s): ";
    cin >> t2.hours >> t2.minutes >> t2.seconds;

    
    cout << "Time1 in seconds: " << t1.toSeconds() << endl;

    // сложение
    Time sum = t1.add(t2);
    cout << "Sum: "
        << sum.hours << ":"
        << sum.minutes << ":"
        << sum.seconds << endl;

   
    Time diff = t1.subtract(t2);
    cout << "Difference: "
        << diff.hours << ":"
        << diff.minutes << ":"
        << diff.seconds << endl;

    return 0;
}