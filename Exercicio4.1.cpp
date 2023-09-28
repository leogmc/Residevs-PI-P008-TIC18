#include <iostream>

using namespace std;

#define MAX 10

int main(void) {
    char random, vetChar1[MAX][MAX];

    cout << "\n################## Original ##################\n";

    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            random = 'a' + rand() % ('z' - 'a');

            vetChar1[i][j] = random;
            cout << vetChar1[i][j];
        }

        cout << endl;
    }

    cout << endl;

    cout << "\n########## Primeria letra maiúscula ##########\n";
    
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            if (j == 0)
            {
                vetChar1[i][j] = toupper(vetChar1[i][j]);
            }

            cout << vetChar1[i][j];
        }

        cout << endl;
    }

    cout << endl;
    return 0; 
}