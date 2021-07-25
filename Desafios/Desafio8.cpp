/*Crie um Algoritmo em C++, que o usuário informa o
tamanho de um vetor, e seus elementos. O Algoritmo deve imprimir este vetor e logo após,
perguntar ao usuário se ele quer imprimir outro vetor. Utilize o delete após a impressão do vetor.*/

#include <iostream>

using namespace std;

int main(){
    int tamanho, teste;

    do{
        cout << "Digite o tamanho do vetor: " << endl;
        cin >> tamanho;
        float* vetor = new float[tamanho];
        for(int i=0; i<tamanho; i++){
            cout << "Digite o elemento " << i+1 << " deste vetor" << endl;
            cin >> vetor[i];
        }      

        cout << "O vetor inserido eh: \n[ ";
        for(int i=0; i<tamanho; i++){
            cout << vetor[i] << ", ";
        }

        cout << " ]\n";

        cout << "Se deseja inserir outro vetor, digite 1, caso contrário, digite 0";
        cin >> teste;

        delete [] vetor;
    } while (teste != 0);
    
    
    return 0;
}