#include <iostream>
using namespace std;

int main() {
    double numerodeL, precocomb, desconto, precototal;
    char tipodecomb;

    cout << "Digite o numero de litros vendidos: ";
    cin >> numerodeL;
    cout << "Digite o tipo de combustivel (A-alcool ou G-gasolina): ";
    cin >> tipodecomb;

    // Definindo o preço do combustível
    if (tipodecomb == 'A' || tipodecomb =='a') {
        precocomb = 2.90;
    } else if (tipodecomb == 'G' || tipodecomb =='g') {
        precocomb = 3.30;
    }

    // Definindo o desconto
    if (tipodecomb == 'A' || tipodecomb =='a') {
        if (numerodeL <= 20) {
            desconto = 0.03;
        } else {
            desconto = 0.05;
        }
    } else if (tipodecomb == 'G'|| tipodecomb =='g') {
        if (numerodeL <= 20) {
            desconto = 0.04;
        } else {
            desconto = 0.06;
        }
    }

    // Calculando o valor total a ser pago
    precototal = (numerodeL * precocomb) * (1 - desconto);
    cout << "O valor a ser pago pelo cliente e de R$ " << precototal;

    return 0;
}