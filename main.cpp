#include <iostream>
#include "Autor.h"
#include "Livro.h"
#include "locale.h"
#include "Biblioteca.h"

using namespace std;

int main()
{
    setlocale( LC_ALL, "Portuguese" );
    Autor autor("Bruno");

    Biblioteca bibliotecaAssis("Biblioteca Municipal de Assis", "Praça Dom Antônio José dos Santos - Centro, Assis - SP, 19800-180");

    bibliotecaAssis.addLivro("Game of Thrones", "12NNA", 2008, autor);
    bibliotecaAssis.addLivro("Senhor dos Anéis", "13NNA", 2004, autor);
    bibliotecaAssis.addLivro("Jogos Vorazes", "14NNA", 2000, autor);

    bibliotecaAssis.listarLivros();

    return 0;
}
