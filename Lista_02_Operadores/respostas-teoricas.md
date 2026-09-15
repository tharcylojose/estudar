# Lista de Exercícios – Capítulo 2 (Operadores)
## Parte I: Questões Teóricas e Analíticas

### Questão 01 — Truncamento de Tipos e Coerção Implícita

**a)** O valor exibido no console será **2**.

**b)** Isso ocorre porque `valor_inteiro` é do tipo `int`, e ao receber o valor `2.97` (um `double`), o compilador realiza uma **conversão implícita (coerção)** de `double` para `int`. Nessa conversão, a parte fracionária é simplesmente descartada (não há arredondamento) — o fenômeno é chamado de **truncamento** (truncation).

**c)** Para evitar a perda da parte decimal, o programador pode:
- Arredondar explicitamente antes de atribuir, usando a função `round()` da biblioteca `<math.h>`: `valor_inteiro = round(2.97);`
- Somar `0.5` manualmente antes do cast (técnica clássica de arredondamento): `valor_inteiro = (int)(2.97 + 0.5);`
- Ou, se a precisão for importante, simplesmente manter a variável como `float`/`double` em vez de `int`.

---

### Questão 02 — Entrada Standard de Caracteres vs. Bibliotecas Legadas

**a)** `<conio.h>` não faz parte do padrão ANSI C — é uma biblioteca proprietária criada para compiladores DOS/Turbo C da Borland. Ela não é implementada por compiladores modernos em Linux, macOS ou servidores (GCC/Clang), o que torna qualquer programa que a utilize **não portável**.

**b)** As funções padrão e portáveis equivalentes, definidas em `<stdio.h>`, são `getchar()` e `putchar()` (ou `scanf("%c", ...)` / `printf("%c", ...)`).

**c)**
```c
#include <stdio.h>

int main() {
    char c;
    c = getchar();          // lê um caractere
    while (getchar() != '\n'); // descarta o restante do buffer até a quebra de linha
    printf("Caractere lido: %c\n", c);
    return 0;
}
```

---

### Questão 03 — Formatação de Saída em Bases Numéricas e ASCII

```c
#include <stdio.h>

int main() {
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("Decimal: %d | Hexadecimal: %x | Octal: %o | ASCII: %c\n",
           numero, numero, numero, numero);

    return 0;
}
```

---

### Questão 04 — Operadores de Atribuição Composta e Precedência

Estado inicial: `a = 1, b = 2, c = 3, d = 4`

1. `a += b + c;` → `a = 1 + (2 + 3) = 6`
2. `b *= c = d + 2;` → primeiro `c = d + 2 = 6`; depois `b = b * c = 2 * 6 = 12`
3. `d %= a + a + a;` → `a+a+a = 18`; `d = 4 % 18 = 4`
4. `d -= c -= b -= a;` (associatividade da direita p/ esquerda) → `b -= a` → `b = 12 - 6 = 6`; `c -= b` → `c = 6 - 6 = 0`; `d -= c` → `d = 4 - 0 = 4`
5. `a += b += c += 7;` → `c += 7` → `c = 0 + 7 = 7`; `b += c` → `b = 6 + 7 = 13`; `a += b` → `a = 6 + 13 = 19`

**Valores finais: a = 19, b = 13, c = 7, d = 4**

---

### Questão 05 — Avaliação de Expressões Lógicas e Relacionais

Considerando: `i = 1, j = 2, k = 3, n = 2, x = 3.3, y = 4.4`

| Expressão | Cálculo | Resultado |
|---|---|---|
| a) `i < j + 3` | `1 < 5` | **1** |
| b) `2*i - 7 <= j - 8` | `-5 <= -6` | **0** |
| c) `-x + y >= 2.0*y` | `1.1 >= 8.8` | **0** |
| d) `x == y` | `3.3 == 4.4` | **0** |
| e) `!(n - j)` | `!(0)` | **1** |
| f) `!n - j` | `!n` primeiro (=0), depois `0 - j` | **-2** |
| g) `i && j && k` | todos != 0 | **1** |
| h) `i \|\| j-3 && k` | `&&` tem precedência: `(j-3 && k)=1`; `i \|\| 1` | **1** |
| i) `i < j && 2 >= k` | `1 && 0` | **0** |
| j) `i==2 \|\| j==4 \|\| k==5` | `0 \|\| 0 \|\| 0` | **0** |

> Observação sobre a letra **f)**: como `!` tem precedência maior que `-`, a expressão é `(!n) - j`, e o resultado **não** é um booleano puro (0/1), mas sim o valor aritmético `-2`. Esse é justamente o tipo de "pegadinha" de precedência que o capítulo quer evidenciar.

---

### Questão 06 — Comportamento e Precedência dos Incrementos

**a)**
- Trecho A (`x = ++n`, pré-fixado): `n` é incrementado **antes** da atribuição. Saída: `n = 6, x = 6`.
- Trecho B (`y = m++`, pós-fixado): o valor **antigo** de `m` é atribuído a `y`, e só depois `m` é incrementado. Saída: `m = 6, y = 5`.

**b)** A instrução `printf("%d\t%d\t%d\n", n, n+1, n++);` gera **comportamento indefinido (undefined behavior)** porque o padrão C não define a ordem de avaliação dos argumentos de uma função — o compilador pode avaliá-los da esquerda para a direita, da direita para a esquerda, ou em qualquer outra ordem. Além disso, a mesma variável `n` é lida e modificada (via `n++`) dentro da mesma expressão sem um *sequence point* entre esses usos, violando as regras do padrão C. Por isso, o resultado impresso pode variar de compilador para compilador (ou até entre otimizações do mesmo compilador).
