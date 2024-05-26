#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <string>
#include "Livro.h"

//Não deve existir um livro sem uma biblioteca.
//O objeto Todo (biblioteca) tem a responsabilidade exclusiva sobre gerenciar suas partes (livro), criando e destruindo.

struct livroLista{
    Livro *livro;
    struct livroLista *prox;
};

using namespace std;
class Livro;

class Biblioteca
{
    private:
        string nome;
        string localizacao;
        livroLista *inicioLista;

    public:
        Biblioteca(string nome_, string localizacao_);
        ~Biblioteca();
        void addLivro(string titulo_, string ISBN_, int ano_, Autor &autor);
        void listarLivros();

};

#endif // BIBLIOTECA_H
