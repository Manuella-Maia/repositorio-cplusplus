#include <iostream>
using namespace std;
int main()
{
     int anos;
   int mes;
   int dias;
   int total;
   cout<<"digite sua idade em anos :  ";
   cin>>anos;
cout<<"digite quantos meses completos voce tem :  ";
cin>>mes;
cout<<"digite quantos dias completos voce tem :  ";
cin>>dias;
total= (anos*365)+(mes*30)+dias;
cout<<"o total de dias vividos : " << total;
return 0;
}