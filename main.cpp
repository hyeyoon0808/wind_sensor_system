#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <stdlib.h>
#include <iomanip>
#include <vector>
#include <map>

#include "Date.h"
#include "Time.h"
#include "Sensor.h"
#include "WindLog.h"
#include "BST.h"

using namespace std;

/** @class main class
 *
 * @author - Hyeyoon Cho
 * @date - 29 February 2019
 * @version - 1
 *
 */
void menu();
int ReadFile(BST<WindLog> &bstWl);
int InputData(ifstream &infile, BST<WindLog>& bstWl);
void AverageByMonthYear(vector<WindLog>& vec);
void AverageByYear(vector<WindLog>& vec);
void TotalSolarRadi(vector<WindLog>& vec);
int OutputAvgTotal(ofstream& ofile, vector<WindLog>& vec);
float AverageWindSpeed(vector<WindLog> &vec, int year, int month);
float AverageTemperature(vector<WindLog> &vec, int year, int month);
float TotalSolarRadiation(vector<WindLog> &vec, int year, int month);
void HighestSolarRadi(vector<WindLog> &vec);
bool CheckMonth(vector<WindLog> &vec, int year, int month);
bool CheckYear(vector<WindLog> &vec, int year);
void AddSpeed(vector<WindLog> &vec);
void AddTemp(vector<WindLog> &vec);
void AddRadi(vector<WindLog> &vec);

string outputMonth2(int month);
void pointer(WindLog &w);
vector<WindLog> vec;
BST<WindLog> bstWl;
void (*fp)(WindLog);

int main()
{
    ReadFile(bstWl);
    void (*fp)(WindLog &w) = &pointer;
    ofstream ofile("WindTempSolar.csv");
    cout<<fixed<<setprecision(1);
    bstWl.InorderTraversal(fp);
    int choice;
    while(choice != 6){
        switch(choice)
        {
        case 1:
            AverageByMonthYear(vec);
            //call function to get average wind speed and average ambient air temperature for a specified month and year.
            break;
        case 2:
            AverageByYear(vec);
            //call function to get the average wind speed and average ambient air temperature for each month of a specified year
            break;
        case 3:
            TotalSolarRadi(vec);
            //call function to get total solar radiation in Kwh/m^2 for each month of a specified year
            break;
        case 4:
            //call function to get average wind speed(km/h), average ambient air temperature and total solar radiation
            OutputAvgTotal(ofile, vec);
            break;
        case 5:
            HighestSolarRadi(vec);


        default:
            //if choice is not valid
            cout <<" "<< endl;
        }
        menu();
        cout<<"Enter an option(1-6): ";
        cin>>choice;
    }
    cout << "Program is exited." << endl;


}


//a function to get average wind speed and average ambient air temperature for a specified month and year.
void AverageByMonthYear(vector<WindLog>& vec)
{
    int year = 0, month=0;
    float avgSpeed = 0.0;
    float avgTemp = 0.0;


    cout<< "Enter month: ";
    cin >> month;
    cout<< "Enter year: ";
    cin >> year;

    avgSpeed = AverageWindSpeed(vec, year, month);
    avgTemp = AverageTemperature(vec, year, month);
    cout<<outputMonth2(month)<<' '<<year<<": ";
    if(CheckMonth(vec, year, month)== true)
    {
         cout<<avgSpeed<<" km/h, "<<avgTemp<<" degrees C";
    }
    else
    {
       cout<<"No data";
    }
    cout << "\n";
}

//a function to get the average wind speed and average ambient air temperature for each month of a specified year
void AverageByYear(vector<WindLog>& vec)
{
    int year = 0;
    float avgSpeed = 0.0;
    float avgTemp = 0.0;

    cout<< "Enter year: ";
    cin >> year;

    for(int month=1; month<=12; month++)
    {
        avgSpeed = AverageWindSpeed(vec, year, month);
        avgTemp = AverageTemperature(vec, year, month);

        cout<<outputMonth2(month)<<' '<<year<<": ";
        if(CheckMonth(vec, year, month)== true)
        {
            cout<<avgSpeed<<" km/h, "<<avgTemp<<" degrees C";
        }
        else
        {
           cout<<"No data";
        }
    cout << "\n";
    }
}




//A function to get total solar radiation in Kwh/m^2 for each month of a specified year

void TotalSolarRadi(vector<WindLog>& vec)
{
    int year = 0;
    float totalSolar = 0.0;

    cout<< "Enter year: ";
    cin >> year;
    for(int month=1; month<=12; month++)
    {
        totalSolar=TotalSolarRadiation(vec, year, month);
        cout<<outputMonth2(month)<<": ";
        if(CheckMonth(vec, year, month)== true)
        {
             cout<<totalSolar<<" kWh/m^2";
        }
        else
        {
           cout<<"No data";
        }

    cout << "\n";
    }
}


//A function to get average wind speed(km/h), average ambient air temperature and total solar radiation
int OutputAvgTotal(ofstream& ofile, vector<WindLog>& vec)
{
    int year = 0;
    float avgSpeed = 0.0;
    float avgTemp = 0.0;
    float totalSolar = 0.0;

    ofile<<fixed<<setprecision(1);
    cout<< "Enter year: ";
    cin >> year;
    ofile<<year<<endl;
    for(int month=1; month<=12; month++)
    {
        totalSolar=TotalSolarRadiation(vec, year, month);
        avgSpeed = AverageWindSpeed(vec, year, month);
        avgTemp = AverageTemperature(vec, year, month);

        if((CheckMonth(vec, year, month)== true)&(CheckYear(vec, year) == true))
        {
             ofile<<outputMonth2(month)<<',';
             ofile<<avgSpeed<<','<<avgTemp<<','<<totalSolar<<endl;
        }

    }
    if(CheckYear(vec, year) != true)
    {
        ofile<<"No data"<<endl;
    }
    cout<<"Printed to a file called 'WindTempSola.csv'"<<endl;
    return -2;
}


void HighestSolarRadi(vector<WindLog> &vec)
{
    int y=0, m=0, d=0;
    string date, day, month, year;
    float highestSolar=0.0;
    cout<<"Enter date"<<endl;
    cin>>date;

    day = date.substr(0, 2);
    month = date.substr(3, 2);
    year = date.substr(6, 4);
    d = atoi(day.c_str());
    m = atoi(month.c_str());
    y = atoi(year.c_str());

    cout<<d<<"/"<<m<<"/"<<y<<endl;

    for(unsigned int i=0; i < vec.size(); i++)
    {
        if((d==vec.at(i).getDate().getDay())&&(m==vec.at(i).getDate().getMonth())&&(y==vec.at(i).getDate().getYear()))
        {
            if(highestSolar<vec.at(i).getSensor().getSolarRadiation())
            {
                highestSolar = vec.at(i).getSensor().getSolarRadiation();
            }
        }

    }

    cout<<"Highest solar radiation for the day (dd/mm/yyyy): "<<highestSolar<<" W/m^2"<<endl;

    cout<<"Time:"<<endl;
    for(unsigned int i=0; i < vec.size(); i++)
    {
        if((d==vec.at(i).getDate().getDay())&&(m==vec.at(i).getDate().getMonth())&&(y==vec.at(i).getDate().getYear()))
        {
            if(highestSolar==vec.at(i).getSensor().getSolarRadiation())
            {
                cout<<vec.at(i).getTime().getHour()<<":"<<vec.at(i).getTime().getMinute()<<endl;
            }
        }
    }
}


bool CheckMonth(vector<WindLog> &vec, int year, int month)
{
    int quantity = vec.size();
    for(int i=0; i<quantity; i++)
    {
        int getY = vec.at(i).getDate().getYear();
        int getM = vec.at(i).getDate().getMonth();
        if((getY==year) && (getM==month))
        {
            return true;
        }
    }
    return false;
}

bool CheckYear(vector<WindLog> &vec, int year)
{
    int quantity = vec.size();
    for(int i=0; i<quantity; i++)
    {
        int getY = vec.at(i).getDate().getYear();
        if((getY==year))
        {
            return true;
        }
    }
    return false;
}

float AverageWindSpeed(vector<WindLog> &vec, int year, int month)
{
    float speed=0.0, averageSpeed=0.0;
    float total=0.0;
    int countSpeed=0;

    for(unsigned int i=0; i< vec.size(); i++)
    {
        int getY = vec.at(i).getDate().getYear();
        int getM = vec.at(i).getDate().getMonth();
        if((getY==year) && (getM==month))
        {
            speed=vec.at(i).getSensor().getSpeed();
            total+=vec.at(i).getSensor().convertSpeed(speed);
            countSpeed++;
        }
    }

    averageSpeed=total/countSpeed;
    return averageSpeed;
}

float AverageTemperature(vector<WindLog> &vec, int year, int month)
{
    float averageTemp=0.0;
    float totalTemp=0.0;
    int countTemp=0;

    for(unsigned int i=0; i< vec.size(); i++)
    {
        int getY = vec.at(i).getDate().getYear();
        int getM = vec.at(i).getDate().getMonth();
        if((getY==year) && (getM==month))
        {
            totalTemp+= vec.at(i).getSensor().getAirTemperature();
            countTemp++;
        }
    }

    averageTemp=totalTemp/countTemp;
    return averageTemp;
}

float TotalSolarRadiation(vector<WindLog> &vec, int year, int month)
{
    float solarRadiation=0.0;
    float totalSolar=0.0;

    for(unsigned int i=0; i< vec.size(); i++)
    {
        int getY = vec.at(i).getDate().getYear();
        int getM = vec.at(i).getDate().getMonth();
        if((getY==year) && (getM==month))
        {
            solarRadiation=vec.at(i).getSensor().getSolarRadiation();
            totalSolar+= vec.at(i).getSensor().convertSolarRadiation(solarRadiation);
        }
    }

    return totalSolar;
}

//prints the name of month
string outputMonth2(int month)
{
    string charMonth;
    map<int, string> m;
    m.insert(pair<int, string>(1,"January"));
    m.insert(pair<int, string>(2,"February"));
    m.insert(pair<int, string>(3,"March"));
    m.insert(pair<int, string>(4,"April"));
    m.insert(pair<int, string>(5,"May"));
    m.insert(pair<int, string>(6,"June"));
    m.insert(pair<int, string>(7,"July"));
    m.insert(pair<int, string>(8,"August"));
    m.insert(pair<int, string>(9,"September"));
    m.insert(pair<int, string>(10,"October"));
    m.insert(pair<int, string>(11,"November"));
    m.insert(pair<int, string>(12,"December"));
    map <int, string>::iterator itr;
    itr = m.find(month);
    if(itr != m.end())
    {
        charMonth = itr->second;
    }
    return charMonth;

}

int ReadFile(BST<WindLog>& bstWl)
{
    string file, f;
    ifstream infile("data/met_index.txt");
    if(infile.is_open())
    {
        while(infile.good())
        {
            string temp;
            getline(infile, temp);
            file = "data/"+temp;
            ifstream infile(file.c_str());
            cout<<"reading "+file<<endl;
            InputData(infile, bstWl);
        }
        infile.close();
    }
    else cout << "Unable to open file";
    return 1;
}



//reads the data file and add the values into the vector by pushBack function
int InputData(ifstream &infile, BST<WindLog> &bstWl)
{
    string day, month, year, hour, minute;
    string s, sr, airt, none;
    WindLog wind;

        while(infile.good())
        {
            getline(infile, day, '/');
            wind.getDate().setDay(atoi(day.c_str()));
            //cout<<day<<endl;

            getline(infile, month, '/');
            wind.getDate().setMonth(atoi(month.c_str()));

            getline(infile, year, ' ');
            wind.getDate().setYear(atoi(year.c_str()));
            //cout<< day +"/"+year+"/"+month<<endl;

            getline(infile, hour, ':');
            wind.getTime().setHour(atoi(hour.c_str()));

            getline(infile, minute, ',');
            wind.getTime().setMinute(atoi(minute.c_str()));


            getline(infile,none,',');
            getline(infile,none,',');
            getline(infile,none,',');
            getline(infile,none,',');
            getline(infile,none,',');
            getline(infile,none,',');
            getline(infile,none,',');
            getline(infile,none,',');
            getline(infile,none,',');

            getline(infile,s,',');
            wind.getSensor().setSpeed(atof(s.c_str()));

            getline(infile,sr,',');
            wind.getSensor().setSolarRadiation(atof(sr.c_str()));


            getline(infile,none,',');
            getline(infile,none,',');
            getline(infile,none,',');
            getline(infile,none,',');
            getline(infile,none,',');

            getline(infile, airt,'\n');
            wind.getSensor().setAirTemperature(atof(airt.c_str()));

            bstWl.Insert(wind);
        }
        infile.close();
    return -1;

}


/*
void AddSpeed(vector<WindLog> &vec)
{
    for(unsigned int i=0; i<vec.size(); i++)
    {
        int year = vec.at(i).getDate().getYear();
        float speed = vec.at(i).getSensor().getSpeed();
        for(si = sm.begin(); si!=sm.end(); ++si)
        {
            sm.insert(pair<int,float>(year, speed));
        }
    }

}


void AddTemp(vector<WindLog> &vec)
{
    for(unsigned int i=0; i<vec.size(); i++)
    {
        int getYear = vec.at(i).getDate().getYear();
        float getTemp = vec.at(i).getSensor().getAirTemperature();
        for(tempItr = tempMap.begin(); tempItr!=tempMap.end(); ++tempItr)
        {
            tempMap.insert(pair<int,float>(getYear, getTemp));
        }
    }

}


void AddRadi(vector<WindLog> &vec)
{
    for(unsigned int i=0; i<vec.size(); i++)
    {
        int getYear = vec.at(i).getDate().getYear();
        float getRadi = vec.at(i).getSensor().getSolarRadiation();
        for(radiItr = radiMap.begin(); radiItr!=radiMap.end(); ++radiItr)
        {
            radiMap.insert(pair<int,float>(getYear, getRadi));
        }
    }

}*/

void pointer(WindLog &w)
{

    vec.push_back(w);
}

void menu()
{
    cout << "\n";
    cout << "1. The average wind speed and average ambient air temperature for a specified month and year." << endl;
    cout << "2. Average wind speed and average ambient air temperature for each month of a specified year." << endl;
    cout << "3. Total solar radiation in kWh/m2 for each month of a specified year. " << endl;
    cout << "4. Average wind speed (km/h), average ambient air temperature and total solar radiation in kWh/m2 for each month of a specified year. " << endl;
    cout << "5. Highest solar radiation for a given date"<<endl;
    cout << "6. Exit the program." << endl;
    cout <<"*******************************************************************************************************************"<<endl;;
    cout << "\n";
}
