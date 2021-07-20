#include <iostream>
#include <cstddef>

using namespace std;

int main(){
    //variavel
    int var1;
    //ponteiro
    int* pont1;

    var1 = 5; 
    //Ponteiro1 armazena a variável1
    pont1 = &var1;

    cout << "Valor da variável atraves do seu nome: " << var1 << endl;
    cout << "Endereco armazenado no ponteiro: " << pont1 << endl;
    cout << "Valor da variavel atraves do ponteiro: " <<  *pont1 << endl;

    int var2;

    /*var2 = var1;
    var2 = *pont1;
    cout << var2;*/

    var2 = 50;
    /*pont1 = &var2;
    cout << "\nApontando pra outra variavel: " <<*pont1;*/

    //Ponteiro sendo nulo
    /*int* pont2;
    pont2 = NULL;
    cout << *pont2;*/

    int* pont3 = new int;
    *pont3 = 35;
    //cout << *pont3;

    //Fazendo um ponteiro apontar para outro ponteiro
    //Explicacao:  o *pont3 acaba se tornando o valor 5, pois aponta para o valor de *pont1
    //*pont3 = *pont1;

    //Explicação: o pont3 vai virar o mesmo endereço do pont1,
    //já o valor 35 que era apontado pelo pont1 acaba tendo vazamento de memoria(nao conseguimos acessar)
    //com o delete, o vazamento de memória não ocorre mais
    delete pont3;
    pont3 = pont1;
    cout << "\n" << *pont3;

    return 0;
}