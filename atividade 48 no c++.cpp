#include <iostream>
using namespace std;
int main() 
{
float nota1, nota2;

cout<<"digite a nota da avaliacao 1 : \n";
   cin>>nota1;
   
   while (nota1>=10 || nota1<0) {
   	cout<<"digite a nota novamente : \n";
   cin>>nota1;
  }

   cout<<"digite a nota da avaliacao 2 : \n";
   cin>>nota2;
   while (nota2>=10 || nota2<0){
      cout<<"digite a nota novamente : \n";
      cin>>nota2;
}

  cout<<"a media simples = "<<(nota1+nota2)/2;


   return 0;
}