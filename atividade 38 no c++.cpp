#include <iostream>
using namespace std;
int main() 
{
	int codigo,senha;
cout<<"digite o numero do codigo de usuario : ";
cin>>codigo;
cout<<"digite a senha : ";
cin>>senha;
if (codigo!=1234){
cout<<"Usuario invalido";
}else if(senha!=9999){
cout<<"senha incorreta";
}else{
cout<<"Acesso permitido";
}
 return 0;
}