#include <iostream>
using namespace std;
int main()
{
string timea, timeb; int na;int nb;
cout<<"digite o nome do time : ";
   cin>>timea;
   cout<<"digite o numero de gols marcados : ";
   cin>>na;
   cout<<"digite outro time : ";
   cin>>timeb;
   cout<<"digite o numero de gols marcados : ";
   cin>>nb;
    if (na==nb){
     cout<<"jogo terminou em empate";
 }
   else if (na>nb){
      cout<<"time vencedor foi "<<timea;
  }
      else{
      cout<<"time vencedor foi "<<timeb;
  }
   return 0;
}
      