#include <iostream>
using namespace std;
int main()
{
	  int a; int b;int c;int maior;int segundomaior;int  menor;
	  cout<<"digite o primeiro numero : ";
   cin>>a;
  cout<<"digite o segundo numero : ";
   cin>>b;
   cout<<"digite o terceiro numero : ";
  cin>>c;
  if(a>b && a>c){
      maior=a;
      if(b>c){
         segundomaior=b;
         menor = c;
      }else{
         segundomaior=c;
         menor = b;
   }
   }
   if(b>a && b>c){
      maior=b;
       if(c>a){
         segundomaior=c;
         menor = a;
      }else{
         segundomaior=a;
         menor = c;
  }
}

   if(c>b && c>a){
      maior=c;
     if(a>b){
         segundomaior=a;
         menor = b;
     }else{
         segundomaior=b;
         menor = a;
}
}
   cout<<"a soma dos dois maiores e "<<maior+segundomaior;
		    return 0;
}