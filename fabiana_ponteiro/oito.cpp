#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

/*Na main, declare um ponteiro e aponte para uma variável de um bloco interno. Tente
acessar o conteúdo após o bloco. O que acontece? Por quê?*/

int main() {
    SetConsoleOutputCP(CP_UTF8);
    
    {
        int var = 10;
    }

    int* ptr = &var; 

    // Erro de escopo: a variável var não está definida fora do bloco interno
    
    // cout << "Valor da variável: " << *ptr << endl;

    return 0;

 }
