#include <iostream>
using namespace std;
int main()
{
	float x;float y;float z;char resposta;
	cout<<"digite o valor de x : ";
cin>>x;
cout<<"digite o valor de y : ";
cin>>y;
z =(x*y) + 5;
if (z <= 0) {
resposta='A';
}
else if (z <= 100){
resposta='B';
}
else{
resposta='C';
}
cout<<"a resposta foi "<<resposta;
cout<<"\n";
cout<<" a resposta de z foi "<<z;
return 0;
}