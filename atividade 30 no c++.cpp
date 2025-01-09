#include <iostream>
using namespace std;
int main()
{
int	a;int b;int c;int aux;
 cout<<"digite um valor : ";
   cin>>a;
   cout<<"digite um segundo valor : ";
   cin>>b;
   cout<<"digite um terceiro valor : ";
   cin>>c;
   if (a>b){
      aux=a;
      a=b;
      b=aux;
  }
   if (a>c){
      aux=a;
      a=c;
      c=aux;
}
   if (b>c) {
      aux=b;
      b=c;
      c=aux;
  }
 
   cout<<"a orden crescente dos valores e : "<<a<<" "<<b<<" "<<c;
   		    return 0;
}