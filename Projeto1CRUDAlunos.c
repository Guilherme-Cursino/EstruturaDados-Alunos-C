#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
    Aluno *novo = (Aluno *)malloc(sizeof(Aluno));
    printf("Digite o ID do aluno: ");
    scanf("%d", &novo->id);
    // Verificar se o id ja ta cadastrado
    Aluno *atual = cabeca;
    while (atual != NULL) {
        if (atual->id == novo->id) { 
            printf("Erro: Já existe um aluno com esse ID.\n");
            return;
        }
        atual = atual->proximo;
        //aqui ele so vai checar toda a lista manualmente pra ver se o id já ta cadastrado
    }
     
    printf("Digite o nome do aluno: ");
    scanf(" %[^\n]", novo->nome);
    printf("Digite a nota do aluno: ");
    scanf("%f", &novo->nota);
    //pra jogar o novo aluno cadastrado pro início da lista, é preciso que o anterior do novo seja NULL e o proximo seja a cabeca
    novo->anterior = NULL;
    novo->proximo = cabeca;
    //se a cabeca for diferente de NULL (ou seja, se tiver algum aluno já cadastrado) o anterior da cabeca se torna "novo"
    if (cabeca != NULL) cabeca->anterior = novo;
    //e o "novo" se torna cabeca
    cabeca = novo;

    printf("Aluno cadastrado com sucesso!\n");
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
        printf("1. Cadastrar aluno\n");
        printf("2. Remover aluno\n");
        printf("3. Mostrar aluno\n");
        printf("4. Editar aluno\n");
        printf("5. Mostrar todos os alunos\n");
        printf("6. Mostrar estatísticas\n");
        printf("0. Sair\n");
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
