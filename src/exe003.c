/*
Palindrome Number
Verifique se um número inteiro é um palíndromo, ou seja, se ele lê o mesmo de trás para frente.
*/

#include <stdio.h>
#include <string.h>

//Declaração da função
int verificaPalindromo(char *palavra);

int main() {
    char palavraVerificar[] = "ovo";

    if (verificaPalindromo(palavraVerificar)) {
        printf("A palavra %s e um palindromo", palavraVerificar);
    } else {
        printf("A palavra %s nao e um palindromo", palavraVerificar);
    }

    return 0;
}

//Inicialização da função
int verificaPalindromo(char *palavra) {
    int quantidadeCaracteres = strlen(palavra);
    char palavraInvertida[quantidadeCaracteres];

    for (int i = 0; i < quantidadeCaracteres; i++) {
        char letra = palavra[i];
        palavraInvertida[quantidadeCaracteres-i-1] = letra;
    }
    
    int palindromo = !(strcmp(palavra, palavraInvertida));

    if (palindromo) {
        return 1;
    }
    return 0;
}