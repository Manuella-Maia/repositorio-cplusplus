#include <iostream>
using namespace std;

int main() {
    float T[365];
    float menor = 100, maior = 0, media, soma = 0;
    int dias_inferiores = 0;

    for (int i = 0; i < 365; i++) {
        cout << "Digite a temperatura do dia " << i + 1 << ": ";
        cin >> T[i];
        soma += T[i];

        
        if (T[i] > maior) {
            maior = T[i];
        }
        if (T[i] < menor) {
            menor = T[i];
        }
    }
    media = soma / 365;
    for (int i = 0; i < 365; i++) {
        if (T[i] < media) {
            dias_inferiores++;
        }
    }
    cout << "A soma das temperaturas e : " << soma << endl;
    cout << "A media anual  : " << media << endl;
    cout << "A maior temperatura e : " << maior << endl;
    cout << "A menor temperatura e : " << menor << endl;
    cout << "A quantidade de dias com temperatura inferior a media e : " << dias_inferiores << endl;

    return 0;
}
