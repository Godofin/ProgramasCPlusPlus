//Operações matematicas
#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int a = 5, b = 2;

    int soma = a + b;
    cout << "Soma: " << soma << endl;
    //cout << "Soma: " << a+b << endl;

    int sub = a-b;
    cout << "Subtracao: " << sub <<endl;

    int mult = a*b;
    cout << "Multiplicacao: " << mult << endl;

    //Quosciente e o resto
    int quocdiv = a/b;
    cout << "Quociente da divisao: " << quocdiv << endl;

    //Resto
    int restodiv = a%b;
    cout << "Resto da divisao: " << restodiv << endl;

    //Quebrado
    float div = (float)a/(float)b;
    cout << "Divisao: " << div << endl;

    //Potencia
    float pot = pow(a, b);
    cout<< "Potencia: " << pot <<endl;

    //Incremento e decremento
    cout <<  "A antigo: " << a << endl;
    //a = a+1;
    a+=1;
    //a++;
    cout <<  "A antigo: " << a << endl;
    return 0;
}
