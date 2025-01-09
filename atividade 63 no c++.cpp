#include <iostream>
using namespace std;
int main() 
{
	int valor, soma, i;
	for(i=1;i<=10;i++){
		cout<<"digite o valor : \n";
		cin>>valor;
		soma=soma+valor;
	}
	cout<<"a soma total dos numeros e igual a : "<<soma;
	return 0;
}
