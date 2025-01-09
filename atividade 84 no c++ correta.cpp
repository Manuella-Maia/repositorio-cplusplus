#include <iostream>
using namespace std;
int main()
{

 int A[20], B[20],soma[20];
 int i,N;
 
cout<<"digite um valor para N : ";
cin>>N;
cout<<"\n";

 for (i=1;i<=N;i++) { 
 cout<<"Digite o valor "<<i<<" para o vetor A : ";
 cin>>A[i];
 cout<<"\n";
}
for (i=1;i<=N;i++) { 
 cout<<"Digite o valor "<<i<<" para o vetor B : ";
 cin>>B[i];
 cout<<"\n";
}
for (i=1;i<=N;i++) { 
soma[i]=A[i]+B[i];
}
cout<<"A soma dos valores e igual a : \n";
for (i=1;i<=N;i++) { 
cout<<soma[i]<<", ";
}
return 0;
}
 
