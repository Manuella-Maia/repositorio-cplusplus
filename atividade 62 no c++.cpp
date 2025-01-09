#include <iostream>
using namespace std;
int main() 
{
	int quantAlunos,notas,media,soma,valor,i;
	cout<<"Digite a quantidade de alunos na turma : ";
	cin>>quantAlunos;
	notas=0;
	for(i=1;i<=quantAlunos;i++){
		cout<<"digite a nota do aluno  "<<i<<": \n";
	cin>>valor;
	notas=notas+valor;
}
	media=notas/quantAlunos;
	cout<<"A media aritmedica dos alunos dessa turma e : "<<media;
	return 0;
}
