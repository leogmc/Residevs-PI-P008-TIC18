#include <iostream>

using namespace std;

#define MAX1 640
#define MAX2 480
#define MAX3 255

int main(void) {
    int random, rgb[MAX1][MAX2], vet[MAX3];
    int count;

    for (int i = 0; i < MAX1; i++)
    {
        for (int j = 0; j < MAX2; j++)
        {
            random = rand() % 256;
            rgb[i][j] = random;
        }
    }

    cout << "\n#################### Histograma ####################\n\n";

    for (int x = 0; x < MAX3; x++)
    {
        count = 0;
        for (int i = 0; i < MAX1; i++)
        {
            for (int j = 0; j < MAX2; j++)
            {
                if (rgb[i][j] == x)
                {
                    count++;
                }
            }
        }

        vet[x] = count;
        cout << "\Frequência " << x << ": " << vet[x] << " pixels\n";
    }

    cout << endl;
    return 0; 
}