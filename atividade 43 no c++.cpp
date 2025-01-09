#include <iostream>
using namespace std;
int main() 
{
float a,b,c;
string mens,TrianguloEquilatero,TrianguloIsosceles,TrianguloEscaleno;
cout<<"digite o valor a : ";
cin>>a;
cout<<"digite o valor b : ";
cin>>b;
cout<<"digite o valor c : ";
cin>>c;
    if (a < b + c && b < a + c && c < a + b) {
        if (a == b && b == c) {
            mens = "Triangulo Equilatero";
        } else if (a == b || b == c || a == c) {
            mens = "Triangulo Isosceles";
        } else {
            mens = "Triangulo Escaleno";
        }
    } else {
        mens = "Nao e possível formar um triangulo";
    }

cout<<mens;
 return 0;
}