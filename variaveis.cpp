#include <iostream>
using namespace std;
#define PRECO 1.99
/*
    int: inteiros
    char: caracteres
    float: reias
*/

int main(){
    int pera = 3;
    char qualidade = 'A';
    float peso = 2.5;
    
    cout << "Existem " << pera << " peras  qualidade " << qualidade
    << " pesando " << peso << " quilos " << endl;

    cout << "O preco por quilo eh R$" << PRECO 
    << ", o total eh R$" << peso * PRECO << endl;
}
