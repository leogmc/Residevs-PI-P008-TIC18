#include <iostream>

using namespace std;

int main() {
    
    int dia, mes, ano;
    cout << "Digite uma data no formato dd/mm/aaaa: ";

    if (scanf("%d/%d/%d", &dia, &mes, &ano) == 3) {

        cout << "Dia: " << dia << endl;
        cout << "Mês: " << mes << endl;
        cout << "Ano: " << ano << std::endl;
        
    } else {
        cout << "Formato inválido!" << std::endl;
    }

    return 0;
}


