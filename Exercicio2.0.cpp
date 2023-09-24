#include <iostream>

using namespace std;

#define MAX1 100
#define MAX2 20

int main(void) {
    int random, count, maior = 0;
    int vet1[MAX1], vet2[MAX2];

    cout << "\nNúmeros de aleatórios:\n\n";

    count = 1;
    for (int i = 0; i < MAX1; i++)
    {
        random = 1 + rand() % 20;
        vet1[i] = random;
        cout << vet1[i] << "\t";

        if (count == 10)
        {
            count = 0;
            cout << endl;
        }

        count++;
    }

    cout << endl << endl;

    cout << "Número de repetições:\n\n";
    for (int i = 1; i <= MAX2; i++)
    {
        count = 0;
        for (int j = 0; j < MAX1; j++)
        {
            if (vet1[j] == i)
            {
                count++;
            }
        }
        
        vet2[i] = count;
        cout << "Número " << i << ": " << vet2[i] << " vezes\n";

        if (vet2[i] > maior)
        {
            maior = vet2[i];
        }
    }
    
    cout << "\nNúmero(s) repetido(s) mais vezes:\n";
    for (int i = 0; i < MAX2; i++)
    {
        if (vet2[i] == maior)
        {
            cout << "\nNúmero " << i << ": " << vet2[i] << " vezes";
        }
    }
    
    cout << endl << endl;
    return 0; 
}