#include <iostream>
using namespace std;
int main()
{ 
float salario_fixo ; float comi;float comi_final ;float valor_venda ;
float valor_venda_final;float numeros_car_vend;float salario_final; 

cout<<"qual o seu salario fixo ?  ","\n";
cin>>salario_fixo;
cout<<"qual foi o numeros de carros vendidos ? ","\n";
cin>>numeros_car_vend;
cout<<"qual foi o valor da venda ? ","\n";
cin>>valor_venda;
cout<<"qual o valor da sua comisao fixa ?","\n";
cin>>comi;

comi_final=comi*numeros_car_vend;
valor_venda_final=valor_venda*0.05;
salario_final=salario_fixo+comi_final+valor_venda_final;
cout<<"seu salario final :  "<<salario_final;
return 0;
}
