#include <iostream>

using namespace std;

#define MAX1 640
#define MAX2 480
#define MAX3 255

//Não consegui entender

int main(void) {
    int random, rgb[MAX1][MAX2], vet[MAX3];
    int count;

    cout << "\nNúmeros de aleatórios:\n\n";

    for (int i = 0; i < MAX1; i++)
    {
        for (int j = 0; j < MAX2; j++)
        {
            random = rand() % 256;
            //random = rand() % 10;
            rgb[i][j] = random;
        }
    }

    cout << "Número de repetições:\n\n";
    
    for (int i = 0; i < MAX1; i++)
    {
        for (int j = 0; j < MAX2; j++)
        {
            cout << rgb[i][j] << "\t";
        }

        cout << endl;
    }

    cout << endl;

    for (int x = 0; x < MAX3; x++)
    {
        count = 0;
        for (int i = 0; i < MAX1; i++)
        {
            for (int j = 0; j < MAX2; j++)
            {
                //cout << "\nrgb[ " << i << " ][ " << j << " ]" << " = " << rgb[i][j] << endl;
                //cout << "x = " << x << endl;
                //cout << "count antes: " << count << endl;

                if (rgb[i][j] == x)
                {
                    count++;
                }

                //cout << "count depois: " << count << endl;
                
            }
        }

        vet[x] = count;
        cout << "\nNúmero " << x << ": " << vet[x] << " vezes\n";
    }

    cout << endl;
    return 0; 
}