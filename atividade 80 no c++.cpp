#include <iostream>
using namespace std;

int main()
{
	int Q[20],i,maior=0,posicao;
   float soma;

   for (i=1;i<=20;i++) { 
    cout<<"digite valor "<<i<<" : \n";
      cin>>Q[i];
      if (Q[i]<0) {
         cout<<"So aceitamos numeros positivos,digite novamente outro valor : ";
        cin>>Q[i];
      }
  }
   for (i=1;i<=20;i++) { 
      if (Q[i]> maior) {
         maior=Q[i];
         posicao= i;
      }
  }
  cout<<"\n";
  cout<<"o maior numero e "<<maior<<" e sua posicao e "<<posicao;
  return 0;
}