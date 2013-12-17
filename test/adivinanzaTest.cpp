#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include "adivinanza.h"

class SecretosDummy: public Secretos {

    public:
        MOCK_METHOD0(obtener, int());
};

class StubSecretos: public Secretos {

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

TEST(AdivinanzaTest, arriesgarValorSinAdivinar) {

    /* condición inicial */
    SecretosDummy secretos;
    Adivinanza adivinanza(&secretos);

    /* operación */
    bool adivino = adivinanza.arriesgar(9);

    /* comprobación */
    ASSERT_FALSE(adivino) << "Arriesgo pero no adivinó";
}

TEST(AdivinanzaTest, arriesgarValorAdivinando) {

    /* condición inicial */
    StubSecretos secretos;
    Adivinanza adivinanza(&secretos);

    /* operación */
    bool adivino = adivinanza.arriesgar(7);

    /* comprobación */
    ASSERT_TRUE(adivino) << "Arriesgo y adivinó";
}
