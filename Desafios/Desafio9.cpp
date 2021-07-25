/*Crie um Algoritmo em C++ utilizando apenas ponteiros, em que o usuário informa a idade de duas
pessoas, e o Algoritmo informa a média destas duas idades.*/

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int* idade1 = new int;
    int* idade2 = new int;
    cout << "Informe a idade da primeira pessoa: " << endl;
    cin >> *idade1;
    cout << "Informe a idade da segunda pessoa: " << endl;
    cin >> *idade2;

    float* media = new float;
    *media = (*idade1+*idade2)/2;
    cout << "A media das idades eh: " << *media << endl;
    
    return 0;
}