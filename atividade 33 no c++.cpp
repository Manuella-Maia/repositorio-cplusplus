#include <iostream>
using namespace std;
int main()
{
int a,b;int primeiro,segundo;
cout<<"digite um valor : ";
cin>>a;
cout<<"digite outro valor : ";
cin>>b;
if (a==b){
cout<<("numeros iguais");
}
if(a>b){
primeiro=a;
segundo=b;
cout<<"o primeiro e maior";
}
if (b>a){
primeiro=b;
segundo=a;
cout<<"o segundo e maior";
}
 return 0;
}
     