#include <iostream>

using namespace std;

/* class propaganda{
    private:

    public:
    //usa void quando não se tem retorno na função
    void inscrever(){
        cout << "Se inscreva no canal \n";
    }

    void curta(){
        cout << "Nao se esqueca de curtir o video\n";
    }
}; */

class carro{
    private:

    int ano;
    float valor, km;

    public:

    //Construtor
    carro(int a=0, float v=-1, float k=-1){
        ano = a;
        valor = v;
        km = k;
    }

    //get(obter alguma coisa) e set(indicar, mostrar, setar alguma coisa)
    //Ano
    void setano(int a){
        ano = a;
    }

    int getano(){
        return ano;
    }

    //Valor
    void setvalor(float v){
        valor = v;
    }

    float getvalor(){
        return valor;
    }

    //quilometragem
    float setkm(float k){
        km = k;
    }

    float getkm(){
        return km;
    }
};

int main(){
    /* propaganda canal;
    canal.inscrever();
    canal.curta(); */

    carro celta(1995, 22450, 2000);
    /* celta.setano(1995);
    celta.setvalor(22450);
    celta.setkm(2000); */
    cout << "Celta: \n";
    cout << "Ano: " << celta.getano() << endl;
    cout << "Valor: " << celta.getvalor() << endl;
    cout << "Quilometragem: " << celta.getkm() << endl; 

    carro palio(2005, 10000, 150000);
    /* palio.setano(2005);
    palio.setvalor(1000);
    palio.setkm(150000); */
    cout << "\nPalio: \n";
    cout << "Ano: " << palio.getano() << endl;
    cout << "Valor: " << palio.getvalor() << endl;
    cout << "Quilometragem: " << palio.getkm() << endl;   
    return 0;
}