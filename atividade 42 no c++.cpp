#include <iostream>
using namespace std;
int main() 
{
	float codigo,anoN,anoA,anoIN,calculo1,calculo2;
cout<<"digite seu codigo : ";
   cin>>codigo;
   cout<<"digite o ano em que voce nasceu : ";
   cin>>anoN;
   cout<<"digite em que ano voce esta : ";
   cin>>anoA;
   cout<<"digite o ano em que voce ingressou na empresa : ";
   cin>>anoIN;
   calculo1=(anoA-anoN);
   calculo2=(anoA-anoIN);
   if(calculo1>=65){
      cout<<"requer aposentadoria";
   }else if(calculo2>=30){
         cout<<"requer aposentadoria";
     }else if (calculo1>=60 && calculo2>=25){
            cout<<"requer aposentadoria";
         }else{
            cout<<"nao requer a aposentadoria";
        }
        cout<<"\n",
  cout<<"A idade do trabalhador e "<<calculo1;
  cout<<"\n";
   cout<<"O tempo de trabalho e "<<calculo2;
   return 0;
}
