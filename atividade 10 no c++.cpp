#include <iostream>
using namespace std;
int main()
{
	float per_distribuidor;float custo_fabrica;float impostos;float custo_final;
	cout<<"digite o valor do custo de fabrica do carro : \n";
	cin>>custo_fabrica;
per_distribuidor=custo_fabrica*0.28;
	impostos=custo_fabrica*0.45;
	custo_final=custo_fabrica+per_distribuidor+impostos;
	cout<<"o custo de fabrica de um carro = "<<custo_final;
	return 0;
}