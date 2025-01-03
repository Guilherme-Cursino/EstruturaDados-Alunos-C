#include <stdio.h>

typedef struct Aluno
{
    char nome[50];
    int id;
    float nota;
} Aluno;

// typedef struct Aluno Aluno;

void cadastraAluno()
{
}

void removeAluno()
{
}

void mostraAluno()
{
}

void editaAluno()
{
}

void mostraTodosAluno()
{
}

void mostraEstatisticas()
{
}

int main()
{
    int opcao;

    do
    {
        printf("MENU\n");
        printf("O que voce deseja fazer: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1: 
            cadastraAluno();
            break;

        case 2:
            removeAluno();
            break;

        case 3:
            mostraAluno();
            break;
        
        case 4:
            editaAluno();
            break;

        case 5:
            mostraTodosAluno();
            break;

        case 6:
            mostraEstatisticas();

        default:
            break;
        }

    } while (opcao != 0);
}