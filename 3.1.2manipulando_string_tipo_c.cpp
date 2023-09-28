#include <iostream>

using namespace std;


bool ehBissexto(int ano) {
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

bool dataValida(int dia, int mes, int ano) {
    if (mes < 1 || mes > 12)
        return false;
    
    int diasNoMes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if (ehBissexto(ano))
        diasNoMes[2] = 29;
    
    if (dia < 1 || dia > diasNoMes[mes])
        return false;
    
    return true;
}


int main() {
    int dia, mes, ano;

    cout << "Digite uma data no formato dd/mm/aaaa: ";
    if (scanf("%d/%d/%d", &dia, &mes, &ano) == 3) {

        if (dataValida(dia,mes,ano)){
            cout << "Dia: " << dia << endl;
            cout << "Mês: " << mes << endl;
            cout << "Ano: " << ano << std::endl;
        }
        
    } else {
        cout << "Formato inválido!" << std::endl;
    }

    return 0;
}
