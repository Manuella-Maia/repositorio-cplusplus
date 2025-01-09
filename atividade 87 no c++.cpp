#include <iostream>
using namespace std;

int main() {
    float T[11];
    float aux, num;
    int i, j;

    for (i = 0; i < 10; i++) {
        cout << "Informe o valor " << i + 1 << " : ";
        cin >> T[i];
        cout << "\n";
    }

    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            if (T[i] > T[j]) {
                aux = T[i];
                T[i] = T[j];
                T[j] = aux;
            }
        }
    }

    cout << "\nValores ordenados: ";
    for (i = 0; i < 10; i++) {
        cout << T[i] << " ";
    }
    cout << "\n";

    cout << "Informe outro valor: ";
    cin >> num;

   
    for (i = 9; i >= 0; i--) {
        if (T[i] > num) {
            T[i + 1] = T[i];
        } else {
            break;
        }
    }
    T[i + 1] = num;

    cout << "Com o novo número a ordem e : ";
    for (i = 0; i < 11; i++) {
        cout << T[i] << " ";
    }
    cout << "\n";

    return 0;
}
