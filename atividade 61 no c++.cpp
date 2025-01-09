#include <iostream>
using namespace std;
int main() 
{
	int valor,soma,media,i;
	soma=0;
	for(i=1;i<=10;i++){
		cout<<"digite um valor "<<i<<" : \n";
		cin>>valor;
		soma=soma+valor;
	}
	media=soma/10;
	cout<<"a media aritmetica dos valores e = "<<media;
	return 0;
}
