/*Crie um Algoritmo em C++, que tenha uma função
que calcula o fatorial de um número inteiro positivo,
informado pelo usuário.*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int fat, i;

    cout << "Informe um numero que deseja calcular o fatorial" << endl;
    cin >> i;

    if(i < 0){
        cout <<  "Não tem fatorial amigao" << endl;
    }else if(i == 0 || i == 1){
        cout <<  "O fatorial de " << i << " eh igual a: 1" << endl;
    }else{
        for(fat=1; i>1; i=i-1){
            fat = fat*i;
        }

        cout << "O resultado do fatorial eh de: " << fat << endl;
    }
    return 0;
}