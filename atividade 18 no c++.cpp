#include <iostream>
using namespace std;
int main()
{
float anoatual;float anonascido;float calculo;
cout<<"qual o ano que vc nasceu ? ";
cin>>anonascido;
cout<<"em qual ano vc esta : ";
cin>>anoatual;
calculo=anoatual-anonascido;
if (calculo>=16)
cout<<"vc podera votar,faca uma boa escolha ";
else
cout<<"infelizmente nao podera votar, que pena ";
	return 0;
}