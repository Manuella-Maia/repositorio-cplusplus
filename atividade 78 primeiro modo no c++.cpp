#include <iostream>
using namespace std;

int main()
{
    int i;
    string nome[10];   
    string pesc;      
    bool encontrado = false; 
    
    for (i=0;i<10;i++) {  
        cout << "Digite o " <<i+1<< " nome: ";
        cin >> nome[i];
    }
cout<<"\n";
    cout << "Digite um nome para pesquisar: ";
    cin >> pesc;

    for (i=0;i<10;i++) {  
        if (pesc == nome[i]) {
            encontrado = true;  
            break;  
        }
    }
    cout<<"\n";
    if (encontrado) {
        cout << "achei";
    } else {
        cout << "nao achei";
    }

    return 0;
}
