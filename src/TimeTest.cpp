#include "Time.h"
#include <string>
#include <iostream>
#include <ostream>

using namespace std;

void Test1(Time t);
void Test2(Time t);
void Test3(Time t);
void Test4(Time t);
void Test5(Time t);
void Test6(Time t);
void Test7(Time t);
void Test8(Time t);
void Test9(Time t);
void Test10(Time t);
void Test11(Time t);
void Test12(Time t);
void Test13(Time t);
void Test14(Time t);
void Test15(Time t);
void Test16(Time t);
void Test17(Time t);
void Test18(Time t);
void Test19(Time t);
void Test20(Time t);
void Test21(Time t);
void Test22(Time t);
void Test23(Time t);
void Test24(Time t);
void Test25(Time t);
void Test26(Time t);
void Test27(Time t);
void Test28(Time t);

/*
int main()
{
    Time t;

    cout<<"Testing Time Class..."<<'\n'<<endl;
    Test1(t);
    Test2(t);
    Test3(t);
    Test4(t);
    Test5(t);
    Test6(t);
    Test7(t);
    Test8(t);
    Test9(t);
    Test10(t);
    Test11(t);
    Test12(t);
    Test13(t);
    Test14(t);
    Test15(t);
    Test16(t);
    Test17(t);
    Test18(t);
    Test19(t);
    Test20(t);
    Test21(t);
    Test22(t);
    Test23(t);
    Test24(t);
    Test25(t);
    Test26(t);
    Test27(t);
    Test28(t);

}
*/

void Test1(Time t)
{
    int value = 0;
    cout<<"<Test 1>"<<endl;
    cout<<"Check if the hour sets a value of 0"<<endl;
    t.setHour(value);
    cout<<t.getHour()<<endl;
}

void Test2(Time t)
{
    int value = 0;
    cout<<"<Test 2>"<<endl;
    cout<<"Check if the hour sets a value of 000"<<endl;
    t.setHour(value);
    cout<<t.getHour()<<endl;
}

void Test3(Time t)
{
    int value = -0;
    cout<<"<Test 3>"<<endl;
    cout<<"Check if the hour sets a value of -0"<<endl;
    t.setHour(value);
    cout<<t.getHour()<<endl;
}

void Test4(Time t)
{
    int value = 1*2;
    cout<<"<Test 4>"<<endl;
    cout<<"Check if the hour sets a right value by multiplication"<<endl;
    t.setHour(value);
    cout<<t.getHour()<<endl;
}

void Test5(Time t)
{
    int value = 44/2;
    cout<<"<Test 5>"<<endl;
    cout<<"Check if the hour sets a right value by division"<<endl;
    t.setHour(value);
    cout<<t.getHour()<<endl;
}

void Test6(Time t)
{
    int value = 2.22;
    cout<<"<Test 6>"<<endl;
    cout<<"Check if the hour sets a value of type float"<<endl;
    t.setHour(value);
    cout<<t.getHour()<<endl;
}

void Test7(Time t)
{
    int value = -2;
    cout<<"<Test 7>"<<endl;
    cout<<"Check if the hour sets a value of negative integer"<<endl;
    t.setHour(value);
    cout<<t.getHour()<<endl;
}

void Test8(Time t)
{
    int value = 25;
    cout<<"<Test 8>"<<endl;
    cout<<"Check if the hour sets a value over 24"<<endl;
    t.setHour(value);
    cout<<t.getHour()<<endl;
}

void Test9(Time t)
{
    int value = 12.00;
    cout<<"<Test 9>"<<endl;
    cout<<"Check if the hour sets a right value with decimal"<<endl;
    t.setHour(value);
    cout<<t.getHour()<<endl;
}

void Test10(Time t)
{
    int value = 7/3;
    cout<<"<Test 10>"<<endl;
    cout<<"Check if the hour sets a float value by division"<<endl;
    t.setHour(value);
    cout<<t.getHour()<<endl;
}

void Test11(Time t)
{
    int value = 60/2;
    cout<<"<Test 11>"<<endl;
    cout<<"Check if the hour sets a big value by division"<<endl;
    t.setHour(value);
    cout<<t.getHour()<<endl;
}

void Test12(Time t)
{
    int value = 3+4;
    cout<<"<Test 12>"<<endl;
    cout<<"Check if the hour sets a value by addition"<<endl;
    t.setHour(value);
    cout<<t.getHour()<<endl;
}

void Test13(Time t)
{
    int value = 10-2;
    cout<<"<Test 13>"<<endl;
    cout<<"Check if the hour sets a value of subtraction"<<endl;
    t.setHour(value);
    cout<<t.getHour()<<endl;
}

void Test14(Time t)
{
    int value = +-5;
    cout<<"<Test 14>"<<endl;
    cout<<"Check if the hour sets a value with two positive and negative symbols"<<endl;
    t.setHour(value);
    cout<<t.getHour()<<endl;
}

void Test15(Time t)
{
    int value = 0;
    cout<<"<Test 15>"<<endl;
    cout<<"Check if the minute sets a value of 0"<<endl;
    t.setMinute(value);
    cout<<t.getMinute()<<endl;
}

void Test16(Time t)
{
    int value = 000;
    cout<<"<Test 16>"<<endl;
    cout<<"Check if the minute sets a value of 000"<<endl;
    t.setMinute(value);
    cout<<t.getMinute()<<endl;
}

void Test17(Time t)
{
    int value = -0;
    cout<<"<Test 17>"<<endl;
    cout<<"Check if the minute sets a value by multiplication"<<endl;
    t.setMinute(value);
    cout<<t.getMinute()<<endl;
}

void Test18(Time t)
{
    int value = 20*2;
    cout<<"<Test 18>"<<endl;
    cout<<"Check if the minute sets a right value by multiplication"<<endl;
    t.setMinute(value);
    cout<<t.getMinute()<<endl;
}

void Test19(Time t)
{
    int value = 80/2;
    cout<<"<Test 19>"<<endl;
    cout<<"Check if the minute sets a right value by division "<<endl;
    t.setMinute(value);
    cout<<t.getMinute()<<endl;
}

void Test20(Time t)
{
    int value = 33.33;
    cout<<"<Test 20>"<<endl;
    cout<<"Check if the minute sets a right value of type float"<<endl;
    t.setMinute(value);
    cout<<t.getMinute()<<endl;
}

void Test21(Time t)
{
    int value = -30;
    cout<<"<Test 21>"<<endl;
    cout<<"Check if the minute sets a right value of negative integer"<<endl;
    t.setMinute(value);
    cout<<t.getMinute()<<endl;
}

void Test22(Time t)
{
    int value = 61;
    cout<<"<Test 22>"<<endl;
    cout<<"Check if the minute sets a value over 60"<<endl;
    t.setMinute(value);
    cout<<t.getMinute()<<endl;
}

void Test23(Time t)
{
    int value = 30.00;
    cout<<"<Test 23>"<<endl;
    cout<<"Check if the minute sets a right value with decimal"<<endl;
    t.setMinute(value);
    cout<<t.getMinute()<<endl;
}

void Test24(Time t)
{
    int value = 70/3;
    cout<<"<Test 24>"<<endl;
    cout<<"Check if the minute sets a float value by division"<<endl;
    t.setMinute(value);
    cout<<t.getMinute()<<endl;
}

void Test25(Time t)
{
    int value = 200/2;
    cout<<"<Test 25>"<<endl;
    cout<<"Check if the minute sets a big value by division"<<endl;
    t.setMinute(value);
    cout<<t.getMinute()<<endl;
}

void Test26(Time t)
{
    int value = 30+20;
    cout<<"<Test 26>"<<endl;
    cout<<"Check if the minute sets a value by addition"<<endl;
    t.setMinute(value);
    cout<<t.getMinute()<<endl;
}

void Test27(Time t)
{
    int value = 40-10;
    cout<<"<Test 27>"<<endl;
    cout<<"Check if the minute sets a value by subtraction"<<endl;
    t.setMinute(value);
    cout<<t.getMinute()<<endl;
}

void Test28(Time t)
{
    int value = +-30;
    cout<<"<Test 28>"<<endl;
    cout<<"Check if the minute sets a value with two positive and negative symbols"<<endl;
    t.setMinute(value);
    cout<<t.getMinute()<<endl;
}


