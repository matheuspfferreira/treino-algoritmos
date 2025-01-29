/*
Two Sum
Dado um array de números inteiros, encontre dois números que somam um valor 
alvo específico. Você deve retornar os índices desses dois números.
*/

#include <stdio.h>
#include <string.h>

//Definição de constantes
#define QUANTIDADE_NUMEROS 10
#define NUMERO_PROCURAR 9

//Sequência de números
int numeros[QUANTIDADE_NUMEROS] = {1, 5, 3, 8, 7, 10, 2};

//Declaração de função
int encontrarSomaNumeros(int *numeros, int numeroDesejado);

int main() {
    int encontrouSoma = encontrarSomaNumeros(numeros, NUMERO_PROCURAR);

    if (encontrouSoma) {
        printf("\nPortanto, a soma foi encontrada");
    } else {
        printf("\nLamento, mas a soma não foi encontrada");
    }
}

//Inicialização da função
int encontrarSomaNumeros(int *numeros, int numeroDesejado) {
    for (int i = 0; i < QUANTIDADE_NUMEROS; i++) {
        int primeiroNumero = numeros[i];

        for (int j = i+1; j < QUANTIDADE_NUMEROS; j++) {
            int segundoNumero = numeros[j];

            if (primeiroNumero + segundoNumero == numeroDesejado) {
                printf("Posicoes dos numeros somados: %d e %d", i, j);
                return 1;
            }
        } 
    }
    return 0;
}