#include <iostream>
using namespace std;

int main(){
    int n1, n2, aux; 
    cout << "Entre com dois numeros inteiros: ";
    cin >> n1 >> n2;

    if (n1 > n2) {
        aux = n1;
        n1 = n2;
        n2 = aux;
        cout << "Trocou \n";
    }
    cout << "Os numeros ordenados: " << n1 << " " << n2 << endl;
}
