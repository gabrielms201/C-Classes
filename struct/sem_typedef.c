#include <stdio.h>

// struct [Nome] {
// tipo nome_atributo;    
// };

struct Pessoa
{
    double Altura;
    int Idade;
};
void imprime_pessoa(struct Pessoa pessoa)
{
    printf("Altura: %.2lf, Idade: %d\n", pessoa.Altura, pessoa.Idade);
}
int main()
{
    // Quero criar uma pessoa com altura 2.1, e idade 21
    // como?
    // struct TIPO NOME_VARIAVEL;
    struct Pessoa pessoa1;
    pessoa1.Altura = 2.1;
    pessoa1.Idade = 21;
    printf("Pessoa 1: ");
    imprime_pessoa(pessoa1);
    // Muito trabalhoso
    //                      Altura, Idade
    struct Pessoa pessoa2 = {2.1,   21};


    // Array de pessoas
    struct Pessoa arr[] = { {2.2, 22}, {2.3, 25}};
    int i;
    for (i = 0; i < 2; i++)
    {
        struct Pessoa p = arr[i];
        imprime_pessoa(p);
    }

}