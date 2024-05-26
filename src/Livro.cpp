#include "Livro.h"

Livro::Livro(string titulo_, string ISBN_, int ano_, Autor &autor_): titulo(titulo_), ISBN(ISBN_), ano(ano_), autor(autor_){
    this->autor.adicionarLivro(*this); //no próprio construtor do Livro, eu adiciono aquele livro ao respectivo autor
}

void Livro::listarDados(){
    cout << "Título: " << this->titulo << endl;
    cout << "ISBN: " << this->ISBN << endl;
    cout << "Autor: " << this->autor.getNome() << endl;
    cout << "Ano de Publicação: " << this->ano << endl << endl;
}

string Livro::getTitulo(){
    return this->titulo;
}

string Livro::getISBN(){
    return this->ISBN;
}

int Livro::getAno(){
    return this->ano;
}

Autor& Livro::getAutor(){
    return this->autor;
}

void Livro::setTitulo(string titulo_){
    this->titulo = titulo_;
}

void Livro::setISBN(string ISBN_){
    this->ISBN = ISBN_;
}

void Livro::setAno(int ano_){
    this->ano = ano_;
}
