#include <iostream>
using namespace std;
int main(){
	double va; int vb;
	cout<<"digite um valor  ";
	cin>>va;
	cout<<"digite outro valor  ";
	cin>>vb;
	if (va==vb){
	cout<<"nao sera valido";
	}else{
		if (va>vb){
		cout<<"o maior e  "<<va;
	} else {
		cout<<"o mair e "<<vb;
	}
}
	return 0;	
}