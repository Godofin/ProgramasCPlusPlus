#include <iostream>

using namespace std;

int main(){
    //Alocação estatica
    //Declarando vetores 1
    /*int vet[4];
    vet[0] = 5;
    vet[1] = 10;*/

    //Declarando vetores 2
    //int vet[4] = {5,10};

    //cout << vet[1] << endl;

    /*for(int i=0; i<4; i++){
        cout << vet[i] << endl;
    }

    int x = sizeof(vet);
    cout << x << endl;
    */
   //alocação estatica

   //Alocação dinamica
    int tamanho;
    cout << "Digite o tamanho do vetor!" << endl;
    cin >> tamanho;
    int* vetor = new int[tamanho];
    
    for(int i=0; i<tamanho; i++){
        cout << "Digite o elemento " << i+1 << " do vetor" << endl;
        cin >> vetor[i];
    }

    for(int i=0; i<tamanho; i++){
        cout << vetor[i] << " "; 
    }
    cout << endl;
    return 0;
}