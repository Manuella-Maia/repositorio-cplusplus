#include <iostream>
using namespace std;
int main()
{
float na; float nb; float nc;float calculo;
cout<<"digite o primeiro numero : ";
   cin>>na;
   cout<<"digite o segundo numero : ";
   cin>>nb;
   cout<<"digite o terceiro numero : ";
   cin>>nc;
   
    if(na==nb && na==nc){
      cout<<"numeros invalidos";
   }else if (na>nb && na>nc){
         cout<<"o maior numero e "<<na;
      }else if(nb>na && nb>nc){
	  
            cout<<"o maior numero e "<<nb;
         }else if(nc>na && nc>nb){
               cout<<" o maior numero e "<<nc;
               }else if (na>nb && nb>nc){
			   
               calculo= na+nb;
               cout<<"a soma dos dois valores e igual "<<calculo;
               }else if (nb>na && na>nc){
			   
               calculo-=nb+na;
               cout<<"a soma dos dois valores e igual "<<calculo;
               }else if (nc>na && nb>nc){
			   
               calculo=nc+nb;
               cout<<"a soma dos dois valores e igual "<<calculo;
           }
                return 0;
}
               
               