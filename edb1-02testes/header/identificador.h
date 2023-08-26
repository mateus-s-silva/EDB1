#include <string>
/**
    Identificadores válidos devem:
    - Começar com um caractere letra ou um sublinhado (_)
    - Conter apenas caracteres alfanuméricos (letra ou dígito), exceto o primeiro caractere que não pode ser dígito
    - Conter no mínimo 2 e no máximo 10 caracteres

    A função retorna true se o parâmetro de entrada é um identificador válido, false caso contrário
*/
bool valido(std::string identificador);