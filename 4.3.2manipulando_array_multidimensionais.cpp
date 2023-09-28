#include <iostream>
#include <cstdlib> // Incluindo a biblioteca para a função rand()
#include <ctime>   // Incluindo a biblioteca para a função time()
#include <vector>
using namespace std;

int main() {
    string palavra = "";
    vector<string> lista_de_palavras(10);

    // Inicialize a semente do gerador rand() com o tempo atual
    srand(time(0));

    for (int j = 0; j < 10; j++) {
        for (int i = 0; i < 10; i++) {
            palavra += 'a' + rand() % 26; // Gera um caractere aleatório entre 'a' e 'z' e concatena o caractere à string
        }
        
        int c = int(palavra[0]) - 32; // Converta a primeira letra para maiúscula
        palavra[0] = char(c);
        lista_de_palavras[j] = palavra;
        palavra = "";
    }

    // Exiba as palavras na lista
    for (const string& palavra : lista_de_palavras) {
        cout << "Palavra: " << palavra << endl;
    }

    return 0;
}
