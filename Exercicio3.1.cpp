#include <iostream>

using namespace std;

#define MAX 10

char ordemAlfabetica(char str[MAX]) {
    char aux;

    for (int i = 0; i < MAX; i++)
    {
        for (int j = i; j < MAX; j++)
        {
            if (str[i] > str[j] && str[j] != '\0')
            {
                aux = str[i];
                str[i] = str[j];
                str[j] = aux;
            }
            
        }
        
    }

    return str[MAX];
}

int main(void) {
    char random, vetChar1[MAX], vetChar2[MAX];

    cout << "\n################## Original ##################";

    cout << "\nstring 1 original: ";
    for (int i = 0; i < MAX; i++)
    {
        random = 'a' + rand() % ('z' - 'a');
        vetChar1[i] = random;
        cout << vetChar1[i];
    }

    cout << "\nstring 2 original: ";
    for (int i = 0; i < MAX; i++)
    {
        random = 'a' + rand() % ('z' - 'a');
        vetChar2[i] = random;
        cout << vetChar2[i];
    }

    cout << endl;

    cout << "\n########## Primeria letra maiúscula ##########";

    vetChar1[0] = toupper(vetChar1[0]);
    vetChar2[0] = toupper(vetChar2[0]);
    
    cout << "\nstring 1: ";
    for (int i = 0; i < MAX; i++)
    {
        cout << vetChar1[i];
    }

    cout << "\nstring 2: ";
    for (int i = 0; i < MAX; i++)
    {
        cout << vetChar2[i];
    }

    cout << endl;

    cout << "\n############## Ordem alfabética ##############";

    vetChar1[MAX] = ordemAlfabetica(vetChar1);
    vetChar2[MAX] = ordemAlfabetica(vetChar2);

    cout << "\nstring 1 Ordenado: ";
    for (int i = 0; i < MAX; i++)
    {
        cout << vetChar1[i];
    }

    cout << "\nstring 2 ordenado: ";
    for (int i = 0; i < MAX; i++)
    {
        cout << vetChar2[i];
    }
    
    cout << endl << endl;
    return 0; 
}