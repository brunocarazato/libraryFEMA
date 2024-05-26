#include "Biblioteca.h"

Biblioteca::Biblioteca(string nome_, string localizacao_): nome(nome_), localizacao(localizacao_){
    this->inicioLista = NULL;
}

Biblioteca::~Biblioteca(){
    livroLista* atual = this->inicioLista;
    livroLista* prox = NULL;

    while (atual != NULL) {
        prox = atual->prox;
        delete atual->livro;
        delete atual;
        atual = prox;
    }
}


void Biblioteca::addLivro(string titulo_, string ISBN_, int ano_, Autor &autor_ ){

    Livro *novoLivro = new Livro(titulo_, ISBN_, ano_, autor_);

    struct livroLista *novoNo;
    novoNo = new livroLista;

    novoNo->livro = novoLivro;

    if(this->inicioLista == NULL){
         this->inicioLista = novoNo;
    }else{
         this->inicioLista->prox = novoNo;
    }
}

void Biblioteca::listarLivros(){
    cout << endl << " === Listando os livros disponíveis na " << this->nome << " ===" << endl;
    struct livroLista *aux;
    aux = this->inicioLista;
    while(aux != NULL){
        aux->livro->listarDados();
        aux = aux->prox;
    }
}
