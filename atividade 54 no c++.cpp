#include <iostream>
using namespace std;
int main() 
{
	
	int N, i;
	do{
	cout<<"digite um valor para N : \n";
	cin>>N;
	while (N<=0){
	cout<<"digite novamente o valor para N : \n";
	cin>>N;	
	}
	 for(i=1;i<=N;i++){
	 cout<<i<<" ";
}
	
}while(N==0);
return 0;
}
	
