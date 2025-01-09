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
		cout<<"a ordem crescente e "<<vb<<" "<<va;
	} else {
		cout<<"a ordem crescente e "<<va<<" "<<vb;
	}
}
	return 0;	
}