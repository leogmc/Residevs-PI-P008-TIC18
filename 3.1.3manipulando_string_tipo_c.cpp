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


string mesPorExtenso(int mes) {
    string meses[] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho",
                      "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    
    if (mes >= 1 && mes <= 12)
        return meses[mes -1];
    
    return "";
}


int main() {
    int dia, mes, ano;

    cout << "Digite uma data no formato dd/mm/aaaa: ";
    if (scanf("%d/%d/%d", &dia, &mes, &ano) == 3) {

        if (dataValida(dia,mes,ano)){
            string mes_extenso = mesPorExtenso(mes);
            if (mes_extenso != ""){
                cout <<dia << " de " <<mes_extenso<< " de " << ano <<endl;
            }else{
                cout <<dia << "/" << mes << "/" << ano <<endl;
                cout<<"Não foi possivel exibir no formato desejado."<<endl;
            }
            
        }
        
    } else {
        cout << "Formato inválido!" << std::endl;
    }

    return 0;
}
