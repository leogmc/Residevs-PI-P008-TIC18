#include <string>
#include <iostream>
#include <sstream>
#include <cstring>
using namespace std;

string stringAleatoria();
string primeiraMaiuscula(string str);


int main() {
    srand(time(0));
    /*a. Gere duas strings de forma aleatória com 10 caracteres;*/
    string string1 = stringAleatoria();
    string string2 = stringAleatoria();
    cout << endl << "Strings aleatórias geradas:"<< endl;
    cout << string1 << endl;
    cout << string2 << endl;

    /*b. Transforme o primeiro caractere de cada string em maiúscula;*/
    string1 = primeiraMaiuscula(string1);
    string2 = primeiraMaiuscula(string2);

    /*c. Imprima as strings em ordem alfabética;*/
    int resultado = string1.compare(string2);

    cout << endl << "Imprimindo em ordem alfabética:"<< endl;

    if (resultado < 0) {
        // string1 é menor do que string2
        cout << string1 << endl;
        cout << string2 << endl;
    } else if (resultado > 0) {
        // string2 é menor do que string1
        cout << string2 << endl;
        cout << string1 << endl;
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
   