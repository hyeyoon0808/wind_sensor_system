#include "Sensor.h"

Sensor::Sensor()
{
    sp = 0.0;
    so = 0.0;
    t = 0.0;
}

Sensor::Sensor(float speed, float solar, float temp)
{
    sp=speed;
    so=solar;
    t=temp;
}

void Sensor::operator=(const Sensor& s)
{
    sp=s.sp;
    so=s.so;
    t=s.t;
}

float Sensor::getSpeed()
{
    return sp;
}

void Sensor::setSpeed(float speed)
{
    if(speed>=0)
    {
        sp = speed;
    }
}

float Sensor::getSolarRadiation()
{
    return so;
}

void Sensor::setSolarRadiation(float solar)
{
    if(solar>=100)
    {
        so = solar;
    }
    else
    {
        so = 0;
    }
}

float Sensor::getAirTemperature()
{
    return t;
}

void Sensor::setAirTemperature(float temp)
{
    if(temp>-100 &&temp<200)
    {
        t = temp;
    }
}


float Sensor::convertSpeed(float speed)
{
    return speed* 3.6;
}

float Sensor::convertSolarRadiation(float solar)
{
    return solar=solar/(6000);
}





