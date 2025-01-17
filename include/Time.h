#ifndef TIME_H
#define TIME_H

#include<string>
using namespace std;
/** @class Time class
 *
 * @author - Hyeyoon Cho
 * @date - 29 February 2019
 * @version - 1
 *
 */

class Time
{
    public:
        /**
         * @brief Default constructor
         */
        Time();
        /**
         * @brief initializes hour and minute
         * @param h->hour, m->minute
         */
        Time(int h, int m);
        /**
         *@brief overloads the equal to "=" operator
         *@param Time&
         */
        void operator=(const Time& t);
        /**
         *@brief overloads the equal to "<" operator
         *@param Time&
         */
        bool operator <(const Time &time);

        /**
         *@brief overloads the equal to ">" operator
         *@param Time&
         */
        bool operator >(const Time &time);
        /**
         *@brief overloads the equal to "==" operator
         *@param Time&
         */
        bool operator ==(const Time &time);

        /**
         * @brief sets hour
         * @param h -> hour
         */
        void setHour(int h);
        /**
         * @brief gets hour
         * @return integer
         */
        int getHour();
        /**
         * @brief sets minute
         * @param m -> minute
         */
        void setMinute(int m);
        /**
         * @brief gets minute
         * @return integer
         */
        int getMinute();


    private:
        //declares variables
        int hour;
        int minute;
};

#endif // TIME_H
