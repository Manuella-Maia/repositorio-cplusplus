#include <iostream>
using namespace std;

int main() {
    float morango, maca; 
    float precoMO, precoMA; 
    float desconto = 0; 
    float valortotal, total;

    cout << "Digite a quantidade de morangos : ";
    cin >> morango;
    cout << "Digite a quantidade de macas : ";
    cin >> maca;
    if (morango <= 5) {
        precoMO = morango * 2.50;
    } else {
        precoMO = morango * 2.20;
    }
    if (maca <= 5) {
        precoMA = maca * 1.80;
    } else {
        precoMA = maca * 1.50;
    }
    valortotal = precoMO + precoMA;
    if (morango + maca > 8 || valortotal > 25) {
        desconto = valortotal * 0.10;
    }
    total = valortotal - desconto;
    cout << "O valor total a ser pago e de R$ " << total;
    return 0;
}
