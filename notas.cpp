#include <iostream>
#include <cstdlib>
#include <ctime>

#define TAMANHO_ARRAY 15

using namespace std;

int main() {
    srand(time(0));

    /*a. Preencha um array com 100 elementos de tipo int, com valores aleatoriamente gerados entre 1 e 20*/
    float notasAV1[TAMANHO_ARRAY];
    float notasAV2[TAMANHO_ARRAY];
    float media[TAMANHO_ARRAY];
    /*a. Simule as notas de uma turma de 15 alunos em uma avaliação e guarde num array;*/
    for (int i = 0; i < TAMANHO_ARRAY; ++i) {
        notasAV1[i] = ((float)rand()/RAND_MAX) * 10;
    }
    /*b. Simule as notas da mesma turma numa segunda avaliação e guarde em um segundo array;*/
    for (int i = 0; i < TAMANHO_ARRAY; ++i) {
        notasAV2[i] = ((float)rand()/RAND_MAX) * 10;
    }
    /*c. Compare as notas de cada aluno na segunda avaliação, em relação à
    primeira, e imprima na tela as mensagens
    “Melhorou”, “Piorou” ou “Manteve a nota” de acordo com o desempenho de cada aluno;*/
    for (int i = 0; i < TAMANHO_ARRAY; ++i) {
        if (notasAV2[i] > notasAV1[i])
            cout << "Aluno " + i  << " melhorou." << endl;
        else if (notasAV2[i] < notasAV1[i])
            cout << "Aluno " + i << " piorou." << endl;
        else
            cout << "Aluno " + i << " manteve a nota." << endl;
    }
    
    /*d. Preencha um um terceiro array com a média de cada aluno nas duas avaliações.*/
    for (int i = 0; i < TAMANHO_ARRAY; ++i) {
        media[i] = (notasAV2[i] + notasAV1[i]) / 2.0;

        cout << "Aluno " + (i + 1) << " media: "<< media[i] << endl;
    }
    
    return 0;
}
