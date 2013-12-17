#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include "adivinanza.h"

class SecretosDummy: public Secretos {

    public:
        MOCK_METHOD0(obtener, int());
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

