
#ifndef ADIVINANZA_H_
#define ADIVINANZA_H_

#include <string>
#include "secretos.h"

class Adivinanza {

    private:
        int secreto;
        bool resuelta;

    public:

        Adivinanza(Secretos* secretos) {

            if (secretos == NULL) {
                throw std::string("Se necesitan secretos para crear una adivinanza");
            }

            this->secreto = secretos->obtener();
            this->resuelta = false;
        }

        bool estaResuelta() {

            return this->resuelta;
        }

        bool arriesgar(int valor) {

            this->resuelta = (valor == this->secreto);
            return this->resuelta;
        }
};



#endif /* ADIVINANZA_H_ */
