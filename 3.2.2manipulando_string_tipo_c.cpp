#include <iostream>
#include <cstdlib> // Incluindo a biblioteca para a função rand()

using namespace std;

int main() {

    string palavra1 = "";
    string palavra2 = "";
   
    // Inicialize a semente do gerador rand() com o tempo atual
    srand(time(0));

    for (int i = 0; i < 10; i++) {
        
        palavra1 += 'a' + rand() % 26; // Gera um caractere aleatório entre 'a' e 'z' e Concatene o caractere à primeira string
        palavra2 += 'a' + rand() % 26; // Gere um caractere aleatório entre 'a' e 'z' e Concatene o mesmo caractere à segunda string
    }

    int c = int(palavra1[0]) - 32; //pegando o valor inteiro da string da primeira posição e convertendo para maiuscula
    palavra1[0] = char(c); //inserindo o inteiro obito na primeira posição o convertendo em char.
    
    c = int(palavra2[0]) -32;//pegando o valor inteiro da string da primeira posição e convertendo para maiuscula
    palavra2[0] = char(c);//inserindo o inteiro obito na primeira posição o convertendo em char.

    cout << "Sequência de caracteres na palavra1: " << palavra1 << endl;
    cout << "Sequência de caracteres palavra2: " << palavra2 << endl;

    return 0;
}
