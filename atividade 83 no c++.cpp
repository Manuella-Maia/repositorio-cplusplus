#include <iostream>
using namespace std;
int main()
{
int A[20];
 int i;

for (i=1;i<=20;i++) { 
cout<<"digite o valor"<<i<<": ";
cin>>A[i];
cout<<"\n";
}
for (i=20;i>=1;i--) { 
cout<<A[i]<<", ";
}
return 0;
}
