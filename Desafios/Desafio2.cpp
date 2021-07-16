/*Crie um Algoritmo em C++, em que o usuário informa as notas de três provas de um determinado
aluno e também a média de nota da turma toda. O Algoritmo deve calcular a média deste aluno e
informar se sua nota é acima da média, abaixo da média ou está na média.*/

#include <iostream>

using namespace std;

int main(){
    float n1, n2, n3, media, mediaAluno;

    cout << "Informe a nota 1\n" << endl;
    cin >> n1;
    cout << "Informe a nota 2\n" << endl;
    cin >> n2;
    cout << "Informe a nota 3\n" << endl;
    cin >> n3;
    cout << "Informe a media da sala\n" << endl;
    cin >> media;

    mediaAluno = (n1+n2+n3)/3;

    if(mediaAluno < media){
        cout << "A media do aluno estah menor que a media da sala.\n";
    } else if(mediaAluno == media){
        cout << "O aluno está na media.\n";
    }else{
        cout <<  "O aluno estah acima da media geral.";
    }
    return 0;
}