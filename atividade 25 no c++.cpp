#include <iostream>
using namespace std;
int main()
{
float saldo;float credito;float debito;float saldoatual;
cout<<"digite seu saldo : ";
cin>>saldo;
cout<<"digite seu debito : ";
cin>>debito;
cout<<"digite seu credito : ";
cin>>credito;
saldoatual=saldo-debito+credito;

if (saldoatual>=0) {
cout<<"saldo positivo ";
}else if (saldoatual<0) {
cout<<"saldo negativo ";
}
return 0;
}
