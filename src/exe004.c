/*
Search Insert Position
Dada uma lista ordenada e um valor alvo, retorne o 
índice onde o alvo deve ser inserido para manter a ordem.
*/

#include <stdio.h>
#include <string.h>

//Declaração de constantes
#define QUANTIDADE_NUMEROS 7
#define NUMERO_INSERIR 12

//Declaração dos números ordenados
int numerosOrdenados[QUANTIDADE_NUMEROS] = {1, 4, 6, 7, 10, 14, 18};

//Declaração da função
int retornaIndiceNumeroOrdem(int *numeros, int numeroEscolhido);

int main() {
    int indiceInserir = retornaIndiceNumeroOrdem(numerosOrdenados, NUMERO_INSERIR);

    printf("O numero %d pode ser inserido no seguinte indice: %d", NUMERO_INSERIR, indiceInserir);
    
    return 0;
}

//Inicialização da função
int retornaIndiceNumeroOrdem(int *numeros, int numeroEscolhido) {
    int indice = 0;

    for (int i = 0; i < QUANTIDADE_NUMEROS; i++) {
        int numeroAnterior = numeros[i], numeroPosterior = numeros[i+1];

        if (numeroAnterior <= numeroEscolhido && numeroEscolhido <= numeroPosterior) {
            indice = i+1;
        }
    }
    return indice;
}