#include <iostream>
#include <cstdlib> // Incluindo a biblioteca para a função rand()
#include <vector>
using namespace std;

int main() {

    string palavra = "";
    vector<string> lista_de_palavras(10);
    int c;
    
    // Inicialize a semente do gerador rand() com o tempo atual
    srand(time(0));

    for(int j=0 ; j<10; j++){
        
        for (int i = 0; i < 10; i++) {
            palavra += 'a' + rand() % 26; // Gera um caractere aleatório entre 'a' e 'z' e Concatene o caractere à primeira string
        }
        // c = int(palavra[0]) -32;
        // palavra[0] = char(c);
        lista_de_palavras.push_back(palavra);
        palavra = "";
    }

   

    int c = int(palavra[0]) - 32; //pegando o valor inteiro da string da primeira posição e convertendo para maiuscula
    palavra[0] = char(c); //inserindo o inteiro obito na primeira posição o convertendo em char.
    

    cout << "Sequência de caracteres na palavra: " << palavra << endl;
  
    return 0;
}