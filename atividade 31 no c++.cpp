#include <iostream>
using namespace std;
int main()
{
	float ladoa;float ladob;float ladoc;
	 cout<<"digite uma medida : ";
   cin>>ladoa;
   cout<<"digite uma segunda medida : ";
   cin>>ladob;
   cout<<"digite uma terceira medida : ";
   cin>>ladoc;
   if(ladoa<ladob+ladoc && ladob<ladoa+ladoc && ladoc<ladoa+ladob) 
      cout<<"forma um triangulo";
   else
      cout<<"nao forma um triangulo";
       return 0;
}
   