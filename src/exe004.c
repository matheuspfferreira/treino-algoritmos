/*
Valid Parentheses
Dada uma string contendo apenas os caracteres '(', ')', '{', '}', '[' e ']', 
determine se a entrada é válida. Uma entrada é válida se os parênteses forem 
fechados na ordem correta.
*/

#include <stdio.h>
#include <string.h>

//Declaração de constante
#define QUANTIDADE_CARACTERES_ACEITOS 3

//Declaração de caracteres aceitos
char caracteresAbertura[QUANTIDADE_CARACTERES_ACEITOS] = {'(', '[', '{'};
char caracteresFechamento[QUANTIDADE_CARACTERES_ACEITOS] = {')', ']', '}'};

//Declaração da função
int verificaStringValida(char *string);

int main() {

    return 0;

}

//Inicialização da função
int verificaStringValida(char *string) {
    int quantidadeCaracteres = strlen(string);

    for (int i = 0; i < quantidadeCaracteres; i++) {
        char caractere = string[i];

    }



}