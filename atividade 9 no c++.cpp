#include <iostream>
using namespace std;
int main()
{
	float salatual; float salnovo; float percentual; float calculo; float total;
	cout<<"qual o valor do seu salario : ";
	cin>>salatual;
	cout<<"qual foi o percentual de aumento : ";
	cin>>percentual;
	calculo=(percentual/100);
	total=calculo * salatual;
	salnovo=(salatual + total);
cout<<"o valor do novo salario = "<<salnovo;
return 0;
}