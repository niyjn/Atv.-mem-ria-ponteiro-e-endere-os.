#include <iostream>
using namespace std;

int main() {

    /*Declare uma variável int dentro de um bloco {} da main. Tente acessá-la fora desse bloco.
O que acontece? Justifique o erro.*/

    { 
        int x = 10;
    }

    cout << x << endl;  

    /*error: 'x' was not declared in this scope
     cout << x << endl;

     erro de escopo, a váriavel foi declarada dentro de um bloco e não pode ser acessada fora dele
             ^*/




}