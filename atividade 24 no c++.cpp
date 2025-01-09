#include <iostream>
using namespace std;
int main()
{
float salariofixo;float valordasvendas;float comissao;float salariototal;float  calculo;
cout<<"qual seu salario fixo : ";
cin>>salariofixo;
cout<<"qual foi o valor total das vendas : ";
cin>>valordasvendas;

if(valordasvendas<=1500){
comissao=valordasvendas*0.03;
salariototal=salariofixo+comissao;
}else if(valordasvendas>1500){
comissao=(1500*0.03)+(valordasvendas-1500)*0.05;
salariototal=salariofixo+comissao; 
}
cout<<"o salario total e : "<<salariototal;
 return 0;
}
