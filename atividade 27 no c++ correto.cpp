#include <iostream>
using namespace std;
int main()
{
	float na;
	cout<<"digite um numero : ";
   cin>>na;
   if (na>0){
      cout<<"numero positivo";
}else if(na<0){
      cout<<"numero negativo";
      }else if(na==0){
            cout<<"numero igual a zero";
       }
		    return 0;
}