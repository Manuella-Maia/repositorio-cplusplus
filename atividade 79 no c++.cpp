#include <iostream>
using namespace std;

int main()
{
int nota[20],i,quant=0;
   float soma=0,media;
   for (i=0;i<20;i++) { 
      cout<<"digite a "<<i+1<<" nota : ";
      cin>>nota[i];
      soma+=nota[i];
   }
     media=soma/20;
     for (i=0;i<20;i++) { 
     if (nota[i]> media) {
     quant++;
     }
 }
 cout<<"\n";
cout<<"a media da turma e de "<<media;
cout<<"\n";
cout<<"a quantidade de notas acima da media foi "<<quant;
 return 0;
}