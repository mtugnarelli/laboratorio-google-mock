
#ifndef SENSOR_H_
#define SENSOR_H_

class Sensor {

    public:
        virtual bool estaActivado() = 0;
        virtual ~Sensor() {
        }
};



#endif /* SENSOR_H_ */
