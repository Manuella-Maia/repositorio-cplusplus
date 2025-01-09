#include <iostream>
using namespace std;
int main() 
{
		int valor1,valor2, soma, i;
	cout<<"digite o primeiro valor : \n";
	cin>>valor1;
		cout<<"digite o segundo valor (maior que o primeito valor) : \n";
	cin>>valor2;
	while(valor2<valor1){
		cout<<"digite novamente o segundo valor : \n";
		cin>>valor2;
	}
	soma=0;
	for(i=valor1;i<=valor2;i++){
		soma++;
	}
	cout<<"a soma dos inteiros entre o "<<valor1<<" e "<<valor2<<" = "<<soma;
	return 0;
}
	
