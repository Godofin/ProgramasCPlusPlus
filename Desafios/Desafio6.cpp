/*Crie um Algoritmo em C++, em que o usuário informa os gastos com alimentação de 5 famílias,
calcula a média de gastos e diz de cada família, se seu gastou é abaixo da média, acima da média ou na média.*/

#include <iostream>

using namespace std;

int main(){
    float gastoFamilia[5];
    float mediaGastos=0;
    for(int i=0; i<5; i++){
        cout << "Informe o gasto da familia " << i+1 << endl;
        cin >> gastoFamilia[i];
        //Somando vetor no laço
        mediaGastos+=gastoFamilia[i];
    }

    for (int i = 0; i < 5; i++){
        if(gastoFamilia[i] < mediaGastos){
            cout << "A familia " << i+1 << " tem gastos abaixo da media\n";
        }else if(gastoFamilia[i] == mediaGastos){
            cout << "A familia " << i+1 << " esta na media\n";
        }else{
            cout <<  "A familia " << i+1 << " tem gastos acima da media\n";
        }
    }
       
    mediaGastos/=5;
    cout << "Media de gastos igual: " << mediaGastos << endl;

    return 0;
}
