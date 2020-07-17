#include "WindLog.h"
#include "Date.h"
#include "Time.h"
#include "Sensor.h"
#include "BST.h"

#include <string>
#include <sstream>

WindLog::WindLog()
{

}

WindLog::WindLog(Date& d, Time& t, Sensor& s)
{

}

void WindLog::setDate(Date& d)
{
    date = d;
}

Date& WindLog::getDate()
{
    return date;
}

void WindLog::setTime(Time& t)
{
    time = t;
}

Time& WindLog::getTime()
{
    return time;
}

bool WindLog::operator <(const WindLog &W)
{
    if(date < W.date)
    {
        return true;
    }
    else if(date == W.date)
    {
        if(time < W.time)
        {
            return true;
        }
        else
            return false;
    }
    else
        return false;


}

bool WindLog::operator == (const WindLog &W)
{
    if(date == W.date)
    {
        if(time == W.time)
        {
            return true;
        }
        else
            return false;
    }
    else
        return false;
}

bool WindLog::operator >(const WindLog &W)
{
    if(date > W.date)
    {
        return true;
    }
    else if(date == W.date)
    {
        if(time > W.time)
        {
            return true;
        }
        else
            return false;
    }
    else
        return false;
}

bool WindLog::operator <= (const WindLog &W)
{
    if(date < W.date || date == W.date)
        return true;
    else
        return false;
}


void WindLog::setSensor(Sensor& s)
{
    sensor = s;
}

Sensor& WindLog::getSensor()
{
    return sensor;
}
