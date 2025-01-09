#include <iostream>
using namespace std;

int main() {
float T [10];
float aux=0;
 int i,j;
 
  for (int i = 0; i <10; i++) {
cout<<"informe o valor "<<i+1<<" : ";
   cin>>T[i];
   	cout<<"\n";
}
 for (int i = 0; i <9; i++) {
 	 for (j = i+1; j <10; j++) {
   if (T[i]>T[j]){
   aux=T[i];
   T[i]=T[j];
   T[j]=aux;
}
}
}
	cout<<"\n";
for (int i = 0; i <10; i++) {
cout<<T[i]<<" ";
}
 return 0;
}
