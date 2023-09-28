#include <iostream>
#include <iomanip>

using namespace std;

#define MAX 15

int main(void) {
    float notas1, notas2;
    float media[MAX];
    float avaliacao1[MAX], avaliacao2[MAX];

    cout << "------------------------------------------------------------------------------";
    cout << "\n################################ Avaliação 1 ################################\n";
    cout << "------------------------------------------------------------------------------\n";
    
    for (int i = 0; i < MAX; i++)
    {
        notas1 = ((float) rand() / RAND_MAX) * 10;

        if (notas1 < 0)
        {
            avaliacao1[i] = 0;
        }
        else
        {
            avaliacao1[i] = notas1;
        }

        cout << fixed << setprecision(2);
        cout << "Aluno" << i+1 << ": "<< avaliacao2[i] << endl;
    }

    cout << "------------------------------------------------------------------------------";
    cout << "\n################################ Avaliação 2 ################################\n";
    cout << "------------------------------------------------------------------------------\n";

    for (int i = 0; i < MAX; i++)
    {
        notas2 = ((float) rand() / RAND_MAX) * 10;

        if (notas2 < 0)
        {
            avaliacao2[i] = 0;
        }
        else
        {
            avaliacao2[i] = notas2;
        }

        cout << fixed << setprecision(2);
        cout << "Aluno" << i+1 << ": "<< avaliacao2[i] << endl;
    }

    cout << "------------------------------------------------------------------------------";
    cout << "\n################################# Comparação #################################\n";
    cout << "------------------------------------------------------------------------------\n";

    for (int i = 0; i < MAX; i++)
    {
        if (avaliacao1[i] > avaliacao2[i])
        {
            cout << "Aluno" << i+1 << ": Melhorou a nota\n";
        }
        else if (avaliacao1[i] < avaliacao2[i])
        {
            cout << "Aluno" << i+1 << ": Piorou a nota\n";
        }
        else
        {
            cout << "Aluno" << i+1 << ": Manteve a nota\n";
        }
        
        media[i] = (avaliacao1[i] + avaliacao2[i]) / 2;
    }

    cout << "------------------------------------------------------------------------------";
    cout << "\n################################### Média ###################################\n";
    cout << "------------------------------------------------------------------------------\n";

    for (int i = 0; i < MAX; i++)
    {
        cout << fixed << setprecision(2);
        cout << "Aluno" << i+1 << ": "<< media[i] << endl;
    }
    
    cout << endl;
    return 0; 
}