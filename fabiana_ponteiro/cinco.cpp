#include <iostream>
#include <cstdlib> 
using namespace std;

int main() {

    int* p[2];
    
    p[0] = (int*)malloc(sizeof(int));
    p[1] = (int*)malloc(sizeof(int));

    *p[0] = 10;
    *p[1] = 20;

    cout << "Soma dos valores: " << *p[0] + *p[1] << endl;

    delete p[0];
    delete p[1];

    return 0;
}
