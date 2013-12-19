#ifndef PANTALLA_H_
#define PANTALLA_H_

#include <string>

class Pantalla {

    public:
        virtual void encender() = 0;
        virtual void apagar() = 0;
        virtual bool estaEncendida() = 0;
        virtual void mostrar(int piso) = 0;
        virtual void mostrar(std::string mensaje) = 0;
        virtual ~Pantalla() {
        }
};

#endif /* PANTALLA_H_ */
