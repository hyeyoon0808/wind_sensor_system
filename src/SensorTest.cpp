#include "Sensor.h"
#include <string>
#include <iostream>
#include <ostream>

using namespace std;

void Test1(Sensor s);
void Test2(Sensor s);
void Test3(Sensor s);
void Test4(Sensor s);
void Test5(Sensor s);
void Test6(Sensor s);
void Test7(Sensor s);
void Test8(Sensor s);
void Test9(Sensor s);
void Test10(Sensor s);
void Test11(Sensor s);
void Test12(Sensor s);
void Test13(Sensor s);
void Test14(Sensor s);
void Test15(Sensor s);
void Test16(Sensor s);
void Test17(Sensor s);
void Test18(Sensor s);

/*
int main()
{
    Sensor s;

    cout<<"Testing Sensor Class..."<<'\n'<<endl;
    Test1(s);
    Test2(s);
    Test3(s);
    Test4(s);
    Test5(s);
    Test6(s);
    Test7(s);
    Test8(s);
    Test9(s);
    Test10(s);
    Test11(s);
    Test12(s);
    Test13(s);
    Test14(s);
    Test15(s);
    Test16(s);
    Test17(s);
    Test18(s);

}
*/

void Test1(Sensor s)
{
    float value = -20;
    cout<<"<Test 1>"<<endl;
    cout<<"Check if the wind speed sets a value of negative integer"<<endl;
    s.setSpeed(value);
    cout<<s.getSpeed()<<endl;
}

void Test2(Sensor s)
{
    float value;
    cout<<"<Test 2>"<<endl;
    cout<<"Check if the wind speed sets a value of nothing"<<endl;
    s.setSpeed(value);
    cout<<s.getSpeed()<<endl;
}
void Test3(Sensor s)
{
    float value = 000;
    cout<<"<Test 3>"<<endl;
    cout<<"Check if the wind speed sets a value of 000"<<endl;
    s.setSpeed(value);
    cout<<s.getSpeed()<<endl;
}
void Test4(Sensor s)
{
    float value = -0;
    cout<<"<Test 4>"<<endl;
    cout<<"Check if the wind speed sets a value of -0"<<endl;
    s.setSpeed(value);
    cout<<s.getSpeed()<<endl;
}
void Test5(Sensor s)
{
    float value = 10*2;
    cout<<"<Test 5>"<<endl;
    cout<<"Check if the wind speed sets a right value by multiplication"<<endl;
    s.setSpeed(value);
    cout<<s.getSpeed()<<endl;
}
void Test6(Sensor s)
{
    float value = 123456789;
    cout<<"<Test 6>"<<endl;
    cout<<"Check if the wind speed sets a big value of integer"<<endl;
    s.setSpeed(value);
    cout<<s.getSpeed()<<endl;
}
void Test7(Sensor s)
{
    float value = 30.3333333333333333333333333;
    cout<<"<Test 7>"<<endl;
    cout<<"Check if the wind speed sets a value with long decimal"<<endl;
    s.setSpeed(value);
    cout<<s.getSpeed()<<endl;
}
void Test8(Sensor s)
{
    float value = -200;
    cout<<"<Test 8>"<<endl;
    cout<<"Check if the solar radiation sets a value of negative integer"<<endl;
    s.setSolarRadiation(value);
    cout<<s.getSolarRadiation()<<endl;
}
void Test9(Sensor s)
{
    float value;
    cout<<"<Test 9>"<<endl;
    cout<<"Check if the solar radiation sets a value of nothing"<<endl;
    s.setSolarRadiation(value);
    cout<<s.getSolarRadiation()<<endl;
}
void Test10(Sensor s)
{
    float value = 100*2;
    cout<<"<Test 10>"<<endl;
    cout<<"Check if the solar radiation sets a value by multiplication"<<endl;
    s.setSolarRadiation(value);
    cout<<s.getSolarRadiation()<<endl;
}
void Test11(Sensor s)
{
    float value = 100000000000000000000000000;
    cout<<"<Test 11>"<<endl;
    cout<<"Check if the solar radiation sets a bigvalue"<<endl;
    s.setSolarRadiation(value);
    cout<<s.getSolarRadiation()<<endl;
}
void Test12(Sensor s)
{
    float value = 50;
    cout<<"<Test 12>"<<endl;
    cout<<"Check if the solar radiation sets a value less than 100"<<endl;
    s.setSolarRadiation(value);
    cout<<s.getSolarRadiation()<<endl;
}
void Test13(Sensor s)
{
    float value = 150.555555555555555555555555;
    cout<<"<Test 13>"<<endl;
    cout<<"Check if the solar radiation sets a value with long decimal"<<endl;
    s.setSolarRadiation(value);
    cout<<s.getSolarRadiation()<<endl;
}
void Test14(Sensor s)
{
    float value = 210;
    cout<<"<Test 14>"<<endl;
    cout<<"Check if the air temperature sets a value over 200"<<endl;
    s.setAirTemperature(value);
    cout<<s.getAirTemperature()<<endl;
}
void Test15(Sensor s)
{
    float value = -200;
    cout<<"<Test 15>"<<endl;
    cout<<"Check if the air temperature sets a value less than -100"<<endl;
    s.setAirTemperature(value);
    cout<<s.getAirTemperature()<<endl;
}
void Test16(Sensor s)
{
    float value = -50*-3;
    cout<<"<Test 16>"<<endl;
    cout<<"Check if the air temperature sets a value by multiplication"<<endl;
    s.setAirTemperature(value);
    cout<<s.getAirTemperature()<<endl;
}
void Test17(Sensor s)
{
    float value = -200/5;
    cout<<"<Test 17>"<<endl;
    cout<<"Check if the air temperature sets a value by division"<<endl;
    s.setAirTemperature(value);
    cout<<s.getAirTemperature()<<endl;
}
void Test18(Sensor s)
{
    float value = 50.5555555555555555555555555;
    cout<<"<Test 18>"<<endl;
    cout<<"Check if the air temperature sets a value with long decimal"<<endl;
    s.setAirTemperature(value);
    cout<<s.getAirTemperature()<<endl;
}






