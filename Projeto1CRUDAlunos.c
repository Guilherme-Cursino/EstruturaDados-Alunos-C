#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Aluno {
    int id;
    char nome[50];
    float nota;
    struct Aluno *proximo;
    struct Aluno *anterior;
} Aluno;

Aluno *cabeca = NULL;
Aluno *cauda = NULL;

void cadastraAluno() {
    Aluno *novo = (Aluno *)malloc(sizeof(Aluno));

    printf("Digite o ID do aluno: ");
    scanf("%d", &novo->id);

    Aluno *atual = cabeca;
    while (atual != NULL) {
        if (atual->id == novo->id) {
            printf("Erro: Ja existe um aluno com esse ID.\n");
            free(novo);
            return;
        }
        atual = atual->proximo;
    }

    printf("Digite o nome do aluno: \n");
    scanf(" %[^\n]", novo->nome);

    float novaNota; 
    printf("Digite a nota do aluno: \n");
    scanf("%f", &novaNota);

    while (novaNota < 0 || novaNota > 10){
        printf("Nota invalida. Digite novamente: ");
        scanf("%f", &novaNota);
    }
    
    novo->nota = novaNota;

    novo->proximo = NULL;
    novo->anterior = cauda;

    if (cauda != NULL) {
        cauda->proximo = novo;
    } else {
        cabeca = novo;
    }

    cauda = novo;

    printf("Aluno cadastrado com sucesso!\n");
}

void buscaAluno(){
    Aluno *aux = cabeca;
    int idBuscado, encontrou=0;

    printf("Digite o ID do aluno:\n");
    scanf("%i", &idBuscado);

    if(aux==NULL){
        printf("Nao ha alunos cadastrados.\n");
    }
    else{
        while(aux != NULL){
            if(idBuscado == aux->id){
                printf("Usuario encontrado:\n");
                printf("ID: %d\n", aux->id);
                printf("Nome: %s\n", aux->nome);
                printf("Nota: %.2f\n", aux->nota);
                encontrou = 1;
                break;
            }else{
                aux = aux->proximo;
                }
        }
        if(encontrou==0){
            printf("Usuario nao encontrado\n");
        }
    }
}

void removeAluno(){
        if (cabeca == NULL) {
            printf("Nao ha alunos cadastrados.\n");
            return;
        }
    
        int idBuscado;
        printf("Digite o ID do aluno a ser removido: ");
        scanf("%d", &idBuscado);
    
        Aluno *atual = cabeca;
    
        while (atual != NULL) {
            if (atual->id == idBuscado) {
                if (atual->anterior != NULL) {
                    atual->anterior->proximo = atual->proximo;
                } else {
                    cabeca = atual->proximo;
                }
    
                if (atual->proximo != NULL) {
                    atual->proximo->anterior = atual->anterior;
                } else {
                    cauda = atual->anterior;
                }
    
                free(atual);
                printf("Aluno removido com sucesso.\n");
                return;
            }
            atual = atual->proximo;
        }
    
        printf("Aluno com ID %d nao encontrado.\n", idBuscado);
}

void editaAluno(){

    int idBuscado;
    Aluno *atual = cabeca;

    printf("Digite o ID do aluno a ser editado: ");
    scanf("%d", &idBuscado);

    while (atual != NULL) {
        if (atual->id == idBuscado) { 
            printf("Digite o novo nome do aluno: ");
            scanf(" %[^\n]", atual->nome);

            printf("Digite a nova nota do aluno: ");
            scanf("%f", &atual->nota);

            printf("Aluno editado.\n");
            return;
        }
        atual = atual->proximo;
    }

    printf("Usuario nao encontrado\n");
}

void mostraTodosAlunos(){

     Aluno *atual = cabeca;
    if (atual == NULL) {
        printf("Nao ha alunos cadastrados.\n");
        return;
    }

    while (atual != NULL) {
        printf("ID: %d, Nome: %s, Nota: %.2f\n", atual->id, atual->nome, atual->nota);
        atual = atual->proximo;
    }
}

void mostraEstatisticas(){

    Aluno *atual = cabeca;
    if (atual == NULL) {
        printf("Nao ha alunos cadastrados.\n");
        return;
    }

    float maiorNota = atual->nota;
    float menorNota = atual->nota;
    float soma = 0;
    int cont = 0;

    while (atual != NULL) {
        if (atual->nota > maiorNota) {
            maiorNota = atual->nota;
        }
        if (atual->nota < menorNota) {
            menorNota = atual->nota;
        }
        soma += atual->nota;
        cont++;
        atual = atual->proximo;
    }

    float media = soma / cont;

    printf("Maior nota: %.2f\n", maiorNota);
    printf("Menor nota: %.2f\n", menorNota);
    printf("Media das notas: %.2f\n", media);

}

int main() {

    int opcao;

    do
    {
        printf("---------------------\n");
        printf("MENU\n");
        printf("1. Cadastrar aluno\n");
        printf("2. Remover aluno\n");
        printf("3. Buscar aluno pelo ID\n");
        printf("4. Editar aluno\n");
        printf("5. Mostrar todos os alunos\n");
        printf("6. Mostrar estatisticas\n");
        printf("0. Sair\n");
        printf("Selecione a operacao que deseja realizar: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1: 
            system("cls");
            cadastraAluno();
            break;

        case 2:
            system("cls");
            removeAluno();
            break;

        case 3:
            system("cls");
            buscaAluno();
            break;
        
        case 4:
            system("cls");
            editaAluno();
            break;

        case 5:
            system("cls");    
            mostraTodosAlunos();
            break;

        case 6:
            system("cls");
            mostraEstatisticas();
            break;

        default:
            break;
        }

    } while (opcao != 0);
}
