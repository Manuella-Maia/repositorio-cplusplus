#include <iostream>
using namespace std;
int main()
{ 
int i,valor,maior,soma,quantidadenun;
   float media,somafloat;
 cout<<"digite uma quantidade de numeros : ";
 cin>>quantidadenun;
 cout<<"\n";
   soma=0;
   for(i=1;i<=quantidadenun;i++){
      cout<<"digite o valor "<<i<<" : \n";
     cin>>valor;
     if(i==1) {
         maior=valor;
      }else{
         if (valor>maior) {
            maior=valor;
     }
  }
      soma+=valor;
   }
   somafloat=soma;
   media=somafloat/quantidadenun;
   cout<<"o maior numero e "<<maior;
   cout<<"\n";
   cout<<"a media e "<<media;
    return 0;
}