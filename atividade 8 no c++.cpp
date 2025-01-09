#include <iostream>
using namespace std;
int main()
{
	float vb; float vn; float vva; float totale; float perb; float pern; float perva;
	cout<<"qual o numero total de eleitores : \n ";
	cin>>totale;
	cout<<"qual o numero de votos brancos : \n";
cin>>vb;
cout<<"qual o numero de votos nulos : \n";
cin>>vn;
cout<<"qual o numero de votos validos : "<<"\n";
cin>>vva;
perb=(vb/totale)*100;
pern=(vn/totale)*100;
perva=(vva/totale)*100;
cout<<"o percentual dos votos brancos : "<<perb<<"\n";
cout<<"\n";
cout<<"o percentual dos votos nulos :  "<<pern<<"\n";
cout<<"\n";
cout<<"o percentual dos votos validos :  "<<perva<<"\n";
return 0;
}