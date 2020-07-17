#include "Time.h"
#include <string>
#include <sstream>

Time::Time()
{
    hour = 0;
    minute = 0;
}

Time::Time(int h, int m)
{
    hour = h;
    minute = m;
}

void Time::operator=(const Time& t)
{
    hour = t.hour;
    minute = t.minute;
}

bool Time::operator <(const Time &time)
{
    if(hour < time.hour)
    {
        return true;
    }
    else if(hour == time.hour)
    {
        if(minute < time.minute)
        {
            return true;
        }
        else
            return false;
    }
    else
        return false;
}

bool Time::operator > (const Time &time)
{
    if(hour > time.hour)
    {
        return true;
    }
    else if(hour == time.hour)
    {
        if(minute > time.minute)
        {
            return true;
        }
        else
            return false;
    }
    else
        return false;
}

bool Time::operator == (const Time &time)
{
    if(hour == time.hour)
    {
        if(minute == time.minute)
        {
            return true;
        }
        else
            return false;
    }
    else
        return false;
}

void Time::setHour(int h)
{
    if(h>=0 && h<=24)
    {
        hour = h;
    }
}

int Time::getHour()
{
    return hour;
}

void Time::setMinute(int m)
{
    if(m>=0 && m<60)
    {
        minute = m;
    }
}

int Time::getMinute()
{
    return minute;
}
