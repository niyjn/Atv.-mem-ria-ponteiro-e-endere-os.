#include <iostream>
#include <windows.h>
#include <cstdlib>

/*Declare uma variável global com o mesmo nome de uma variável local da main. Exiba o
valor de ambas usando escopo correto. Mostre que a variável local "esconde" a global.*/

using namespace std;

int n = 20;

int main() {
    cout << "Valor de N global: " << n << endl;
    // Valor alterado
    int n = 10;
    cout << "Valor de N local: " << n << endl;
    return 0;
}