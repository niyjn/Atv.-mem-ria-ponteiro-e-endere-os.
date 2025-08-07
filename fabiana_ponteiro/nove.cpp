#include <iostream>
#include <windows.h>
#include <cstdlib>
/*Na main, peça ao usuário um valor n. Aloque dinamicamente memória para n inteiros.
Preencha o vetor, calcule a média e libere a memória.*/

using namespace std;

int n = 0;
int sum = 0;

int main() {

    SetConsoleOutputCP(CP_UTF8);

    cout << "Digite um valor para n: " << endl;
    cin >> n;

    int* ptr = (int*) calloc(n, sizeof(int));

    for(int i = 0; i < n; i++) {
        ptr[i] = i + 1;
        cout << "Posição: " << i << " Valor: " << ptr[i] << endl;
        sum += ptr[i];
    }

    double media = static_cast<double>(sum) / n;

    cout << "Soma dos valores: " << sum << "\n";
    cout << "Media: " << media << "\n";

    free(ptr);

    return 0;
}