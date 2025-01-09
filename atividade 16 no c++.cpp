#include <iostream>
using namespace std;
int main()
{
 float numero_maca;float calculo_1;float calculo_2;
cout<<"digite quantas macas vc comprou ? ";
cin>>numero_maca;
if (numero_maca<12){
calculo_1=numero_maca*1.30;
cout<<"valor total da compra =  \b"<<calculo_1;
}else
if (numero_maca>=12){
calculo_2=numero_maca*1;
cout<<"valor total da compra =  \b"<<calculo_2;
}		
return 0;	
}