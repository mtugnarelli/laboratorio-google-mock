
#ifndef ADIVINANZA_H_
#define ADIVINANZA_H_

#include <string>
#include "secretos.h"

class ObservadorAdivinanza {

    public:
        virtual void respuestaArriesgada(int valor) = 0;
        virtual ~ObservadorAdivinanza(){
        }
};

class Adivinanza {

    private:
        int secreto;
        bool resuelta;

        ObservadorAdivinanza* observador;

    public:

        Adivinanza(Secretos* secretos) {

            if (secretos == NULL) {
                throw std::string("Se necesitan secretos para crear una adivinanza");
            }

            this->secreto = secretos->obtener();
            this->resuelta = false;
            this->observador = NULL;
        }

        bool estaResuelta() {

            return this->resuelta;
        }

        bool arriesgar(int valor) {

            if (this->observador != NULL) {
                this->observador->respuestaArriesgada(valor);
            }

            this->resuelta = (valor == this->secreto);
            return this->resuelta;
        }

        void observadaPor(ObservadorAdivinanza* observador) {

            this->observador = observador;
        }
};



#endif /* ADIVINANZA_H_ */
