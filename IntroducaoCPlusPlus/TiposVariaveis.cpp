//Entendendo tipos de variáveis com C++
#include <iostream>

using namespace std;

int main(){

    int inteiro = 5;
    cout << inteiro << endl;
    //printf("%d", inteiro);

    float real = 5.2;
    cout << real << endl;
    //print("%s", real);

    double real2 = 5.2e99;
    cout << real2 << endl;
    //print("%s", real2);

    bool booleano = true;
    cout << booleano << endl;

    char letra = 'b';
    cout << letra << endl;

    string palavra = "bola";
    cout << palavra << endl;

    int idade;
    cout << "Qual a sua idade?" << endl;
    cin >> idade;
    cout << "Sua idade eh de: " << idade << endl;
    return 0;
}
