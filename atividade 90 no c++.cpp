#include <iostream>
using namespace std;

int main() {

int V1[30];
 int  i,NQ,cont=0,posicao;
   for (i = 1; i <= 30; i++) {
cout<<"Digite o valor "<<i<<",para o vetor 1 : ";
cin>>V1[i];
}
cout<<"Digite outro valor : ";
cin>>NQ;
 for (i = 1; i <= 30; i++) {
   if (NQ==V1[i]){
   cont++;
}
}
cout<<" A quantidade de vezes que "<<NQ<<" se repete e : "<<cont;

      return 0;
}

