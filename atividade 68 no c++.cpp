#include <iostream>
using namespace std;
int main()
{
int numerototalmercadorias,i;
float valormercadoria, valortotalemestoque, mediavalormercadoria;
valortotalemestoque=0;  

cout<<" qual o numero de mercadorias : \n";
cin>>numerototalmercadorias;

 for(i=1;i<=numerototalmercadorias;i++){
 cout<<"informe o valor da mercadoria "<< i <<" : \n";
 cin>>valormercadoria;
 valortotalemestoque+=valormercadoria;
 }
  mediavalormercadoria=valortotalemestoque/numerototalmercadorias;
  cout<<" O valor total em estoque e "<<valortotalemestoque;
  cout<<"\n";
  cout<<" E a media dos valores e "<<mediavalormercadoria;
  return 0;
}