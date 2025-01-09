#include <iostream>
using namespace std;

int main() {
    int valor,maior,menor,i;

   maior=0;
   menor=0;
  for(i=1;i<=100;i++){
      cout<<"digite o valor "<<i<<" : ";
      cin>>valor;
      if(i==1){
         maior=valor;
         menor=valor;
      }else{
         if (valor>maior){
            maior=valor;
         }
         if (valor<menor) {
            menor=valor;
         }
      }
 }
  cout<<"maior valor foi : "<<maior;
  cout<<"\n";
   cout<<"menor valor foi : "<<menor;
    return 0;
}