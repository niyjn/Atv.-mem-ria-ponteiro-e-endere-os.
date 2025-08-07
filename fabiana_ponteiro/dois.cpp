#include <iostream>
#include <windows.h>
using namespace std;

/*Declare uma variável int na main e um ponteiro que aponte para ela. Imprima:
● o valor da variável
● o valor do ponteiro
● o conteúdo do ponteiro (valor da variável via ponteiro)*/

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int var = 42;
    int* ptr = &var;

    cout << "Valor da variável: " << var << endl;
    cout << "Valor do ponteiro (endereço da variável): " << ptr << endl;
    cout << "Conteúdo do ponteiro (valor da variável via ponteiro): " << *ptr << endl;

    return 0;
}