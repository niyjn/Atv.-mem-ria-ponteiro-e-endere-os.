#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

int main() { 

    int vetor[5];
    int* ptr = vetor;
    for (int i = 0; i < 5; i++) {
        ptr[i] = i + 1;
        cout << "Valor do vetor [" << i << "] = " << ptr[i] << endl; 
    }
    delete[] ptr;

    return 0;
}
