#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(nullptr));
    double registros_de_temperatutas[250];
    double maxima_temperatura = 0;//utilizei uma tempertatura minima para encontrar o maior
    double minima_temperatura =10;//utilizei uma temperatura superior as pesquisadas para utilizar apenas um for
    double media_temperatura = 0;
    /*Mais é necessario tomar cuidado pos a detender das pesquisas 
    os resultados de temperatura
    podem ser maior que 10 e isso opoderia afetar o algoritmo. 
    */

    for (int i = 0; i < 250; i++)
    {
        registros_de_temperatutas[i] = 1 + 30.0*(rand()%100)/3000.0;
        cout << registros_de_temperatutas[i] <<endl;
        if (maxima_temperatura < registros_de_temperatutas[i])
            maxima_temperatura = registros_de_temperatutas[i];
        
        
        if (minima_temperatura > registros_de_temperatutas[i])
            minima_temperatura = registros_de_temperatutas[i];
        
        media_temperatura += registros_de_temperatutas[i];
    }

    cout << "Maximo: " << maxima_temperatura << endl;
    cout << "Minima: " << minima_temperatura << endl;
    cout << "Média: " << media_temperatura/250 << endl;
    
    for (int i = 0; i < 250; i++)
    {
        if (registros_de_temperatutas[i] > media_temperatura)
            registros_de_temperatutas[i] += 1;
        
        if (registros_de_temperatutas[i] < media_temperatura)
            registros_de_temperatutas[i] -= 1;
        cout << "Estimativa em 1h futura: " << registros_de_temperatutas[i] << endl;
    }
    

    return 0;
}
