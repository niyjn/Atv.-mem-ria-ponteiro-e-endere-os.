#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int integral = 0;
    float PontoFlutuante = 0.0;
    double PontoFlutuanteDuplo = 0.0;
    char caractere = 'a';

    cout << "Tamanho da integral: " << sizeof(integral) << " bytes, alocação: " << &integral << endl;
    cout << "Tamanho do ponto flutuante: " << sizeof(PontoFlutuante) << " bytes, alocação: " << &PontoFlutuante << endl;
    cout << "Tamanho do ponto flutuante duplo: " << sizeof(PontoFlutuanteDuplo) << " bytes, alocação: " << &PontoFlutuanteDuplo << endl;
    cout << "Tamanho do caractere: " << sizeof(caractere) << " bytes, alocação: " << &caractere << endl;

    return 0;


}