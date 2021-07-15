//Usando operadores lógicos
//Operadores lógicos: E = &&, Ou = ||, Não = ! 
#include <iostream>

using namespace std;

int main(){
    float nota1, nota2;
    cout << "Informe a nota 1\n";
    cin >> nota1;
    cout << "Informe a nota 2\n";
    cin >> nota2;
    float media = (nota1+nota2)/2;

    //If com else if e else
    if(media < 2.5 ){
        cout << "Nota final I";
    }else if (media < 5){
        cout << "Nota final R";
    }else if(media < 7.5){
        cout << "Nota final B";
    }else {
        cout << "A nota fianl é MBz\n Parabens!!";
    }
    
    float freq;

    cout << "\nQual eh a frequencia do aluno?\n";
    cin >> freq;

    /*if(media <= 5 && freq <= 75){
        cout<< "Aluno aprovado!";
    }else{
        cout << "Aluno reprovado!";
    }*/

    /*if(media < 5 || freq < 75){
        cout << "Aluno reprovado";
    }else{
        cout << "Aluno aprovado";
    }*/

    //operador ternário
    (media >=5) ? cout << "Aprovado" : cout << "Reprovado";
    
    return 0;
}