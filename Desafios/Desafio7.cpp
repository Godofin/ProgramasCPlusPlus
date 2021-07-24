/*Crie um Algoritmo em C++, em que o usuário informa a dimensão de uma matriz, e os elementos
de duas matrizes (ambas com a mesma dimensão) e 
o Algoritmo mostra a soma entre estas duas matrizes.*/

#include <iostream>

using namespace std;

int main(){
    int linha, coluna;
    cout << "Digite o tamanho da linha" << endl;
    cin >> linha;
    cout << "Digite o tamanho da coluna" << endl;
    cin >> coluna;

    float matriz1[linha][coluna], matriz2[linha][coluna];

    cout << "Digite abaixo os elementos da matriz 1:\n";
    for(int i=0; i<linha;i++){
        for(int j=0; j<coluna; j++){
            cout << "Digite o elemento da linha " << i+1 << " coluna " << j+1 << endl;
            cin >> matriz1[i][j];
        }
    }

    cout << "Digite abaixo os elementos da matriz 2:\n";
    for(int i=0; i<linha;i++){
        for(int j=0; j<coluna; j++){
            cout << "Digite o elemento da linha " << i+1 << " coluna " << j+1 << endl;
            cin >> matriz2[i][j];
        }
    }
    float matrizsoma[linha][coluna];
    for(int i=0;i<linha;i++){
        for(int j=0;j<coluna;j++){
            matrizsoma[i][j] = matriz1[i][j]+matriz2[i][j];
        }
    }

    cout << "\nA soma entre estas duas matrizes e: \n";
    for(int i=0;i<linha;i++){
        for(int j=0;j<coluna;j++){
            cout << matrizsoma[i][j]<< " ";
        }
        cout << endl;
    }
    
    return 0;
}