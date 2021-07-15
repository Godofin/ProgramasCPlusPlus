//Implementando controladores de if e else
#include <iostream>

using namespace std;

int main(){
    float nota1, nota2;
    cout << "Informe a nota 1\n";
    cin >> nota1;
    cout << "Informe a nota 2\n";
    cin >> nota2;
    float media = (nota1+nota2)/2;

    //if simples
    /*if(media >= 5){
        cout<< "Aluno aprovado";
    }*/

    //If e Else
    /*if(media >= 5){
        cout << "Aluno aprovado com media: " << media << endl;
    }else{
        cout << "Aluno reprovado com media: " << media << endl;
    }*/

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
    

    return 0;
}