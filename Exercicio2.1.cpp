#include <iostream>
#include <cmath>

using namespace std;

#define MAX1 10

int main(void) {
    float random, vet1[MAX1];
    float maxima = 0, minima = 50;
    float soma = 0, media = 0;

    cout << "------------------------------------------------------------------------------";
    cout << "\n################################ Temperaturas ################################\n";
    cout << "------------------------------------------------------------------------------\n";

    for (int i = 0; i < MAX1; i++)
    {
        random = 1 + 30.0 * (rand() % 100) / 3000.0;
        vet1[i] = random;
        
        if (vet1[i] > maxima)
        {
            maxima = vet1[i];
        }
        else if (vet1[i] < minima)
        {
            minima = vet1[i];
        }
        
        soma += vet1[i];
    }

    media = soma / MAX1;

    cout << "\nMédia: " << media << endl;

    cout << "\nMáxima: " << maxima << endl;

    cout << "\nMínima: "<< minima << endl;

    cout << "\n------------------------------------------------------------------------------";
    cout << "\n######################## Temperaturas Acima da Média ########################\n";
    cout << "------------------------------------------------------------------------------\n\n";

    for (int i = 0; i < MAX1; i++)
    {
        if (vet1[i] > media)
        {
            cout << vet1[i] << "\t";
            vet1[i]++;
        }
    }

    cout << "\n\n------------------------------------------------------------------------------";
    cout << "\n######################## Temperaturas Abaixo da Média #######################\n";
    cout << "------------------------------------------------------------------------------\n\n";

    for (int i = 0; i < MAX1; i++)
    {
        if (vet1[i] < media)
        {
            cout << vet1[i] << "\t";
            vet1[i]--;
        }
    }
    
    cout << "\n\n------------------------------------------------------------------------------";
    cout << "\n########################## Temperaturas Atualizadas ##########################\n";
    cout << "------------------------------------------------------------------------------\n\n";

    for (int i = 0; i < MAX1; i++)
    {
        cout << vet1[i] << "\t";
    }
    
    cout << endl << endl;
    return 0; 
}