# Sistema de Gerenciamento de Alunos

Um sistema de gerenciamento de alunos implementado em C utilizando estrutura de dados de **lista duplamente encadeada**. Este projeto demonstra operações fundamentais de estrutura de dados, incluindo inserção, busca, edição, remoção e análise estatística.

## 📋 Sobre o Projeto

Este projeto foi desenvolvido para fortalecer conhecimentos em estruturas de dados, especificamente listas duplamente encadeadas. O sistema permite gerenciar informações de alunos (ID, nome e nota) através de uma interface de linha de comando interativa.

## ✨ Funcionalidades

O sistema oferece as seguintes operações:

- **Cadastro de Aluno**: Adiciona um novo aluno com ID único, nome e nota (0-10)
- **Busca de Aluno**: Localiza e exibe informações de um aluno específico pelo ID
- **Edição de Aluno**: Permite modificar o nome e a nota de um aluno existente
- **Listagem de Alunos**: Exibe todos os alunos cadastrados no sistema
- **Estatísticas**: Calcula e mostra a maior nota, menor nota e média da turma
- **Remoção de Aluno**: Remove um aluno do sistema pelo ID

## 🔧 Estrutura de Dados

O projeto utiliza uma **lista duplamente encadeada** com as seguintes características:

```c
typedef struct Aluno {
    int id;
    char nome[50];
    float nota;
    struct Aluno *proximo;
    struct Aluno *anterior;
} Aluno;
```

A lista mantém ponteiros para o início (cabeça) e fim (cauda), permitindo navegação bidirecional eficiente.

## 📦 Requisitos

- **Compilador C**: GCC ou qualquer compilador compatível com C padrão
- **Sistema Operacional**: Linux, macOS ou Windows
- **Bibliotecas**: stdio.h, stdlib.h, string.h (bibliotecas padrão do C)

## 🚀 Compilação e Execução

### Linux / macOS

```bash
# Compilar o programa
gcc ListaEncadeadaAlunos.c -o alunos

# Executar
./alunos
```

### Windows

```bash
# Compilar o programa
gcc ListaEncadeadaAlunos.c -o alunos.exe

# Executar
alunos.exe
```

## 💻 Como Usar

Ao executar o programa, você verá um menu interativo:

```
---------------------
MENU
1. Cadastrar aluno
2. Remover aluno
3. Buscar aluno pelo ID
4. Editar aluno
5. Mostrar todos os alunos
6. Mostrar estatisticas
0. Sair
```

### Exemplo de Uso

1. **Cadastrar um aluno**:
   - Selecione a opção 1
   - Digite um ID único (número inteiro)
   - Digite o nome do aluno
   - Digite a nota (entre 0 e 10)

2. **Buscar um aluno**:
   - Selecione a opção 3
   - Digite o ID do aluno que deseja buscar

3. **Ver estatísticas**:
   - Selecione a opção 6
   - O sistema exibirá maior nota, menor nota e média

## 🛡️ Tratamento de Erros

O sistema implementa validações para garantir a integridade dos dados:

- **ID Duplicado**: Não permite cadastrar alunos com IDs já existentes
- **Nota Inválida**: Aceita apenas notas entre 0 e 10
- **Aluno Não Encontrado**: Informa quando um ID buscado não existe
- **Lista Vazia**: Notifica quando não há alunos cadastrados para operações que requerem dados

## 📁 Estrutura do Projeto

```
EstruturaDados-Alunos-C/
│
├── ListaEncadeadaAlunos.c    # Código fonte principal
├── README.md                  # Documentação do projeto
└── output/                    # Diretório para arquivos compilados
```

## 🎯 Conceitos Aplicados

- Lista duplamente encadeada
- Alocação dinâmica de memória
- Ponteiros em C
- Estruturas (structs)
- Manipulação de strings
- Interface de linha de comando (CLI)
- Validação de dados

## 📝 Notas Técnicas

- O programa utiliza `system("cls")` para limpar a tela, que funciona em Windows. Em sistemas Unix/Linux, substitua por `system("clear")`
- A memória é alocada dinamicamente usando `malloc()` e liberada com `free()`
- O sistema mantém os dados apenas em memória durante a execução (não há persistência em arquivo)

## 👤 Autor

**Guilherme Cursino**

Este projeto faz parte dos meus estudos em estruturas de dados e algoritmos.

## 📄 Licença

Este projeto é de código aberto e está disponível para fins educacionais.

---

⭐ Se este projeto foi útil para você, considere dar uma estrela no repositório!
