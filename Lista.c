#include <stdio.h>
#include <stdlib.h>

struct No {
    int info;
    struct No *prox;
};

struct No *inicio = NULL;
struct No *fim = NULL;

void iniciarLista(int nr);
void exibirLista();
void removerElemento(int nr);

int main(int argc, char *argv[]) {
    exibirLista();    
    iniciarLista(10);
    iniciarLista(20);
 
    exibirLista();
    
    removerElemento(10); 
    exibirLista();
    
    removerElemento(20); 
    exibirLista();
    
    system("PAUSE");    
    return 0;
}

void iniciarLista(int nr) {
    if (inicio == NULL) {
        inicio = (struct No*) malloc(sizeof(struct No));
        inicio->info = 0;
        inicio->prox = NULL;
        fim = inicio;
    }
    
    struct No *novo;
    novo = (struct No*) malloc(sizeof(struct No));
    novo->info = nr;
    novo->prox = NULL;
    
    fim->prox = novo;
    fim = novo;
}

void exibirLista() {
    if (inicio == NULL || inicio->prox == NULL) {
        printf("Lista Vazia \n\n");
        return;
    }
    
    struct No *atual = inicio->prox;
    int contador = 1;
    
    printf("Elementos da Lista:\n");
    while (atual != NULL) {
        printf("%i - |%p| - |%d|%p|\n", contador, (void*)atual, atual->info, (void*)atual->prox);
        contador++;
        atual = atual->prox;
    }
    printf("\n");
}

void removerElemento(int nr) {
    if (inicio == NULL || inicio->prox == NULL) {
        printf("Lista vazia. Nao ha o que remover.\n");
        return;
    }

    struct No *ant = inicio;
    struct No *atual = inicio->prox;
    
    while (atual != NULL && atual->info != nr) {
        ant = atual;
        atual = atual->prox;
    }
    
    if (atual == NULL) {
        printf("Elemento %d nao encontrado!\n\n", nr);
        return;
    }
    
    ant->prox = atual->prox;
    
    if (atual == fim) {
        fim = ant;
    }
    
    free(atual);
    printf("Elemento %d removido com sucesso!\n\n", nr);
}
