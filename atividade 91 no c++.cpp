#include <iostream>
using namespace std;

int main() {
    int VET[50];
    int i, j;

   
    for (i = 0; i < 50; i++) {
        cout << "Digite o valor " << i + 1 << ": ";
        cin >> VET[i];
    }

    
    for (i = 0; i < 49; i++) {
        for (j = i + 1; j < 50; j++) {
            if (VET[i] == VET[j]) {
                cout << "As posições dos valores que se repetem são " << i + 1 << " e " << j + 1 << endl;
            }
        }
    }

    return 0;
}

