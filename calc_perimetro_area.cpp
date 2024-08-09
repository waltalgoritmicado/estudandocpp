#include <iostream>
#include <cmath>

using namespace std;

#define PI 3.14159

int main() {
    int raio;
    float Perim, Area;
    
    cout << "Entre com o valor do raio: ";
    cin >> raio;
    
    Perim = 2 * PI * raio;
    Area = PI * pow(raio, 2);
    
    cout << "O perimetro da circunferencia de raio " << raio << " eh " 
    << Perim << endl;

    cout << "e a area eh " << Area << endl;
}
