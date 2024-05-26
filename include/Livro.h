#ifndef LIVRO_H
#define LIVRO_H

#include <iostream>
#include <string>

#include "Autor.h"

using namespace std;

class Autor;

class Livro
{

    private:
        string titulo;
        string ISBN;
        int ano;
        Autor &autor;

    public:
        Livro(string titulo_, string ISBN_, int ano_, Autor &autor_);
        void listarDados();
        string getTitulo();
        string getISBN();
        int getAno();
        Autor& getAutor();
        void setTitulo(string titulo_);
        void setISBN(string ISBN_);
        void setAno(int ano_);
};

#endif // LIVRO_H
