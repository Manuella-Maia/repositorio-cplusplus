#include <iostream>
using namespace std;

int main() {
    int A[20];
    int C[20];
    int i, busca, B = 0, cont = 0;

    
    for (i = 0; i < 20; i++) {
        cout << "Digite o valor " << i + 1 << " : ";
        cin >> A[i];
        cout << "\n";
    }

   
    cout << "Informe outro valor: ";
    cin >> busca;

    
    for (i = 0; i < 20; i++) {
        if (busca != A[i]) {
            C[cont] = A[i];
            cont++;
        }
    }

    
    cout << "\nO novo vetor e :\n";
    for (i = 0; i < cont; i++) {
        cout << C[i] << " ";
    }
    cout << "\n";

    return 0;
}

