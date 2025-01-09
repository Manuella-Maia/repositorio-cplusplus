#include <iostream>
using namespace std;
int main() 
{
	float V1,V2;
cout<<"digite um valor : ";
   cin>>V1;
     cout<<"digite outro valor : ";
      cin>>V2;
        while (V2==0){
        cout<<"digite outro valor : ";
      cin>>V2;
  }
       cout<<"divisao : "<<V1/V2;
 return 0;
}