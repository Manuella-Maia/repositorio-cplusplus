#include <iostream>
using namespace std;
int main(){
float salariohora; float horastrabalhadas; float salariototal; float horasextras; float pagamentohorasextras;
 cout<<"digite o numero de horas trabalhadas no mes ";
  cin>>horastrabalhadas;
  cout<<"digite o salario por hora ";
  cin>>salariohora;
   if (horastrabalhadas > 160) {
  horasextras=horastrabalhadas-160;
  pagamentohorasextras=horasextras*(salariohora*1.5);
  salariototal=(160*salariohora)+pagamentohorasextras;
  cout<<"o seu salario total e de RS "<<salariototal;
  }else{
  salariototal=horastrabalhadas*salariohora;
}
  cout<<"o seu salario total e de RS "<<salariototal;
return 0;
}