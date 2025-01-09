#include <iostream>
using namespace std;

int main() {

int V1[15];
int V2[15];
int i,cont=0,posicao;

    for (i = 1; i <= 15; i++) {
cout<<"digite o valor "<<i<<" para o vetor 1 : ";
cin>>V1[i];
}
  for (i = 1; i <= 15; i++) {
      cout<<"digite o valor "<<i<<" para o vetor 2 : ";
     cin>>V2[i];
 }
   for (i = 1; i <= 15; i++) {
     if (V1[i]==V2[i]){
         cont++;
}
}
cout<<"\n";
  cout<<" a quantidade de vezes que V1 e V2 repetem e: "<<cont;
   return 0;
}


