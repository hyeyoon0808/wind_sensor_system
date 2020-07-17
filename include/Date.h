#ifndef DATE_H
#define DATE_H

#include <string>
using namespace std;
/** @class Date class
 *
 * @author - Hyeyoon Cho
 * @date - 29 February 2019
 * @version - 1
 *
 */

class Date
{
    public:
        /** @brief Default constructor
         *
         */
        Date();
        /** @brief initialize variables
         * @param day->d, month->m, year->y
         */
        Date(int day, int month, int year);
        /**
         *@brief overloads the equal to "=" operator
         *@param Date&
         */
        void operator = (const Date& date);
        /** @brief sets day
         * @param day->d
         */
        void setDay(int day);
        /** @brief gets day
         * @return integer
         */
        int getDay();
        /** @brief sets month
         * @param month -> m
         */
        void setMonth(int month);
        /** @brief gets month
         * @return integer
         */
        int getMonth();
        /** @brief sets year
         * @param year -> y
         */
        void setYear(int year);
        /** @brief gets year
         * @return integer
         */
        int getYear();
        /**
         *@brief overloads the equal to "<" operator
         *@param Date&
         */
        bool operator <(const Date &date);
        /**
         *@brief overloads the equal to ">" operator
         *@param Date&
         */
        bool operator >(const Date &date);
        /**
         *@brief overloads the equal to "==" operator
         *@param Date&
         */
        bool operator ==(const Date &date);
        /**
         *@brief overloads the equal to "<=" operator
         *@param Date&
         */
        bool operator <=(const Date &date);

    protected:

    private:
        //declares variables
        int d;
        int m;
        int y;
};

#endif // DATE_H
