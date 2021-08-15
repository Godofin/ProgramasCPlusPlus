/* Pilha segue a lógica LIFO(Last In, First Out) que significa
"O último a entrar, é o primeiro a sair"
E também pode-se dizer que a estrutura de Pilha segue a lógica FILO(First In, Last Out)
"O primeiro a entrar, é o último a sair" */

#include <iostream>
#include "1-Pilhas2.h"

using namespace std;

    pilha::pilha(){
        tamanho = 0;
        estrutura = new TipoItem[max_itens];

    } //Construtora //stack

    pilha::~pilha(){
        delete [] estrutura;
    } //Destrutora //~stack
    
    bool pilha::estaCheia(){
        return(tamanho == max_itens);
    } //Verifica se a pilha está cheia //is full

    bool pilha::estaVazia(){
        return(tamanho == 0);
    } //Verifica se a pilha está vazia //isempty

    void pilha::inserir(TipoItem item){
        if(estaCheia()){
            cout << "A pilha esta cheia\n";
            cout << "Nao eh possivel inserir este elemento\n";
        }else{
            estrutura[tamanho] = item;
            tamanho++;
        }
    } //push

    TipoItem pilha::remover(){
        if(estaVazia()){
            cout << "A pilha esta vazia\n";
            cout << "Nao tem elemento para ser removido\n";
            return 0;
        }else{
            tamanho--;
            return estrutura[tamanho-1];
        }
    } //pop

    void pilha::imprimir(){
        cout << "Pilha: [ ";
        for(int i=0; i<tamanho;i++){
            cout << estrutura[i] << " ";
        }
        cout << "]\n";
    } //print

    int pilha::qualTamanho(){
        return tamanho;
    } //lenght