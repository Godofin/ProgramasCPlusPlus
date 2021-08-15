/* Pilha segue a lógica LIFO(Last In, First Out) que significa
"O último a entrar, é o primeiro a sair"
E também pode-se dizer que a estrutura de Pilha segue a lógica FILO(First In, Last Out)
"O primeiro a entrar, é o último a sair" */

#include <iostream>
#include "1-Pilhas2.h"

using namespace std;

int main(){
    pilha pilha1;
    TipoItem item;
    int opcao;
    cout << "Programa gerador de pilhas: \n";

    do
    {
        cout << "Digite 0 para parar o programa\n";
        cout << "Digite 1 para inserir um elemento\n";
        cout << "Digite 2 para remover um elemento\n";
        cout << "Digite 3 para imprimir a pilha\n";
        cin >> opcao;
        if(opcao = 1){
            cout << "Digite o elemento a ser inserido:\n";
            cin >> item;
            pilha1.inserir(item);
        }else if(opcao = 2){
            item = pilha1.remover();
            cout << "Elemento removido: " << item << endl;
        }else if(opcao = 3){
            pilha1.imprimir();
        }
    } while (opcao != 0);
    

    return 0;
}