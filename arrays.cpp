#include <iostream>
#include <cstdlib>
#include <ctime>

#define TAMANHO_ARRAY 100
#define TAMANHO_CONTADORES 20
using namespace std;

int main() {
    srand(time(0));

    /*a. Preencha um array com 100 elementos de tipo int, com valores aleatoriamente gerados entre 1 e 20*/
    int array[TAMANHO_ARRAY];

    for (int i = 0; i < TAMANHO_ARRAY; ++i) {
        array[i] = 1 + rand() % 20;
    }

    /*b. Utilize um array de 20 posições para determinar quantas vezes se repete 
    cada um dos possíveis valores gerados no array;*/
    int contadores[TAMANHO_CONTADORES] = {0};

    for (int i = 0; i < TAMANHO_ARRAY; i++) {
        int valor = array[i];
        contadores[valor - 1]++;
    }

    /*c. Determine qual ou quais os números que mais vezes aparecem no array*/
    int maxRepeticoes = 0;

    for (int i = 0; i < TAMANHO_CONTADORES; i++) {
        if (contadores[i] > maxRepeticoes) {
            maxRepeticoes = contadores[i];
        }
    }

    cout << "Os números que mais vezes aparecem no array são:" << endl;

    for (int i = 0; i < TAMANHO_CONTADORES; i++) {
        if (contadores[i] == maxRepeticoes) {
            cout << i + 1 << " ";
        }
    }

    cout << "aparecem " << maxRepeticoes << " vez(es)." << endl;

    return 0;
}
