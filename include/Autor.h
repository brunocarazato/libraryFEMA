#ifndef AUTOR_H
#define AUTOR_H

#include <vector>
#include <string>

#include "Livro.h"

using namespace std;

class Livro;

class Autor
{

    private:
        string nome;
        string nacionalidade;
        vector <Livro> livros;
    public:
        Autor(string nome_);
        Livro &getLivro(int index);
        string getNome();
        string getNacionalidade();
        void setNome(string nome_);
        void setNacionalidaded(string nacionalidade_);
        void adicionarLivro(Livro &livro);
        void listarLivros();
};

#endif // AUTOR_H
