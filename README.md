# Como forma de estudo de Estrutura de Dados, este projeto é a resolução do seguinte desafio: 

Utilizando a linguagem C, criar uma lista duplamente encadeada que permita as operações abaixo.

## Operações Implementadas

* Cadastro de um novo aluno com as informações de nome, nota e identificador (ID).
* Exibição de aluno existente a partir de determinado ID. 
* Edição de aluno após sua busca. 
* Exibição de todos os alunos da lista. 
* Exibição de estatísticas para a lista de alunos (como maior nota, menor nota e média das notas dos alunos). 
* Remoção de um aluno pelo ID.

## Interação com o usuário:

O sistema possui um menu de interações por linha de comando que contempla as operações descritas acima. Ao final de cada operação, o menu é apresentado novamente. A aplicação é encerrada quando o usuário escolhe a opção de sair.

## Tratamento de Exceções

O projeto trata as seguintes exceções:
Para as funcionalidades de exibição, edição e remoção, caso seja informado o ID de um aluno que não exista na lista, a operação não seguirá e será mostrado “Usuário não encontrado”. 
