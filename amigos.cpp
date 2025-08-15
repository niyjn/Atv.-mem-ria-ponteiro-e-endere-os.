#include <iostream>
#include <vector>
#include <windows.h>
#include <cctype>

using namespace std;

int escolhaSala = 0;
int pos1 = 0;
int pos2 = 0;

bool salaEspecial = false;

char amigo;
char escolhaDeficiente = 'n';

double valSala = 0.0;
int countSala = 0;

bool loop = true;

int linha = 0;
int coluna = 0;

vector<vector<char>> sala;

void criarSala(const int& a) {
    switch(a) {
        case 1:
        linha = 10;
        coluna = 10;
        valSala = 15;
        break;

        case 2:
        linha = 15;
        coluna = 15;
        valSala = 20;
        break;

        case 3:
        linha = 20;
        coluna = 20;
        valSala = 30;
        salaEspecial = true;
        break;

        default:
        cout << "Número invalido digitado.\n" ;
        break;
    }

    sala = vector<vector<char>>(linha, vector<char>(coluna, ' '));
}

void popularSala() {
    for(int i = 0; i < linha; i++) {
        for(int j = 0; j < coluna; j++) {
            sala[i][j] = 'X';     
        }
    }
    if(salaEspecial == true) {
        for(int i = 0; i < 1; i++) {
            for(int j = 0; j < 5; j++) {
                sala[i][j] = 'D';
            }
        } for(int i = 0; i < 1; i++) {
            for(int j = 5; j < 10; j++) {
                sala[i][j] = 'I';
            }
        } for(int i = 0; i < 1; i++) {
            for(int j = 10; j < 15; j++) {
                sala[i][j] = 'C';
            }
    }

 } 
}

void verSala() {
    for(int i = 0; i < linha; i++) {
        for(int j = 0; j < coluna; j++) {
            cout << sala[i][j] << " " ;
        }
        cout << endl ;
    }
}

bool escolhaCadeira(const int& a, const int& b) {
    int i = a - 1;
    int j = b - 1;

    if(i < 0 || i >= linha || j < 0 || j >= coluna) {
        cout << "Erro, valor invalido.\n" ;
        return false;
    }

    if(sala[i][j] == 'V') {
        cout << "Erro! você não pode ocupar uma cadeira ocupada.\n" ;
        return false;
    }


    if((sala[i][j] == 'D' || sala[i][j] == 'I' || sala[i][j] == 'C') && salaEspecial == true && escolhaDeficiente == 's') {
       sala[i][j] = 'V'; 
       return true;
    }  else if ((sala[i][j] == 'D' || sala[i][j] == 'I' || sala[i][j] == 'C') && salaEspecial == true && escolhaDeficiente == 'n') {
        cout << "Cadeira invalida. Lugar especial.\n";
        return false;
    }

    if(sala[i][j] == 'X') {
        sala[i][j] = 'V';
        return true;
    }

    return false;
}

double calcVal(const double& val, const int& qtd, const char& c) {
    if( tolower(c) == 's' ){
        return ( val / 2 ) * qtd;
    } else {
    return val * qtd ; 
 }
}

void limpar() {
            cout << "\033[2J\033[1;1H";
        }

int main() {

    SetConsoleOutputCP(65001);

    cout << "\tBEM VINDO AO CINEMA!\n\n";

    cout << "Escolha sua sala:\n" ;
    cout << "[1] Sala basica, cadeiras 10x10, 15 reais a entrada inteira, 7.5 a meia entrada\n";
    cout << "[2] Sala padrão, cadeiras 15x15, 20 reais a entrada inteira, 10 a meia entrada\n";
    cout << "[3] Sala grande, cadeiras 20x20, assentos preferenciais, 30 reais a entrada, 15 a meia.\n";

    cin >> escolhaSala; 

    if(escolhaSala == 3) {
    cout << "A sala grande atende a necessidades especiais, tendo 15 bancos reservados para cadeirantes, portadores de criança de colo e idosos.\n";
    cout << "Você se encaixa em algum desses 3?\n"; 
    cin >> escolhaDeficiente;
}
    

    criarSala(escolhaSala);
    
    popularSala();

    limpar();

    while(loop == true) {

     cout << "Escolha seu lugar em linhas e colunas(ex: 5 6, linha 5 coluna 6):\n" << endl;

     verSala(); 

     cin >> pos1 >> pos2;

     limpar();

     if(escolhaCadeira(pos1, pos2)) {
        countSala++;
     }

     cout << "\n Poltrona escolhida: \n";

     verSala(); 

     cout << "Deseja adicionar outras poltronas? (s para Sim e n para Não.)\n";

     cin >> amigo;

     if(tolower(amigo) == 'n') {
        loop = false;
     }

     limpar();
 }

    if(escolhaDeficiente == 'n') { 
    cout << "Você deseja pagar meia (s para sim, n para não)?\n"; 
    cout << "Pessoas com necessidades especiais também pagam meia.\n EX: (idosos, cadeirantes, grávidas e com criança de colo.)\n";
    cin >> escolhaDeficiente ;
 }

 double med = calcVal(valSala, countSala, tolower(escolhaDeficiente));

 limpar();

 cout << "O valor escolhido para a sala foi de: " << med << "\n";

 cout << "Sala: \n";

 verSala();
    

}

