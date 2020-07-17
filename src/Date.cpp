#include "Date.h"
#include <string>
#include <sstream>

Date::Date()
{
    d = 0;
    m = 0;
    y = 0;
}

Date::Date(int day, int month, int year)
{
    d = day;
    m = month;
    y = year;
}

void Date::operator=(const Date& date)
{
    d = date.d;
    m = date.m;
    y = date.y;
}

bool Date::operator <(const Date &date)
{
    if(y < date.y)
    {
        return true;
    }
    else if(y == date.y)
    {
        if(m < date.m)
        {
            return true;
        }
        else if(m == date.m)
        {
            if(d < date.d)
                return true;
            else
                return false;
        }
        else
            return false;
    }
    else
        return false;
}

bool Date::operator >(const Date &date)
{
    if(y > date.y)
    {
        return true;
    }
    else if(y == date.y)
    {
        if(m > date.m)
        {
            return true;
        }
        else if(m == date.m)
        {
            if(d > date.d)
                return true;
            else
                return false;
        }
        else
            return false;
    }
    else
        return false;
}

bool Date::operator ==(const Date &date)
{
    if(y == date.y)
    {
        if(m == date.m)
        {
            if(d == date.d)
                return true;
            else
                return false;
        }
        else
            return false;
    }
    else
        return false;
}

bool Date::operator <=(const Date &date)
{
    if(y < date.y)
    {
        return true;
    }
    else if(y == date.y)
    {
        if(m < date.m)
        {
            return true;
        }
        else if(m == date.m)
        {
            if(d < date.d)
                return true;
            else
                return false;
        }
        else
            return false;
    }
    else
        return false;
}

void Date::setDay(int day)
{
    if(day>0 && day<32)
    {
        d=day;
    }
}

int Date::getDay()
{
    return d;
}

void Date::setMonth(int month)
{
    if(month>0 && month<=12)
    {
        m=month;
    }
}

int Date::getMonth()
{
    return m;
}

void Date::setYear(int year)
{
    if(year>1500 && year<=2019)
    {
        y=year;
    }
}

int Date::getYear()
{
    return y;
}


