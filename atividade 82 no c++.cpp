#include <iostream>
using namespace std;
int main()
{
int	A[10];
int	M[10]; 
 int X,i;

for (i=1;i<=10;i++) { 
cout<<"\n";
cout<<"Digite o valor "<<i<<": ";
cin>>A[i];
}
cout<<"\n";
cout<<"Digite um valor para X: ";
cin>>X;

for (i=1;i<=10;i++) {
M[i]=A[i]*X;
}
for (i=1;i<=10;i++) { 
cout<<"\n";
cout<<"A multiplicacao dos valores e igual "<<": "<<M[i];
}
 return 0;
}
