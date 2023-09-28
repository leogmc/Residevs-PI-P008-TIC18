#include <iostream>
#include <cstdlib>
#include <ctime>

#define LARGURA 640
#define ALTURA 480

using namespace std;

int main() {
    srand(time(0));

    /*a. Simule a captura de uma imagem de 640 por 480 pixels, onde a
    intensidade de iluminação é representada como um valor inteiro
    entre 0 (preto ou sem iluminação) e 255 (branco ou totalmente iluminado).*/

    //A altura -> linhas e a largura -> colunas
    int imagem[ALTURA][LARGURA];

    //Preenche o array com numeros aleatorios entre 0 e 255
    for (int i = 0; i < ALTURA; i++)
        for (int j = 0; j < LARGURA; j++)
            imagem[i][j] = rand() % 256;

    /*b. Um histograma permite analisar a distribuição de frequências de cada
    intensidade em uma imagem. Pesquise mais sobre histogramas e
    implemente o código para construir o histograma da imagem que foi gerada*/
    int histograma[256] = {0};
    for (int i = 0; i < ALTURA; i++)
        for (int j = 0; j < LARGURA; j++)
            histograma[imagem[i][j]]++;


    // Imprimir o histograma
    cout << "Histograma da imagem:" << endl;
    for (int i = 0; i < 256; i++) {
        cout << "Intensidade " << i << ": " << histograma[i] << " pixels" << endl;
    }


    return 0;
}