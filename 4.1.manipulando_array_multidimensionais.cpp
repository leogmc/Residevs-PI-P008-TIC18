#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <opencv2/opencv.hpp> // Inclua a biblioteca OpenCV

using namespace std;
using namespace cv;

int main() {
    int nivel_intensidade = 251; // intensidade de iluminação (vai até 250)

    // Crie uma matriz para representar a imagem (vector de vector)
    vector<vector<int>> imagem(480, vector<int>(640));

    // Inicialize a semente do gerador rand() com o tempo atual
    srand(time(0));

    // Preencha a matriz com valores aleatórios entre 0 e 250
    for (int i = 0; i < 480; ++i) {
        for (int j = 0; j < 640; ++j) {
            imagem[i][j] = rand() % nivel_intensidade; // Gera um valor aleatório entre 0 e 250
        }
    }

    // Crie uma matriz OpenCV a partir da matriz de valores
    Mat imagemOpenCV(480, 640, CV_8UC1);

    // Preencha a matriz OpenCV com os valores da matriz de valores
    for (int i = 0; i < 480; ++i) {
        for (int j = 0; j < 640; ++j) {
            imagemOpenCV.at<uchar>(i, j) = static_cast<uchar>(imagem[i][j]); // Converte para uchar
        }
    }

    // Salve a matriz OpenCV em um arquivo de imagem (por exemplo, no formato PNG)
    imwrite("imagem.png", imagemOpenCV);

    cout << "Imagem salva como 'imagem.png'" << endl;

    return 0;
}
///acesse o build para ter acesso a imagem gerada
