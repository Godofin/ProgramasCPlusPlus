/* Pilha segue a lógica LIFO(Last In, First Out) que significa
"O último a entrar, é o primeiro a sair"
E também pode-se dizer que a estrutura de Pilha segue a lógica FILO(First In, Last Out)
"O primeiro a entrar, é o último a sair" */
// pilha = stack
typedef int TipoItem;
const int max_itens = 100;

class pilha{
    private:
    int tamanho;
    TipoItem* estrutura;

    public:
    pilha(); //Construtora //stack
    ~pilha(); //Destrutora //~stack
    bool estaCheia(); //Verifica se a pilha está cheia //is full
    bool estaVazia(); //Verifica se a pilha está vazia //isempty
    void inserir(TipoItem item); //push
    TipoItem remover(); //pop
    void imprimir(); //print
    int qualTamanho(); //lenght
};