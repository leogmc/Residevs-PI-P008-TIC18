#include <iostream>
#include <cstdlib> // Inclua a biblioteca para a função rand()

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

    cout << "Sequência de caracteres na palavra1: " << palavra1 << endl;
    cout << "Sequência de caracteres palavra2: " << palavra2 << endl;

    return 0;
}
