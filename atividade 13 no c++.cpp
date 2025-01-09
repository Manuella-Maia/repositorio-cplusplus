#include <iostream>
using namespace std;
int main()
{ 
float nota_a;float nota_b;float nota_c;float calculo; float media_final; 
  cout<<"qual foi a sua primeira nota \? ";
  cin>>nota_a;
  cout<<"qual foi a sua segunda nota \? ";
  cin>>nota_b;
  cout<<"qual foi sua terceira nota \? ";
  cin>>nota_c;
  calculo=(nota_a*2+nota_b*3+nota_c*5)/10;
  media_final=calculo;
  cout<<"sua media final =  "<<media_final;
  return 0;
}

