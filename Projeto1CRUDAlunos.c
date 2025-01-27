#include <stdio.h>

typedef struct Aluno
{
    int id;
    char nome[50];
    float nota;
    Aluno *proximo;
    Aluno *anterior;
} Aluno;

Aluno *cabeca = NULL;
Aluno *cauda = NULL;


// typedef struct Aluno Aluno;

void cadastraAluno(){
}

void removeAluno(){

    //caso seja informado o ID de um aluno que não exista na lista a operação não deverá seguir e deverá ser mostrado “Usuário não encontrado”
}

void mostraAluno(){

    //caso seja informado o ID de um aluno que não exista na lista a operação não deverá seguir e deverá ser mostrado “Usuário não encontrado”
}

void editaAluno(){

    //caso seja informado o ID de um aluno que não exista na lista a operação não deverá seguir e deverá ser mostrado “Usuário não encontrado”
}

void mostraTodosAluno(){
}

void mostraEstatisticas(){
}

int main() {
    int opcao;

    do
    {
        printf("MENU\n");
        printf("Selecione a operacao que deseja fazer: ");
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
            break;

        default:
            break;
        }

    } while (opcao != 0);
}