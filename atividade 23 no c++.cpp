#include <iostream>
using namespace std;
int main()
{
float altura;char sexo;float pesoideal;
cout<<"digite sua altura : ";
cin>>altura;
cout<<"qual o seu sexo M OU F : ";
cin>>sexo;

if(sexo=='M' || sexo=='m'){
pesoideal=(72.7*altura)-58;
}else if (sexo=='F' || sexo=='f'){
pesoideal=(62.1*altura)-44.7;
}
cout<<"o peso ideal e : "<<pesoideal;
 return 0;
}
	