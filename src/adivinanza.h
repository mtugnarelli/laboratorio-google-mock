
#ifndef ADIVINANZA_H_
#define ADIVINANZA_H_

#include <string>
#include "secretos.h"

class Adivinanza {

    public:

        Adivinanza(Secretos* secretos) {

            if (secretos == NULL) {

                throw std::string("Se necesitan secretos para crear una adivinanza");
            }
        }

        bool estaResuelta() {

            return false;
        }

        bool arriesgar(int valor) {

            return false;
        }
};



#endif /* ADIVINANZA_H_ */
