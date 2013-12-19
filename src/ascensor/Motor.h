
#ifndef MOTOR_H_
#define MOTOR_H_

class Motor {

    public:
        virtual bool estaEncendido() = 0;
        virtual void subir() = 0;
        virtual void bajar() = 0;
        virtual void apagar() = 0;
        virtual ~Motor() {
        }
};

#endif /* MOTOR_H_ */
