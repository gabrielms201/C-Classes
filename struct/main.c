#include <stdio.h>


// O que caralhos é um typedef?
// typedef TIPO NOME_QUE_QUERO_DAR
typedef int INTEIRO;

typedef struct
{
    char* Nome;
    int Idade;
} Pessoa;

// O que caralhos é um const?
void imprime_pessoa(const Pessoa* pessoa) //  pessoa is a pointer which points to a Pessoa that is const
{
    printf("Nome: %s, Idade: %d\n", pessoa->Nome, pessoa->Idade);
}
void imprime_pessoa_const(const Pessoa* const pessoa) //  pessoa is a const  pointer which points to a Pessoa that is const
{
    printf("Nome: %s, Idade: %d\n", pessoa->Nome, pessoa->Idade);
}
void altera_nome(Pessoa* const p) // p is a const pointer to a pessoa
{
    (*p).Nome = "ANTEDEGUEMON";
    // ou:
    p->Nome = "Antedeguemon";
}

Pessoa cria_pessoa(char* nome, int idade)
{
    Pessoa p = {nome, idade};
    return p;
}

int main()
{
    // funciona assim:
    INTEIRO valor = 30;
    printf("Meu INTEIRO tem valor: %d\n", valor);
    Pessoa p1 = {"Ricardo", 21};
    p1 = cria_pessoa("zezinho", 30);
    //altera_nome(&p1);
    imprime_pessoa(&p1);
}

