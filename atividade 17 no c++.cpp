#include <iostream>
using namespace std;
int main()
{
float na;float nb;float calculo;
 cout<<"qual a sua primeira nota : ";
   cin>>na;
cout<<"qual a sua segunda nota : ";
 cin>>nb;
   calculo=(na+nb/2);

   if (calculo>=6){
      cout<<"aluno aprovado";
   }else
      if (calculo<6){
      cout<<"aluno reprovado";
 }
return 0;	
}