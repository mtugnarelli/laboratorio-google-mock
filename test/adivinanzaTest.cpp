#include "gtest/gtest.h"

#include "adivinanza.h"

class SecretosDummy: public Secretos {

    public:
        virtual int obtener() {
            return 0;
        }
        virtual ~SecretosDummy() {
        }
};

TEST(AdivinanzaTest, crearAdivinanzaConSecretosNuloLanzaExcepcion) {

    /* condición inicial */
    Secretos* secretos = NULL;


    /* operación y comprobación */
    ASSERT_ANY_THROW(Adivinanza adivinanza(secretos));
}

TEST(AdivinanzaTest, luegoDeSerCreadaNoEstaResuelta) {

    /* condición inicial */
    SecretosDummy secretos;
    Adivinanza adivinanza(&secretos);

    /* operación */
    bool resuelta = adivinanza.estaResuelta();

    /* comprobación */
    ASSERT_FALSE(resuelta) << "Inicialmente la adivinanza no está resuelta";
}

