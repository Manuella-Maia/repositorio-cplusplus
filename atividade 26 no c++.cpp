#include <iostream>
using namespace std;
int main()
{
float qatual;float qmax;float qmin;float qmedia;
cout<<"digite a quantidade atual : ";
cin>>qatual;
cout<<"digite a quantidade maxima : ";
cin>>qmax;
cout<<"digite a quantidade minima : ";
cin>>qmin;
qmedia=(qmax+qmin)/2;

if (qatual>=qmedia)
cout<<"Nao efetuar compra";
else
cout<<"Efetuar compra";
return 0;
}