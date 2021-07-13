//Aprendendo Funções no C++
//tipo de saída da funcao // nome da funcao // argumentos da funcao
//Void quando não tem saída = sem saída = sem return
#include <iostream>

using namespace std;

#define pi 3.14;

void inscrever(){
    cout << "Se inscreva no canal do Nostalgia" << endl;
}

int somar(int x, int y){
    int soma;
    soma = x+y;
    return soma;
}

int main(){

    //inscrever();
    int s = somar(5,5);
    cout << "A soma eh: " << s << endl;
    cout << pi;
    return 0;
}
