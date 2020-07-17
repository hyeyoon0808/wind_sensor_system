#ifndef WINDLOG_H
#define WINDLOG_H

#include "Date.h"
#include "Sensor.h"
#include "Time.h"
#include "BST.h"

/** @class Vector class
 *
 * @author - Hyeyoon Cho
 * @date - 29 February 2019
 * @version - 1
 *
 */

class WindLog
{
    public:
        /** @brief sets Date
         * @param d-date
         */
        void setDate(Date& d);
        /** @brief gets Date
         * @return Date
         */
        Date& getDate();
        /** @brief sets time
         * @param t-time
         */
        void setTime(Time& t);
        /** @brief gets time
         * @return Time
         */
        Time& getTime();
        /** @brief sets sensor
         * @param s-sensor
         */

        bool operator < (const WindLog &W);

        bool operator > (const WindLog &W);

        bool operator == (const WindLog &W);

        bool operator <= (const WindLog &W);


        void setSensor(Sensor& s);
        /** @brief gets sensor
         * @return Sensor
         */
        Sensor& getSensor();
        /** @brief default constructor
         */
        WindLog();
        /** @brief initializes Date, Time, Sensor
         * @param Date-d, Time-t, Sensor-s
         */
        WindLog(Date& d, Time& t, Sensor& s);



    private:
        //declares variables
        Date date;
        Sensor sensor;
        Time time;

};

#endif // WINDLOG_H
