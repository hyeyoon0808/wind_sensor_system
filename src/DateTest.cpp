#include "Date.h"
#include <string>
#include <iostream>
#include <ostream>

using namespace std;

void Test1(Date d);
void Test2(Date d);
void Test3(Date d);
void Test4(Date d);
void Test5(Date d);
void Test6(Date d);
void Test7(Date d);
void Test8(Date d);
void Test9(Date d);
void Test10(Date d);
void Test11(Date d);
void Test12(Date d);
void Test13(Date d);
void Test14(Date d);
void Test15(Date d);
void Test16(Date d);
void Test17(Date d);
void Test18(Date d);
void Test19(Date d);
void Test20(Date d);
void Test21(Date d);
void Test22(Date d);
void Test23(Date d);
void Test24(Date d);
void Test25(Date d);
void Test26(Date d);
void Test27(Date d);
void Test28(Date d);
void Test29(Date d);
void Test30(Date d);
void Test31(Date d);
void Test32(Date d);
void Test33(Date d);
void Test34(Date d);
void Test35(Date d);
void Test36(Date d);

/*
int main()
{
    Date d;

    cout<<"Testing Date Class..."<<'\n'<<endl;
    Test1(d);
    Test2( d);
    Test3( d);
    Test4( d);
    Test5( d);
    Test6( d);
    Test7( d);
    Test8( d);
    Test9( d);
    Test10( d);
    Test11( d);
    Test12( d);
    Test13( d);
    Test14( d);
    Test15( d);
    Test16( d);
    Test17( d);
    Test18( d);
    Test19( d);
    Test20( d);
    Test21( d);
    Test22( d);
    Test23( d);
    Test24( d);
    Test25( d);
    Test26( d);
    Test27( d);
    Test28( d);
    Test29( d);
    Test30( d);
    Test31( d);
    Test32( d);
    Test33( d);
    Test34( d);
    Test35( d);
    Test36( d);

}
*/


void Test1(Date d)
{
    int value = 0;
    cout<<"<Test 1>"<<endl;
    cout<<"Check if the day sets a value of 0 "<<endl;
    d.setDay(value);
    cout<<d.getDay()<<endl;
}

void Test2(Date d)
{
    int value = 0;
    cout<<"<Test 2>"<<endl;
    cout<<"Check if the month sets a value of 0 "<<endl;
    d.setMonth(value);
    cout<<d.getMonth()<<endl;
}

void Test3(Date d)
{
    int value = 0;
    cout<<"<Test 3>"<<endl;
    cout<<"Check if the year sets a value of 0 "<<endl;
    d.setYear(value);
    cout<<d.getYear()<<endl;
}

void Test4(Date d)
{
    int value = -1;
    cout<<"<Test 4>"<<endl;
    cout<<"Check if the day sets a value of negative integer"<<endl;
    d.setDay(value);
    cout<<d.getDay()<<endl;
}

void Test5(Date d)
{
    int value = -1;
    cout<<"<Test 5>"<<endl;
    cout<<"Check if the month sets a value of negative integer"<<endl;
    d.setMonth(value);
    cout<<d.getMonth()<<endl;
}

void Test6(Date d)
{
    int value = -1;
    cout<<"<Test 6>"<<endl;
    cout<<"Check if the year sets a value of negative integer"<<endl;
    d.setYear(value);
    cout<<d.getYear()<<endl;
}

void Test7(Date d)
{
    int value = 32;
    cout<<"<Test 7>"<<endl;
    cout<<"Check if the day sets a value which is over than the condition "<<endl;
    d.setDay(value);
    cout<<d.getDay()<<endl;
}

void Test8(Date d)
{
    int value = 13;
    cout<<"<Test 8>"<<endl;
    cout<<"Check if the month sets a value which is over than the condition "<<endl;
    d.setMonth(value);
    cout<<d.getMonth()<<endl;
}

void Test9(Date d)
{
    int value = 2020;
    cout<<"<Test 9>"<<endl;
    cout<<"Check if the year sets a value which is over than the condition "<<endl;
    d.setYear(value);
    cout<<d.getYear()<<endl;
}

void Test10(Date d)
{
    int value = +1;
    cout<<"<Test 10>"<<endl;
    cout<<"Check if the day sets a value with a plus symbol"<<endl;
    d.setDay(value);
    cout<<d.getDay()<<endl;
}

void Test11(Date d)
{
    int value = +12;
    cout<<"<Test 11>"<<endl;
    cout<<"Check if the month sets a value with a plus symbol"<<endl;
    d.setMonth(value);
    cout<<d.getMonth()<<endl;
}

void Test12(Date d)
{
    int value = +2015;
    cout<<"<Test 12>"<<endl;
    cout<<"Check if the year sets a value with a plus symbol"<<endl;
    d.setYear(value);
    cout<<d.getYear()<<endl;
}

void Test13(Date d)
{
    int value = 1+1;
    cout<<"<Test 13>"<<endl;
    cout<<"Check if the day sets a value by calculation"<<endl;
    d.setDay(value);
    cout<<d.getDay()<<endl;
}

void Test14(Date d)
{
    int value = 1+1;
    cout<<"<Test 14>"<<endl;
    cout<<"Check if the month sets a value by calculation"<<endl;
    d.setMonth(value);
    cout<<d.getMonth()<<endl;
}

void Test15(Date d)
{
    int value = 1000+1015;
    cout<<"<Test 15>"<<endl;
    cout<<"Check if the year sets a value by calculation"<<endl;
    d.setYear(value);
    cout<<d.getYear()<<endl;
}

void Test16(Date d)
{
    int value = +-1;
    cout<<"<Test 16>"<<endl;
    cout<<"Check if the day sets a value with two positive and negative symbols "<<endl;
    d.setDay(value);
    cout<<d.getDay()<<endl;
}

void Test17(Date d)
{
    int value = +-1;
    cout<<"<Test 17>"<<endl;
    cout<<"Check if the month sets a value with two positive and negative symbols "<<endl;
    d.setMonth(value);
    cout<<d.getMonth()<<endl;
}

void Test18(Date d)
{
    int value = +-2015;
    cout<<"<Test 18>"<<endl;
    cout<<"Check if the year sets a value with two positive and negative symbols "<<endl;
    d.setYear(value);
    cout<<d.getYear()<<endl;
}

void Test19(Date d)
{
    int value = -+1;
    cout<<"<Test 19>"<<endl;
    cout<<"Check if the day sets a value with two positive and negative symbols"<<endl;
    d.setDay(value);
    cout<<d.getDay()<<endl;
}

void Test20(Date d)
{
    int value = -+1;
    cout<<"<Test 20>"<<endl;
    cout<<"Check if the month sets a value with two positive and negative symbols"<<endl;
    d.setMonth(value);
    cout<<d.getMonth()<<endl;
}

void Test21(Date d)
{
    int value = -+2015;
    cout<<"<Test 21>"<<endl;
    cout<<"Check if the year sets a value with two positive and negative symbols"<<endl;
    d.setYear(value);
    cout<<d.getYear()<<endl;
}

void Test22(Date d)
{
    int value = 20/2;
    cout<<"<Test 22>"<<endl;
    cout<<"Check if the day sets a value by division"<<endl;
    d.setDay(value);
    cout<<d.getDay()<<endl;
}

void Test23(Date d)
{
    int value = 6/2;
    cout<<"<Test 23>"<<endl;
    cout<<"Check if the month sets a value by division"<<endl;
    d.setMonth(value);
    cout<<d.getMonth()<<endl;
}

void Test24(Date d)
{
    int value = 4000/2;
    cout<<"<Test 24>"<<endl;
    cout<<"Check if the year sets a value by division"<<endl;
    d.setYear(value);
    cout<<d.getYear()<<endl;
}

void Test25(Date d)
{
    int value = 30/4;
    cout<<"<Test 25>"<<endl;
    cout<<"Check if the day sets a float value by division"<<endl;
    d.setDay(value);
    cout<<d.getDay()<<endl;
}

void Test26(Date d)
{
    int value = 7/3;
    cout<<"<Test 26>"<<endl;
    cout<<"Check if the month sets a float value by division"<<endl;
    d.setMonth(value);
    cout<<d.getMonth()<<endl;
}

void Test27(Date d)
{
    int value = 6223/3;
    cout<<"<Test 27>"<<endl;
    cout<<"Check if the year sets a float value by division"<<endl;
    d.setYear(value);
    cout<<d.getYear()<<endl;
}

void Test28(Date d)
{
    int value = 30.03;
    cout<<"<Test 28>"<<endl;
    cout<<"Check if the day sets a value of type float"<<endl;
    d.setDay(value);
    cout<<d.getDay()<<endl;
}

void Test29(Date d)
{
    int value = 11.23;
    cout<<"<Test 29>"<<endl;
    cout<<"Check if the month sets a value of type float"<<endl;
    d.setMonth(value);
    cout<<d.getMonth()<<endl;
}

void Test30(Date d)
{
    int value = 2014.56;
    cout<<"<Test 30>"<<endl;
    cout<<"Check if the year sets a value of type float"<<endl;
    d.setYear(value);
    cout<<d.getYear()<<endl;
}

void Test31(Date d)
{
    int value = 5/12;
    cout<<"<Test 31>"<<endl;
    cout<<"Check if the day sets a value by division less than 0"<<endl;
    d.setDay(value);
    cout<<d.getDay()<<endl;
}

void Test32(Date d)
{
    int value = 5/12;
    cout<<"<Test 32>"<<endl;
    cout<<"Check if the month sets a value by division less than 0"<<endl;
    d.setMonth(value);
    cout<<d.getMonth()<<endl;
}

void Test33(Date d)
{
    int value = 5/12;
    cout<<"<Test 33>"<<endl;
    cout<<"Check if the year sets a value by division less than 0"<<endl;
    d.setYear(value);
    cout<<d.getYear()<<endl;
}

void Test34(Date d)
{
    int value = 2*10;
    cout<<"<Test 34>"<<endl;
    cout<<"Check if the day sets a value by multiplication"<<endl;
    d.setDay(value);
    cout<<d.getDay()<<endl;
}

void Test35(Date d)
{
    int value = 3*4;
    cout<<"<Test 35>"<<endl;
    cout<<"Check if the month sets a value by multiplication"<<endl;
    d.setMonth(value);
    cout<<d.getMonth()<<endl;
}

void Test36(Date d)
{
    int value = 1003*2;
    cout<<"<Test 36>"<<endl;
    cout<<"Check if the year sets a value by multiplication"<<endl;
    d.setYear(value);
    cout<<d.getYear()<<endl;
}

