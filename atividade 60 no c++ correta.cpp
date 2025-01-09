#include <iostream>
using namespace std;
int main()
{
int contadorIntervalo,contadorFora,valor,i;
contadorIntervalo=0;
contadorFora=0;
   for(i=1;i<=10;i++){
      cout<<"Digite o valor "<<i<<" : \n";
      cin>>valor;
    if (valor >= 10 && valor <= 20) {
         contadorIntervalo++;
      }else{
         contadorFora++;
  }
}

   cout<<"Quantidade de valores no intervalo [10,20]: "<<contadorIntervalo;
   cout<<"\n";
   cout<<"Quantidade de valores fora do intervalo [10,20]: "<<contadorFora;
return 0;
}