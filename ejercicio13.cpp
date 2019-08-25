#include <iostream>
using std::cout;
using std::cin;
int main() {
    float base, altura;
    cout<<"Ingrese la base del triangulo: ";
    cin>>base;
    cout<<"Ingrese la altura del triangulo: ";
    cin>>altura;
    float area = 0.5*base*altura;
    cout<<"El area del triangulo es: "<<area<<"\n";
    return 0;
}
