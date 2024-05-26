#include "Autor.h"

Autor::Autor(string nome_): nome(nome_){}

string Autor::getNome(){
    return this->nome;
}

string Autor::getNacionalidade(){
    return this->nacionalidade;
}

void Autor::setNome(string nome_){
    this->nome = nome_;
}

void Autor::setNacionalidaded(string nacionalidade_){
    this->nacionalidade = nacionalidade_;
}


void Autor::adicionarLivro(Livro &livro){
    this->livros.push_back(livro);
}

void Autor::listarLivros(){
    for (Livro& livro : this->livros) {
        livro.listarDados();
    }
}

Livro& Autor::getLivro(int index){
    return this->livros[index];
}


