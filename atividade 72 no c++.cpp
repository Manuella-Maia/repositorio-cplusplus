#include <iostream>
using namespace std;
int main()
{
	int codigo,i;
  float valor,maior, media_a,soma;
  soma=0;
  maior=0;
  
  for(i=1;i<=15;i++){
      cout<<"digite codigo "<<i<<" : \n";
     cin>>codigo;
     cout<<"\n";
      cout<<"digite o valor do produto "<<i<<" : \n";
       cin>>valor;
       cout<<"\n";
     if(i==1) {
         maior=valor;
      }else{
         if (valor>maior) {
            maior=valor;
         }
     }
      soma+=valor;
 }
   media_a=soma/15;
   cout<<"o maior valor e "<<maior;
   cout<<"e a media aritimetica e "<<media_a;
return 0;
}