#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(nullptr));
    double notas1[15];
    double notas2[15];
    double media_prova1_e_prova2[15];

    for (int i = 0; i < 15; i++)
    {
        notas1[i] = 0 + rand() % 11;//primeira avaliação nota 15 alunos
        notas2[i] = 0 + rand() % 11;//segunda avaliação nota 15 alunos
        /*vamos supor que ambos os array estão ordenados onde a nota do primeiro aluno
        está na posição [0] da primeira e segunda avaliação e assim sucessivamente até
        0,1,2,3 ...n-1*/
        if(notas1[i] > notas2[i])
            cout <<endl<<"Aluno ["<< i+1 <<"] Piorou!"<<endl;

        if(notas2[i]> notas1[i])
            cout <<"Aluno ["<< i+1 <<"] Melhorou!"<<endl;
        
        if(notas1[i] == notas2[i]) cout <<"Aluno ["<< i+1 <<"] manteve a nota!"<<endl;
        
        //media por aluno
        media_prova1_e_prova2[i] = (notas1[i] + notas2[i]) /2;
        cout <<"Media: " << media_prova1_e_prova2[i] << endl;
        
        // if(media_prova1_e_prova2[i] >= 7){
        //     cout <<"Aprovado!" << endl << endl;
        // }else if(media_prova1_e_prova2[i] <7){
        //     cout <<"Reprovado!" << endl << endl;
        // }else cout << "Passou raspando!" << endl<< endl;
    }
    
    
}