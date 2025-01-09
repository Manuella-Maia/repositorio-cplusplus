#include <iostream>
using namespace std;
int main()
{
int i,negativos,valores[10];
negativos=0;

for(i=0;i<10;i++){
	cout<<"digite o valor "<<i+1<<" : \n";
cin>>valores[i];
if(valores[i]<0){
	negativos++;
}
}
cout<<"a quantidade de numeros negativos e = "<<negativos;
return 0;
}
