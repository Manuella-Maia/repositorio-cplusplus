#include <iostream>
using namespace std;

int main() {
    int contador, i;
    char maisMercadorias;
    float valorMercadoria, totalEstoque, mediaValor;
    totalEstoque =0;
   contador = 0;

    do{
   cout<<"Insira o valor da mercadoria : ";
  cin>>valorMercadoria;
   totalEstoque+=valorMercadoria;
   contador++;
   cout<<"\n";
  cout<<"MAIS MERCADORIAS (S/N)? \n";
   cin>>maisMercadorias;
   cout<<"\n";
   }while(maisMercadorias == 'S'|| maisMercadorias == 's' );
   
 mediaValor=totalEstoque/contador;
 cout<<"Valor total em estoque: R$ "<<totalEstoque<<"\n";
cout<<"Media de valor das mercadorias: R$ "<<mediaValor<<"\n";

    return 0;
}