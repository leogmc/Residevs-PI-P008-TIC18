#include <string>
#include <iostream>
#include <sstream>
#include <cstring>
#include <vector>


#define QNTD 10
using namespace std;

string stringAleatoria();
string primeiraMaiuscula(string str);


int main() {
    srand(time(0));
    /*Como parte do exercício 3 foi se trabalhou com a geração de strings aleatórias.
    Modifique a sua implementação para:
    a. Em vez de gerar apenas duas strings, gerar uma lista de 10 strings aleatórias;*/
    vector <string> aleatorias;
    cout << endl << "Strings aleatórias geradas:"<< endl;
    for (int i = 0; i < QNTD; i++)
    {

        aleatorias.push_back(stringAleatoria());
        cout << (i+1) << " " << aleatorias[i] << endl;

    }
   
    /*b. Substitua o primeiro caractere de cada string por maiúscula;*/
   

    cout << endl << "Imprimindo com a primeira letra maiuscula:"<< endl;
    for (int i = 0; i < QNTD; i++)
    {
        aleatorias[i] = primeiraMaiuscula(aleatorias[i]);
        cout << (i+1) << " " << aleatorias[i] << endl;

    }

    return 0;
}
string stringAleatoria(){
    string str = "";
    for (int i = 0; i < 15; i++)
        str += ('a' + rand()%('z' - 'a'));
       
    return str;
}

string primeiraMaiuscula(string str){
    str[0] = toupper(str[0]);
    return str;
}
   