#include <iostream>
using namespace std;
int main() 
{
	
	int num,resul,valor;
	
	cout<<"digite um valor : ";
	cin>>valor;
	while (valor<0 || valor>10){
		cout<<"Digite novamente um valor : ";
		cin>>valor;
	}
	
	for(num=1;num<=10;num++){
		resul=valor*num;
		cout<<valor<<" x "<<num<<" = "<<resul<<"\n";
	}
	return 0;
}
