/*Em um programa de Moradia Popular, somente pessoas maiores de 21 anos e com renda abaixo de
R$ 1200,00 podem participar.
Crie um Algoritmo em C++, em que o usuário informa sua idade e sua renda, e é informado se ele
pode ou não participar desse programa.*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int idade;
    float renda;

    cout << "Informe a sua idade" << endl;
    cin >> idade;
    cout << "Informa a sua renda" << endl;
    cin >> renda;

    if(idade >= 21 && renda <= 1200){
        cout << "Voce esta apto para participar do nosso programa\nParabens e fique atento a proxima etapa";
    }else{
        cout << "Infelizmente voce nao pode participar de nosso programa!";
    }
    return 0;
}