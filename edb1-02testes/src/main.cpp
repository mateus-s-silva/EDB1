#include <iostream>
#include <string>
#include "identificador.h"

int main(void)
{
    std::string entrada;

    int x = 0;
    
    while(std::getline(std::cin, entrada) )
    {
        std::string retornoFuncao = valido(entrada) ? "true" : "false";
        std::cout << entrada << " é válido? Função válido retornou: " << retornoFuncao << std::endl;
    }
    return 0; 
}
