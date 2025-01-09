#include <iostream>
using namespace std;
int main() 
{
	float v1,v2;
cout<<"digite um valor : \n";
   cin>>v1;
   cout<<"digite outro valor: \n";
   cin>>v2;
   while (v2 == 0) {
   cout<<"valor invalido,informe outro valor: \n";
   cin>>v2;
}
   cout<<"divisao: \n"<<v1/v2;
   return 0;
}