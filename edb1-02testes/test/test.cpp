#include "catch_amalgamated.hpp"
#include "identificador.h"

TEST_CASE("Teste de identificadores válidos")
{
    CHECK( valido("ei") == true );
    CHECK( valido("_adfg12kli") == true );
    CHECK( valido("__") == true );
    CHECK( valido("_asdkj_") == true );
}

TEST_CASE("Teste de identificadores inválidos")
{
    CHECK( valido("a") == false );
    CHECK( valido("ade12yuiopa") == false );
    CHECK( valido("12yuiopa") == false );
    CHECK( valido("") == false );
    CHECK( valido("yuiop@") == false );
}