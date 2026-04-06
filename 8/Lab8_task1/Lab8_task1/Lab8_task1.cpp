#include <iostream>
using namespace std;

class Time
{
private:
    int hours;
    int minutes;
    int seconds;

    
    void normalize()
    {
        if (seconds >= 60)
        {
            minutes += seconds / 60;
            seconds %= 60;
        }

        if (minutes >= 60)
        {
            hours += minutes / 60;
            minutes %= 60;
        }

        if (hours >= 24)
        {
            hours %= 24;
        }
    }

public:
    
    Time() : hours(0), minutes(0), seconds(0) {}

    
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s)
    {
        normalize();
    }

    
    void print() const
    {
        cout << (hours < 10 ? "0" : "") << hours << ":"
            << (minutes < 10 ? "0" : "") << minutes << ":"
            << (seconds < 10 ? "0" : "") << seconds << endl;
    }

    
    Time add(const Time& t) const
    {
        Time res;

        res.hours = hours + t.hours;
        res.minutes = minutes + t.minutes;
        res.seconds = seconds + t.seconds;

        res.normalize();

        return res;
    }
};