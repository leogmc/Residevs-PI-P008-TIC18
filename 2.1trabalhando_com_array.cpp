#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(nullptr));
    int array[20];
    int contagem[20] = {0}; // Inicializa todas as contagens como zero
    int num;

    // Preenche o array com números aleatórios entre 1 e 20
    for (int i = 0; i < 20; i++) {
        num = 1 + rand() % 20;
        array[i] = num;
        cout << array[i]<<endl;
    }

    // Conta quantas vezes cada número aparece no array
    for (int i = 0; i < 20; i++) {
        contagem[array[i] - 1]++; // Subtrai 1 para mapear os números de 1 a 20 para índices de 0 a 19
    }

    // Encontra o número (ou números) que mais vezes aparecem
    int maxContagem = 0;
    for (int i = 0; i < 20; i++) {
        if (contagem[i] > maxContagem) {
            maxContagem = contagem[i];
        }
    }

    // Imprime os números que mais vezes aparecem
    cout << "Número(s) que mais vezes aparece(m):" << endl;
    for (int i = 0; i < 20; i++) {
        if (contagem[i] == maxContagem) {
            cout << i + 1 << " ";
        }
    }
    cout << "aparece(m) " << maxContagem << " vez(es)." << endl;

    return 0;
}

