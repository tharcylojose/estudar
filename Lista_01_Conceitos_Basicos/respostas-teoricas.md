# Lista de Exercícios – Capítulo 1 (Conceitos Básicos & Introdução à Linguagem C)
## Questões Teóricas e Discursivas

### Questão 04 — Análise de Código com Erros

Código original:
```c
#include <stdio.h>
#include <stdlib.h>;
int Main{}
(
 printf( Existem %d semanas no ano.,52);
 cout << endl;
 system("PAUSE");
 return 0;
)
```

**Erros identificados:**
1. `#include <stdlib.h>;` — diretivas de pré-processador não terminam com `;`.
2. `int Main{}` — C é *case sensitive*: a função de entrada deve se chamar `main` (minúsculo), não `Main`. Além disso, os parâmetros da função devem ficar entre parênteses `()`, não entre chaves `{}`.
3. `(` — o corpo da função deve começar com chave `{`, não com parêntese.
4. `printf( Existem %d semanas no ano.,52);` — a string de formato precisa estar entre aspas duplas: `"Existem %d semanas no ano.\n"`.
5. `cout << endl;` — sintaxe de **C++**, não existe em C. Deve ser removida (ou substituída por `printf("\n");`, se a intenção for pular linha).
6. `)` — o corpo da função deve ser fechado com chave `}`, não com parêntese.

**Versão corrigida e funcional:**
```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Existem %d semanas no ano.\n", 52);
    system("PAUSE");
    return 0;
}
```

---

### Questão 05 — Correção do Código para o Padrão ANSI C

Código analisado:
```c
main()
{
    printf("Linguagem C");
    system("pause");
}
```

**Não**, o programa não está totalmente correto para compilação sob o padrão ANSI C. Faltam:
- As diretivas `#include <stdio.h>` (necessária para `printf`) e `#include <stdlib.h>` (necessária para `system`) — sem elas o compilador não conhece os protótipos dessas funções.
- O tipo de retorno explícito da função `main`: o padrão ANSI C exige `int main()` (o "int implícito" não é mais aceito em compiladores modernos/C99 em diante).
- Uma instrução `return 0;` ao final, indicando que o programa terminou com sucesso.

---

### Questão 06 — Erros de Sintaxe e de Lógica

Código analisado:
```c
main()
{
    int a=1; b=2; c=3:
    printf("0s números são: %d%d%d\n, a, b, c, d);
    system("pause");
}
```

**Erros de sintaxe:**
- Faltam `#include <stdio.h>` e `#include <stdlib.h>`.
- `int a=1; b=2; c=3:` — `b` e `c` são usados sem tipo declarado (deveria ser `int a = 1, b = 2, c = 3;`), e o `;` final foi trocado por `:`.
- A string de formato do `printf` não é fechada corretamente: falta a aspas dupla de fechamento após `\n`.
- Falta o `return 0;` ao final da função `main`.

**Erros de lógica:**
- A variável `d` é usada como argumento do `printf`, mas nunca foi declarada.
- O formato `%d%d%d` tem apenas 3 especificadores, mas são passadas 4 variáveis (`a, b, c, d`) — incompatibilidade entre a quantidade de especificadores e de argumentos.
- O texto `"0s números são"` contém um erro de digitação (zero no lugar da letra "O").

**Versão corrigida (referência):**
```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 1, b = 2, c = 3;
    printf("Os numeros sao: %d %d %d\n", a, b, c);
    system("pause");
    return 0;
}
```

---

### Questão 07 — Saída Exata de Instruções printf()

a) `printf("\n\tBom dia! Shirley.");`
→ Uma linha em branco, seguida de uma tabulação e do texto: `	Bom dia! Shirley.`

b) `printf("Você já tomou café? \n");`
→ `Você já tomou café? ` seguido de uma quebra de linha.

c) `printf("\n\nA solução não existe!\nNão insista.");`
→ Duas linhas em branco, depois `A solução não existe!`, quebra de linha, e `Não insista.` (sem quebra de linha ao final).

d) `printf("Duas\tlinhas\tde\tsaída\nou\tuma?");`
→ `Duas	linhas	de	saída` (com tabulações entre as palavras), quebra de linha, e `ou	uma?`.

e) `printf("%s\n%s\n%s\n", "um", "dois", "três");`
→
```
um
dois
três
```
(cada palavra em uma linha, com quebra de linha também após "três").

---

### Questão 08 — Comportamento do Programa com Sequências de Escape

```c
printf("\n\t\"Primeiro programa\"");
```

O programa imprime uma linha em branco (`\n`), seguida de uma tabulação (`\t`), e então o texto **entre aspas duplas literais** `"Primeiro programa"` — as sequências `\"` fazem com que o caractere `"` seja impresso normalmente na tela, em vez de ser interpretado como delimitador da string.

Saída exata:
```

	"Primeiro programa"
```

---

### Questão 09 — Interpretação de Constantes de Caractere com %c

```c
printf("%c%c%cPrimeiro programa", '\n', '\t', '\"');
printf("%c", "\"");
```

Na primeira chamada, cada `%c` recebe uma **constante de caractere** (`'\n'`, `'\t'`, `'\"'`) e imprime o caractere correspondente diretamente: uma quebra de linha, uma tabulação e um caractere de aspas, seguidos do texto `Primeiro programa`.

Saída da primeira chamada:
```

	"Primeiro programa
```

Já a segunda chamada, `printf("%c", "\"")`, contém um **erro de tipo**: o argumento passado não é uma constante de caractere (`'\"'`), e sim uma **string** (`"\""`, ou seja, o endereço de um vetor de caracteres). Como `%c` espera um valor inteiro/char e recebe um ponteiro, o comportamento é indefinido — na prática, o compilador normalmente emite um aviso (warning) e o caractere impresso costuma ser lixo de memória (o valor truncado do endereço), não o caractere de aspas esperado.

---

### Questão 10 — Case Sensitivity em C

**Resposta correta: b) Verdadeiro** (a linguagem C diferencia rigorosamente letras maiúsculas de minúsculas).

**Justificativa:** C é uma linguagem *case sensitive*. Isso significa que `peso`, `Peso` e `PESO` são três identificadores **distintos**, correspondendo a três variáveis diferentes na memória, mesmo que "pareçam" a mesma palavra para um leitor humano. Essa é uma das razões pelas quais nomes de funções e palavras-chave (como `main`, `int`, `printf`) devem ser escritos exatamente como definidos pela linguagem.

---

### Questão 11 — Classificação de Constantes

| Constante | Classificação | Tipo Base em C |
|---|---|---|
| `\r` | Sequência de escape (caractere de controle – retorno de carro) | `char` |
| `2130` | Constante inteira decimal | `int` |
| `-123` | Constante inteira decimal (negativa) | `int` |
| `33.28` | Constante de ponto flutuante | `double` |
| `0XFA` | Constante inteira hexadecimal | `int` |
| `0101` | Constante inteira octal (prefixo zero) | `int` |
| `2.0e30` | Constante de ponto flutuante (notação científica) | `double` |
| `\xDC` | Sequência de escape hexadecimal (representa um caractere) | `char` |
| `'\"'` | Constante de caractere (aspas duplas escapadas) | `char` |
| `'\\'` | Constante de caractere (barra invertida escapada) | `char` |
| `'F'` | Constante de caractere | `char` |
| `0` | Constante inteira decimal | `int` |
| `'\0'` | Constante de caractere (caractere nulo / terminador de string) | `char` |
| `"F"` | Constante string (mesmo contendo 1 caractere, é uma string) | `char[]` (vetor de char) |
| `-4567.89` | Constante de ponto flutuante (negativa) | `double` |

---

### Questão 12 — Correção de Declarações de Variáveis

| Instrução | Status | Justificativa |
|---|---|---|
| a) `int a;` | Correto | Declaração simples e válida de uma variável inteira. |
| b) `float b;` | Correto | Declaração simples e válida de uma variável de ponto flutuante. |
| c) `double float c;` | Incorreto | Não é possível combinar dois tipos base diferentes (`double` e `float`) na mesma declaração. |
| d) `unsigned char d;` | Correto | `unsigned` é um modificador válido para `char`. |
| e) `unsigned e;` | Correto | `unsigned` sozinho é uma abreviação válida para `unsigned int`. |
| f) `long float f;` | Incorreto | Não existe o tipo `long float` no C padrão (ANSI C); a combinação correta para um ponto flutuante estendido é `long double`. |
| g) `long g;` | Correto | `long` sozinho é uma abreviação válida para `long int`. |
| h) `long double h;` | Correto | `long double` é um tipo de ponto flutuante de precisão estendida, válido em C. |

---

### Questão 13 — O que são Arquivos de Cabeçalho (.h)

**Resposta correta: c)** São arquivos de texto ASCII padrão contendo protótipos de funções, definições de constantes, macros e tipos.

---

### Questão 14 — Objetivo de Incluir Arquivos de Cabeçalho

**Resposta correta: a)** Instruir o compilador a carregar as definições das funções da biblioteca padrão antes de compilar o código-fonte.

---

### Questão 15 — Classificação da Diretiva #include

**Resposta correta: c)** Uma diretiva especial para o pré-processador C, executada antes da compilação.

---

### Questão 16 — Quem Interpreta as Diretivas de Pré-processador

**Resposta correta: c)** Pré-processador (fase do compilador que altera o programa-fonte antes da compilação propriamente dita).

---

### Questão 17 — Flexibilidade de Espaçamento em Chamadas de printf()

```c
a) printf ( "Primeiro programa" );
b) printf( "Primeiro programa" );
c) printf("Primeiro programa");
d) printf "Primeiro programa" ;
```

As alternativas **a), b) e c)** estão sintaticamente **corretas** — o compilador C ignora espaços em branco extras entre o nome da função, os parênteses e os argumentos, desde que a estrutura da chamada (nome da função seguido de parênteses contendo os argumentos) seja respeitada.

A alternativa **d) está incorreta**, pois falta o par de parênteses `()` obrigatório em toda chamada de função em C — sem eles, `printf "Primeiro programa";` não é uma chamada de função válida.

Isso demonstra que o C é uma linguagem **livre de formato (free-form)**: espaços, tabulações e quebras de linha extras entre tokens não afetam a compilação, mas a presença dos elementos sintáticos obrigatórios (como os parênteses de uma chamada de função) é sempre necessária.
