# Lista de Exercícios – Capítulo 3 – Laço de Repetição – PIF (C)

**CESAR School – ADS | Programação Imperativa e Funcional | Prof. Danilo Farias Soares da Silva | 2026.2**

> Os códigos das Questões 7 a 28 estão nos arquivos `questao_07.c` ... `questao_28.c` (compilar com `gcc arquivo.c -o programa` e, se usar `rand()`/`time()`, nenhuma lib extra é necessária).

---

## PARTE I – Questões teóricas e analíticas

### Questão 01

**a)** No `while`, a condição é testada **antes** de cada execução do bloco: se for falsa logo de início, o bloco executa **zero vezes**. No `do-while`, a condição é testada **depois** do bloco, então ele executa **no mínimo uma vez**, mesmo que a condição já comece falsa.

**b)** 
- `for`: quando o número de repetições é conhecido ou controlado por um contador (percorrer vetores, tabuadas, intervalos fixos). Reúne inicialização, teste e incremento numa única linha, deixando o controle do laço visível.
- `while`: quando o número de repetições não é conhecido de antemão e pode ser que o bloco nunca precise rodar (ex.: ler valores até encontrar um sentinela que já vem errado).
- `do-while`: quando o bloco precisa rodar pelo menos uma vez antes de qualquer teste, como menus e validação de entrada (o prompt tem que aparecer antes de checar a resposta).

**c)** Não é erro de compilação, é **erro de lógica**. O `;` após `while (condicao)` cria um comando vazio, que passa a ser o corpo do laço. Se `condicao` for verdadeira, nada a altera dentro do laço (porque o corpo está vazio), então o programa entra em **loop infinito**, travado repetindo um comando vazio.

### Questão 02

**a)** A variável `soma` é declarada **dentro do bloco do `for`**, então seu escopo termina na chave `}` de fechamento do laço. O `printf` está fora desse bloco, onde `soma` não existe, e o compilador acusa `'soma' undeclared`.

**b)** Mesmo movendo o `printf` para dentro do laço, `soma` está sendo **declarada e inicializada a cada iteração** (`int soma = 0;` dentro do `for`). Isso significa que a cada volta do laço a variável é recriada do zero, perdendo o valor acumulado da iteração anterior. O `printf` mostraria sempre o quadrado do `i` atual (ex.: 1, 4, 9, 16...), nunca a soma acumulada.

**c)** Código corrigido:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0;   // declarada e inicializada FORA do laço

    for (i = 1; i < 10; i++) {
        soma += i * i;
    }

    printf("Soma final = %d\n", soma);
    system("PAUSE");
    return 0;
}
```

**Escopo de bloco:** uma variável declarada dentro de `{ }` só é visível e existe dentro desse bloco; fora dele, não pode ser acessada.
**Tempo de vida:** a variável é criada quando o fluxo entra no bloco e destruída quando sai dele. Por isso, uma variável declarada dentro do `for` é recriada (e perde o valor) a cada iteração, enquanto uma declarada antes do laço mantém seu valor entre as iterações.

### Questão 03

**a)** Trecho A (`for (a = 36; a > 0; a /= 2)`): a sequência impressa é:

```
36 18 9 4 2 1
```

(a cada iteração `a` é dividido por 2 com divisão inteira: 36→18→9→4 [9/2=4]→2 [4/2=2]→1 [2/2=1]→0, que encerra o laço).

**b)** `ch + 1` imprime o caractere **seguinte** ao digitado na tabela ASCII (ex.: se o usuário digita `'a'`, imprime `'b'`). Os parênteses em `(ch = getch())` são obrigatórios porque, sem eles, o operador de comparação `!=` teria precedência maior que `=`, e a expressão seria interpretada como `ch = (getch() != 'X')` — ou seja, `ch` receberia 0 ou 1 (resultado da comparação) em vez do caractere lido. Os parênteses garantem que a atribuição aconteça primeiro, e só depois o valor atribuído a `ch` é comparado com `'X'`.

**c)** Para interromper um laço `for(;;)` de forma programática, sem depender do sistema operacional, usa-se o comando `break` dentro do corpo do laço, normalmente associado a uma condição (`if`) que detecta quando o programa deve parar (por exemplo, ao ler um valor sentinela ou uma tecla específica).

### Questão 04

**a)** O `break`, ao ser executado, **encerra imediatamente** o laço (for ou while) em que está inserido, independentemente da condição de teste, e o fluxo do programa continua na primeira instrução logo após o laço.

**b)** O `continue`, dentro de um `for`, **pula o restante das instruções do corpo** na iteração atual e vai direto para a expressão de **incremento** do cabeçalho do `for` (a terceira expressão), que é executada antes de o teste da condição ser reavaliado.

**c)** Em laços aninhados, o `break` dentro do laço **interno** interrompe **apenas o laço interno**. O laço externo continua normalmente, prosseguindo para sua próxima iteração.

### Questão 05

Código:
```c
int i, j;
for (i = 0, j = 10; i < j; i++, j--) {
    printf("i = %d, j = %d │ soma = %d\n", i, j, i + j);
}
```

**a)** O laço executa **5 iterações** (i vai de 0 a 4; quando i chega a 5, j já é 5, e `i < j` se torna falso, encerrando o laço).

**b)** Saída exata:
```
i = 0, j = 10 │ soma = 10
i = 1, j = 9 │ soma = 10
i = 2, j = 8 │ soma = 10
i = 3, j = 7 │ soma = 10
i = 4, j = 6 │ soma = 10
```

**c)** Reescrita com `while`:
```c
int i = 0, j = 10;
while (i < j) {
    printf("i = %d, j = %d │ soma = %d\n", i, j, i + j);
    i++;
    j--;
}
```

### Questão 06

Código:
```c
int x = 0;
while (x++ < 5);
printf("Valor final de x = %d\n", x);
```

**a)** O valor final impresso é **x = 6**.

**b)** `x++` é pós-incremento: a comparação `x++ < 5` usa o valor de `x` **antes** de somar 1, e só depois o incremento é aplicado. Passo a passo:
- x=0: compara 0<5 (verdadeiro), x vira 1
- x=1: compara 1<5 (verdadeiro), x vira 2
- x=2: compara 2<5 (verdadeiro), x vira 3
- x=3: compara 3<5 (verdadeiro), x vira 4
- x=4: compara 4<5 (verdadeiro), x vira 5
- x=5: compara 5<5 (**falso**), x vira 6, laço encerra

O corpo do `while` é vazio (`;`), então nada mais acontece a cada iteração além do teste e do incremento embutido na própria condição.

**c)** Reescrita explícita, sem corpo vazio, com o mesmo resultado final (x = 6):
```c
int x = 0;
while (x < 5) {
    x = x + 1;
}
x = x + 1;   // incremento extra correspondente ao x++ que ocorre na comparação que falha
printf("Valor final de x = %d\n", x);
```
(Ou, de forma equivalente e mais direta, já que o laço original roda enquanto x < 5 e incrementa uma vez a mais na checagem final: `x = 6;` é o resultado direto, mas a versão com `while` acima preserva o raciocínio passo a passo.)

---

## PARTE II – Questões práticas (código em C)

| Questão | Arquivo | Tema |
|---|---|---|
| 07 | `questao_07.c` | Contagem 0–100 em for, while e do-while |
| 08 | `questao_08.c` | Validação de nota com `do-while` |
| 09 | `questao_09.c` | Acumulador com sentinela negativa |
| 10 | `questao_10.c` | 100 múltiplos de 3 em colunas |
| 11 | `questao_11.c` | Intervalo dinâmico crescente/decrescente |
| 12 | `questao_12.c` | Tabela Celsius/Fahrenheit/Kelvin |
| 13 | `questao_13.c` | Fatorial com `long long int` |
| 14 | `questao_14.c` | Quadrados de 1 a 100 e soma total |
| 15 | `questao_15.c` | Múltiplos de 3 e 5 simultaneamente |
| 16 | `questao_16.c` | Senha com 3 tentativas |
| 17 | `questao_17.c` | Estatísticas de turma |
| 18 | `questao_18.c` | Inversão de dígitos |
| 19 | `questao_19.c` | N-ésimo termo de Fibonacci |
| 20 | `questao_20.c` | Tabela ASCII (decimal/hex/caractere) |
| 21 | `questao_21.c` | Jogo de adivinhação com dicas |
| 22 | `questao_22.c` | Triângulo de Floyd |
| 23 | `questao_23.c` | Moldura/quadrado vazado |
| 24 | `questao_24.c` | Padrão visual em X |
| 25 | `questao_25.c` | Teste de primalidade |
| 26 | `questao_26.c` | Primos em intervalo [A,B] e soma |
| 27 | `questao_27.c` | Simulador de caixa eletrônico |
| 28 | `questao_28.c` | Folha de pagamento com menu (do-while & switch) |

Todos compilados com `gcc -Wall -Wextra -std=c99` sem avisos e testados. Alguns resultados conferidos:

- **Q10**: múltiplos de 3 de 3 a 300, 10 por linha.
- **Q11**: A=1,B=5 → `1 2 3 4 5`; A=5,B=1 → `5 4 3 2 1`.
- **Q18**: 12345 → `54321`.
- **Q19**: N=10 → termo = 55 (sequência 1,1,2,3,5,8,13,21,34,55).
- **Q23**, L=5:
  ```
  XXXXX
  X   X
  X   X
  X   X
  XXXXX
  ```
- **Q24**, N=5:
  ```
  *   *
   * * 
    *  
   * * 
  *   *
  ```
- **Q25**: 17 → PRIMO; 18 → NÃO primo (6 divisores).
- **Q26**: intervalo [10,30] → primos 11,13,17,19,23,29, soma = 112.
- **Q27**: saque de R$ 287 → 2×R$100, 1×R$50, 1×R$20, 1×R$10, 1×R$5, 1×R$2.
- **Q21**: usa `srand(time(NULL))` para sortear uma letra diferente a cada execução.

**Observações:**
- Q25 e Q26 usam o critério literal do enunciado ("divisível apenas por 1 e por ele mesmo" → conta todos os divisores de 1 a N e verifica se são exatamente 2). Funciona corretamente, mas não é o algoritmo mais eficiente; para N grandes, bastaria testar divisores até √N.
- Removi `system("PAUSE")` dos códigos por ser específico do Windows; se o professor exigir, basta adicionar `#include <stdlib.h>` e a chamada antes do `return 0;`.
