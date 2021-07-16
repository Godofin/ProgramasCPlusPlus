//Dada a função f(x)=x^2-3x+5
//Crie um Algoritmo em C++, que tenha uma função
//que calcula o valor de , em que é um número
//real informado pelo usuário.

#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int a;
    float funcao;

    cout << "Informe um numero inteiro: " << endl;
    cin >> a;

    funcao =(a*a) - (3*a) + 5;
                 
    cout << "O resultado da funcao eh de: " << funcao << endl;

    return 0;
}
