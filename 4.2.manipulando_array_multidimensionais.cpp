#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace std;

int main() {
    cv::Mat imagem = cv::imread("/home/daniel/Área de Trabalho/Grupo1/Pratica8/build/imagem.png", cv::IMREAD_GRAYSCALE);

    if (imagem.empty()) {
        cerr << "Não foi possível carregar a imagem." << endl;
        return -1;
    }

    cv::Mat histograma;
    int histSize = 256;
    float range[] = {0, 256};
    const float *histRange = {range};
    bool uniform = true;
    bool accumulate = false;
    cv::calcHist(&imagem, 1, 0, cv::Mat(), histograma, 1, &histSize, &histRange, uniform, accumulate);

    int histWidth = 512;
    int histHeight = 400;
    int binWidth = cvRound((double)histWidth / histSize);
    cv::Mat histImage(histHeight, histWidth, CV_8UC3, cv::Scalar(0, 0, 0));

    cv::normalize(histograma, histograma, 0, histImage.rows, cv::NORM_MINMAX, -1, cv::Mat());

    for (int i = 1; i < histSize; i++) {
        cv::line(histImage, cv::Point(binWidth * (i - 1), histHeight - cvRound(histograma.at<float>(i - 1))),
                 cv::Point(binWidth * (i), histHeight - cvRound(histograma.at<float>(i))),
                 cv::Scalar(255, 255, 255), 2, 8, 0);
    }

    cv::imshow("Histograma", histImage);
    cv::waitKey(0);
    //acesse a pasta build para ter acesso a um sceenshort da tela do histograma
    return 0;
}
