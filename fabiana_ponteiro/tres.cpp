#include <iostream>
#include <windows.h>
#include <cstdlib>
using namespace std;

int main() {

    
    int* ptr;

    ptr = (int*) malloc (5 * sizeof(int));

    if(ptr == NULL) {
        cout << "Erro de alocação" ;
    }


    cout << "Digite 5 valores: " << endl;
    for(int i = 0; i < 5; i++) {
        cin >> ptr[i];
    }

    for(int i = 0; i < 5; i++) {
        cout << "Valor[" << i << "] == " << ptr[i] << endl;
    }

    free(ptr); 
}