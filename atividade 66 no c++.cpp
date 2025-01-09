#include <iostream>
using namespace std;
int main()
{
	int valor1,valor2,soma,aux,i;


cout<<"digite o primeiro valor : \n";
cin>>valor1;
cout<<"digite o segundo valor (maior ou menor que o primeiro) : \n";
cin>>valor2;
if (valor1>valor2) {
aux=valor1;
valor1=valor2;
valor2=aux;
}
soma=0;
 for(i=valor1;i<=valor2;i++){
soma+=i;
}
cout<<" a soma dos inteiros entre o "<<valor1<<" e "<<valor2<<" = "<<soma;
return 0;
}