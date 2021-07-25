/*Crie um Algoritmo em C++, que tenha uma função recebe 
dois ponteiros e troca o valor de referência entre os dois.*/

#include <iostream>

using namespace std;

void troca(int* &pont1, int* &pont2){
    int temp;
    temp = *pont1;
    *pont1 = *pont2;
    *pont2 = temp;

}

int main(){
    int* pont1 = new int;
    *pont1 = 5;
    int* pont2 = new int;
    *pont2 = 7;

    cout << "O ponteiro 1 vale: " << *pont1 << " e se aloca no espaco: " << pont1 << endl; 
    cout << "O ponteiro 2 vale: " << *pont2 << " e se aloca no espaco: " << pont2 << endl;

    troca(pont1, pont2);
    cout << "O ponteiro 1 vale: " << *pont1 << " e se aloca no espaco: " << pont1 << endl; 
    cout << "O ponteiro 2 vale: " << *pont2 << " e se aloca no espaco: " << pont2 << endl;

    return 0;
}