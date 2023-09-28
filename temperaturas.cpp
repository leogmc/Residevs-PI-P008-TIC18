#include <iostream>
#include <iomanip>
#include <ctime>

#define TAMANHO_ARRAY 250
using namespace std;

int main() {
    srand(time(0));
     /*a. Armazene num array as temperaturas reportadas por 250 estações meteorológicas.*/
    float temperaturas[TAMANHO_ARRAY];
    float min=0.0, max=0.0, soma=0.0, media=0.0;

    for (int i = 0; i < TAMANHO_ARRAY; i++) {
        temperaturas[i] = 10 + 30.0 * (rand() % 100) / 3000.0;//ficaria melhor colocar essa expressão: 10.0 + 30.0 * (rand() % 1000) / 1000.0
    }

    /*b. Determine a temperatura máxima e mínima reportadas;*/
    min = temperaturas[0];
    max = temperaturas[0];
    for (int i = 1; i < TAMANHO_ARRAY; i++) {
        soma += temperaturas[i];

        if (temperaturas[i] < min)
            min = temperaturas[i];

        if (temperaturas[i] > max)
            max = temperaturas[i];
    }
    cout << fixed << setprecision(1); 
    cout << "Temperatura Máxima Reportada: " << max << " graus Celsius" << endl;
    cout << "Temperatura Mínima Reportada: " << min << " graus Celsius" << endl;

    /*c. Determine a temperatura média entre as 250 estações*/
    media = (soma)/TAMANHO_ARRAY;
    cout << "Temperatura Média é: " << media << " graus Celsius" << endl;

   return 0;
}