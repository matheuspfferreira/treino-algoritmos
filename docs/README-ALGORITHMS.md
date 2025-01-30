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

---

## Exercício 03: Palindrome Number

### Intuito do Código
O objetivo deste código é verificar se uma palavra é um palíndromo, ou seja, se ela é lida da mesma forma de trás para frente.

### Passo a Passo da Resolução
1. Definição de uma string contendo a palavra a ser verificada.
2. Criação da função `verificaPalindromo`, que recebe a palavra e verifica se é um palíndromo.
3. Dentro da função, a string é percorrida e sua versão invertida é armazenada em uma nova variável.
4. A palavra original e a palavra invertida são comparadas usando `strcmp`.
5. Se forem idênticas, a função retorna verdadeiro (`1`), indicando que a palavra é um palíndromo; caso contrário, retorna falso (`0`).
6. No `main`, a função é chamada, e imprime-se uma mensagem informando se a palavra é ou não um palíndromo.

---

## Exercício 04: Search Insert Position

### Intuito do Código
O objetivo deste código é determinar o índice onde um determinado número alvo deve ser inserido dentro de uma lista ordenada, de forma a manter a ordem crescente dos elementos.

### Passo a Passo da Resolução
1. Definição de um array ordenado contendo os números.
2. Criação de uma função `retornaIndiceNumeroOrdem` que percorre o array e determina o índice adequado para a inserção do novo número.
3. A função percorre o array verificando se o número alvo está entre dois elementos consecutivos.
4. Caso o número alvo esteja dentro do intervalo entre dois números, o índice apropriado é registrado.
5. No `main`, a função é chamada e imprime-se a posição onde o número pode ser inserido.

### Observação
O algoritmo atual percorre toda a lista sequencialmente para encontrar a posição ideal. Uma otimização possível seria utilizar busca binária para melhorar a eficiência, reduzindo o número de comparações em listas grandes.