/*
Roman to Integer
Converta um numeral romano em um número inteiro.
*/

#include <stdio.h>
#include <string.h>

//Definição de constantes
#define QUANTIDADE_ALGARISMOS 3

//Conjunto de algarismos romandos existentes
char algarismosRomanos[QUANTIDADE_ALGARISMOS] = {'I', 'V', 'X'};
int valoresAlgarismosRomancosDecimal[QUANTIDADE_ALGARISMOS] = {1, 5, 10};

//Declaração da função
int converterNumeralRomano(char *numeral);

int main() {
    char numeralRomano[] = {"XXVII"};
    int numeralRomanoDecimal = converterNumeralRomano(numeralRomano);

    printf("O numeral em romano: %s \nO numeral em decimal: %d", numeralRomano, numeralRomanoDecimal);

    return 0;
}

//Inicialização da função
int converterNumeralRomano(char *numeral) {
    int quantidadeAlgarismosNumeral = strlen(numeral), numeralDecimal = 0;

    for (int i = 0; i < quantidadeAlgarismosNumeral; i++) {
        char algarismoNumero = numeral[i];

        for (int j = 0; j < QUANTIDADE_ALGARISMOS; j++) {
            char algarismoConjunto = algarismosRomanos[j];

            if (algarismoNumero == algarismoConjunto) {
                int valorDecimal = valoresAlgarismosRomancosDecimal[j];
                numeralDecimal += valorDecimal;
            }
        }
    }
    return numeralDecimal;
}