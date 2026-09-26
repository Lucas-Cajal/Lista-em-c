# 📚 Lista Encadeada em C (com Nó Cabeça)

Este repositório contém a implementação de uma **Lista Encadeada Simples em C**, utilizando o conceito de **Nó Cabeça (Sentinel Node)**. 

Desenvolvi este projeto para aprofundar meus conhecimentos em Estruturas de Dados, manipulação de ponteiros e alocação dinâmica de memória. O grande diferencial deste código é a função de exibição, que mapeia a memória RAM em tempo real, mostrando os **endereços hexadecimais** de cada nó, simulando um Teste de Mesa.

## 🚀 Funcionalidades

- **`iniciarLista(int nr)`**: Insere um novo elemento no final da lista. Cria o nó cabeça automaticamente de forma segura na primeira execução.
- **`removerElemento(int nr)`**: Busca e remove um elemento específico (seja no início, meio ou fim da lista), religando os ponteiros corretamente e evitando *Memory Leaks* com o uso do `free()`.
- **`exibirLista()`**: Exibe o estado atual da lista, revelando:
  - O valor armazenado (`info`).
  - O endereço de memória do nó atual.
  - O endereço para o qual o ponteiro `prox` está apontando.

## 🧠 Conceitos Aplicados

- **Ponteiros** (Manipulação direta de endereços de memória).
- **Alocação Dinâmica** (`malloc` e `free`).
- **Nó Cabeça (Sentinel Node)**: Técnica que simplifica as lógicas de inserção e remoção, garantindo que a lista nunca seja apontada como estritamente "vazia" (evitando erros de *Segmentation Fault*).
- **Mapeamento Hexadecimal**: Uso de formatação `%p` (ou `%x`) para inspecionar os blocos alocados na *Heap*.

## 💻 Exemplo de Saída no Terminal

Quando o programa é executado, ele exibe um mapa visual da memória. Exemplo:

```text
Elementos da Lista:
1 - |00000000006F1450| - |10|00000000006F1470|
2 - |00000000006F1470| - |20|00000000006F1490|
3 - |00000000006F1490| - |30|0000000000000000|

Elemento 20 removido com sucesso!

Elementos da Lista:
1 - |00000000006F1450| - |10|00000000006F1490|
2 - |00000000006F1490| - |30|0000000000000000|
