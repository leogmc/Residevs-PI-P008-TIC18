#include <string>
#include <iostream>
#include <sstream>

using namespace std;
bool dataValida(int dia, int mes, int ano);
string mesPorExtenso(int mes);
int main() {
    /*a. Leia do teclado uma string no formato dd/mm/aaaa, ao alguma
    variação desse formato dd/mm/aaaa
    imprima na tela por separado dia, mês e ano.*/
    string dataStr;
    cout << "Digite uma data no formato dd/mm/aaaa: ";
    cin >> dataStr;

    int dia=0, mes=0, ano=0;
    char barra;
    
    stringstream ss(dataStr);
    ss >> dia >> barra >> mes >> barra >> ano;
    
    if (dia >0 && mes > 0 && ano > 0){

        if (ano >= 1 && ano <= 99)
            ano = 2000 + ano;

        /*Modifique o exemplo anterior de forma a verificar se a data fornecida
        é uma data válida (Ex. 31/02/1990 e 24/15/2002 não são datas válidas);*/
        bool dataEstaValida = dataValida(dia, mes, ano);
        if(dataEstaValida)
            cout <<"Dia: "<< dia << " mês: "<< mes << " ano: "<< ano << endl;
        /*c. Modifique a aplicação de forma que, se for uma data válida, imprima
        a data por extenso (Ex. para 5/12/2022 imprimir 5 de dezembro de 2022)*/
        if(dataEstaValida){
            string mesStr = mesPorExtenso(mes);
            cout << "Data por extenso: "<< dia << " de "<< mesStr << " de "<< ano << endl;
        }
    } else{
        cout <<"Data inválida: Data no formato inválido" << endl;
    }
    



    return 0;
}
string mesPorExtenso(int mes){
    string mesExtenso="";
    switch (mes)
    {
    case 1:
        mesExtenso="janeiro";
        break;
    case 2:
        mesExtenso="fevereiro";
        break;
    case 3:
        mesExtenso="março";
        break;
    case 4:
        mesExtenso="abril";
        break;
    case 5:
        mesExtenso="maio";
        break;
    case 6:
        mesExtenso="junho";
        break;
    case 7:
        mesExtenso="julho";
        break;
    case 8:
        mesExtenso="agosto";
        break;
    case 9:
        mesExtenso="setembro";
        break;
    case 10:
        mesExtenso="outubro";
        break;
    case 11:
        mesExtenso="novembro";
        break;
    case 12:
        mesExtenso="dezembro";
        break;
    default:
        break;
    }
return mesExtenso;
}
 bool dataValida(int dia, int mes, int ano) {
        if (ano < 1900 || ano > 2100) { 
           cout << "Data inválida: ano está fora no intervalo 1900-2100" << endl;
           return false; 
        }
        if (mes < 1 || mes > 12) { 
            cout << "Data inválida: mês está fora no intervalo 1-12" << endl;
           return false; 
        }
        int dias_no_mes = 0;
    
        if (mes == 2) 
            dias_no_mes = (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)) ? 29 : 28;
        else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) 
            dias_no_mes = 30;
        else
            dias_no_mes = 31;
    
        if (dia < 1 || dia > dias_no_mes) { 
            cout << "Data inválida: dia está fora no intervalo 1-"+ dias_no_mes << endl;
            return false; 
        }

        return true;
}
    