## Exercício 01: Two Sum

### Intuito do Código
O objetivo deste código é encontrar dois números dentro de um array de inteiros que somam um valor alvo específico. Caso a soma seja encontrada, o programa retorna os índices desses números.

### Passo a Passo da Resolução
1. Definição de um array contendo os números.
2. Criação de uma função `encontrarSomaNumeros` que percorre o array em busca de dois números cuja soma seja igual ao número alvo.
3. A função utiliza dois loops aninhados para comparar cada par de números no array.
4. Se a soma for encontrada, imprime os índices dos números e retorna verdadeiro (`1`).
5. No `main`, chama-se a função e imprime-se uma mensagem indicando se a soma foi encontrada ou não.

---

## Exercício 02: Roman to Integer

### Intuito do Código
O código tem como finalidade converter um número representado em algarismos romanos para um número decimal correspondente.

### Passo a Passo da Resolução
1. Definição de um conjunto de algarismos romanos e seus respectivos valores decimais.
2. Criação da função `converterNumeralRomano` para percorrer a string representando o número romano.
3. Para cada caractere da string, busca-se o valor correspondente no conjunto predefinido de algarismos romanos.
4. O valor encontrado é somado ao total para formar o número decimal.
5. No `main`, um numeral romano de exemplo é convertido e o resultado é impresso na tela.