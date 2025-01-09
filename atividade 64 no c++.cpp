#include <iostream>
using namespace std;
int main() 
{
	int valor, soma, i;
	soma=0;
	for(i=1;i<=10;i++){
		cout<<"digite o valor "<<i<<": \n";
		cin>>valor;
		if(valor<40){
			soma=soma+valor;
		}
	}
	cout<<"a soma total dos numeros menores que 40 e igual a : "<<soma;
	return 0;
}
