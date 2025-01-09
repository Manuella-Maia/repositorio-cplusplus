#include <iostream>
using namespace std;
int main() 
{
	 float V1,V2;
cout<<"digite um valor : \n";
   cin>>V1;
   do {
     cout<<"digite outro valor : \n";
      cin>>V2;
      if (V2 == 0) {
     cout<<"valor invalido \n";
      cin>>V2;
  }
}
   while (V2 == 0);
   cout<<"divisao : \n"<<V1/V2;
   return 0;
}