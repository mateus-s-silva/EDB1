#include "identificador.h"
#include <cctype>
#include <iostream>

bool notCharAndUnderline(char firstChar){
    if(isalpha(firstChar) || firstChar == '_'){
        return false;
    }
    else{
        return true;
    }
}

bool onlyAlphaOrUnderline(std::string identificador){
    for(size_t i = 1; i < identificador.size(); i++){
        if(isalpha(identificador[i]) || isdigit(identificador[i]) || identificador[i] == '_'){
            continue;
        }
        else{
            return true;
        }
    }
    return false;
}

bool minimumSize(std::string entrada){
    if(entrada.size() < 2 || entrada.size() > 10){
        return true;
    }
    return false;
}

/**
    Identificadores válidos devem:
    - Começar com um caractere letra ou um sublinhado (_)
    - Conter apenas caracteres que sejam sublinhado ou alfanuméricos (letra ou dígito), exceto o primeiro caractere que não pode ser dígito
    - Conter no mínimo 2 e no máximo 10 caracteres

    A função retorna true se o parâmetro de entrada é um identificador válido, false caso contrário
*/

bool valido(std::string entrada)
{
    char firstChar = entrada[0];    

    if(notCharAndUnderline(firstChar)){
        return false;
    }

    else if(onlyAlphaOrUnderline(entrada)){
        return false;
    }

    else if(minimumSize(entrada)){
        return false;
    }

    else{
        return true;
    }
}