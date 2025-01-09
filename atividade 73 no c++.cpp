#include <iostream>
using namespace std;

int main() {
    float Media_salario_da_populacao, Media_numero_de_filhos;
    float Maior_salario, Percentual, soma_filhos, soma, salario;
    int numero_habitantes, numero_de_filhos, pessoas_abaixo_do_nivel, i, contador;

    soma = 0;
    soma_filhos = 0;
    pessoas_abaixo_do_nivel = 0;
    contador = 0;

    cout << "Informe o numero de habitantes: \n";
    cin >> numero_habitantes;

    for (i = 1; i <= numero_habitantes; i++) {
        cout << "Digite o salario da pessoa " << i << ": \n";
        cin >> salario;

        if (salario < 0) {
            break; 
        }

        if (contador == 0) {
            Maior_salario = salario;
        } else {
            if (salario > Maior_salario) {
                Maior_salario = salario;
            }
        }

        if (salario < 150) {
            pessoas_abaixo_do_nivel++;
        }

        soma += salario;

        cout << "Digite o numero de filhos da pessoa " << i << ": \n";
        cin >> numero_de_filhos;
        soma_filhos += numero_de_filhos;

        contador++;
    }

    Media_salario_da_populacao = soma / contador;
    Media_numero_de_filhos = soma_filhos / contador;
    Percentual = 100.0 * pessoas_abaixo_do_nivel / contador;

    cout<<"\n";
    cout << "A media do salário da populacao e " << Media_salario_da_populacao << "\n";
    cout << "O maior salário da populacao e " << Maior_salario << "\n";
    cout << "A media do número de filhos e  " << Media_numero_de_filhos << "\n";
    cout << "O percentual de pessoas com salario abaixo de R$150 e  " << Percentual << "%\n";

    return 0;
}
