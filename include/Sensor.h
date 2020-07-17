#ifndef Sensor_H
#define Sensor_H

using namespace std;
/** @class Sensor class
 *
 * @author - Hyeyoon Cho
 * @date - 29 February 2019
 * @version - 1
 *
 */

class Sensor
{
    public:
        /** @brief Default constructor
         */
        Sensor();
        /** @brief initializes sp, so, t
         * @param speed->sp, solar->so, temp->t
         */
        Sensor(float speed, float solar, float temp);
        /**
         *@brief overloads the equal to "=" operator
         *@param Sensor&
         */
        void operator=(const Sensor& s);
        /** @brief gets speed
         * @return float
         */
        float getSpeed();
        /** @brief sets speed
         * @param speed ->sp
         */
        void setSpeed(float speed);
        /** @brief gets solar
         * @return float
         */
        float getSolarRadiation();
        /** @brief sets solar
         * @param solar ->so
         */
        void setSolarRadiation(float solar);
        /** @brief gets temp
         * @return float
         */
        float getAirTemperature();
        /** @brief sets temp
         * @param temp -> t
         */
        void setAirTemperature(float temp);
        /** @brief converts wind speed from m/s to km/h
         */
        float convertSpeed(float speed);
        /** @brief converts solar radiation from w/m^2 to kwh/m^2
         */
        float convertSolarRadiation(float solar);



    private:
        //declares variables
        float sp;
        float so;
        float t;
};

#endif // Sensor_H
