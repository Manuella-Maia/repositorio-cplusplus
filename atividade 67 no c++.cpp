#include <iostream>
using namespace std;
int main()
{
	float soma,media;
	int i;
	
soma=0;
for(i=15;i<=100;i++){
soma+=i;
}
media=soma/86;
cout<<" a soma dos inteiros entre 15 e 100  igual a "<<media;
return 0;
}