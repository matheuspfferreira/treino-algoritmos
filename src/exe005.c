/*
Valid Anagram
Dadas duas strings, determine se uma é um anagrama da outra 
(se ambas possuem os mesmos caracteres, apenas reorganizados).
*/

#include <stdio.h>
#include <string.h>

//Declaração de constantes
#define QUANTIDADE_CARACTERES 5

//Declaração das funções
void ordenarPalavra(char *palavra);
int verificaPalavrasAnagramas(char *primeiraString, char *segundaString);

//Declaração das duas palavras 
char primeiraPalavra[QUANTIDADE_CARACTERES] = "maria";
char segundaPalavra[QUANTIDADE_CARACTERES] = "airam";

int main() {
    ordenarPalavra(primeiraPalavra);
    ordenarPalavra(segundaPalavra);

    if (verificaPalavrasAnagramas(primeiraPalavra, segundaPalavra)) {
        printf("As palavras sao anagramas");
    } else {
        printf("As palavras nao sao anagramas");
    }
    return 0;
}

//Inicialização das funções
void ordenarPalavra(char *palavra) {
    char variavelControle;

    for (int i = 0; i < QUANTIDADE_CARACTERES-1; i++) {
        for (int j = i+1; j < QUANTIDADE_CARACTERES; j++) {
            char *letraAnterior = &palavra[i], *letraPosterior = &palavra[j];
            int codigoLetraAnterior = (int) palavra[i], codigoLetraPosterior = (int) palavra[j];

            if (codigoLetraAnterior > codigoLetraPosterior) {
                variavelControle = *letraAnterior;
                *letraAnterior = *letraPosterior;
                *letraPosterior = variavelControle;
            } 
        }

    }
}

int verificaPalavrasAnagramas(char *primeiraString, char *segundaString) {
    int palavrasAnagramas = !(strcmp(primeiraString, segundaString));

    if (palavrasAnagramas) {
        return 1;
    }
    return 0;
}