# Simulado – Capítulos 1, 2 e 3 – PIF (C)

**CESAR School – ADS | Programação Imperativa e Funcional | Prof. Danilo Farias Soares da Silva | 2026.2**

> Obs.: a lista original pula da Questão 06 para a Questão 8 (não existe Questão 07). A numeração abaixo segue a do enunciado.
> Os códigos das Questões 8 a 15 estão nos arquivos `questao_08.c` ... `questao_15.c` (compilar com `gcc arquivo.c -o programa -lm`).

---

## PARTE I – Questões teóricas e analíticas

### Questão 01

**Alternativa correta: c)**

Em C, maiúsculas e minúsculas são caracteres diferentes. Logo `valor`/`VALOR`, `peso`/`Peso` e `taxa`/`TAXA` são identificadores totalmente distintos.

- a) Errada: `numero` e `Numero` são variáveis diferentes, com endereços diferentes.
- b) Errada: o ponto de entrada é `main` (minúsculo). `Main` é só um identificador qualquer e o linker reclama da falta de `main`.
- d) Errada: a sensibilidade a caixa é regra da linguagem, não do sistema operacional.

### Questão 02

Código com erros:

```c
#include <stdio.h>
#include <stdlib.h>;          // (1)
int Main() {                  // (2)
    int idade = 20;
    printf( A idade do aluno eh: %d anos.. , idade);   // (3)
    cout << endl;             // (4)
    system("PAUSE");
    return 0;
}
```

1. **`;` depois de `#include <stdlib.h>`**: diretivas de pré-processador não terminam com ponto e vírgula.
2. **`Main` com "M" maiúsculo**: a função principal deve ser `main`. Como C diferencia caixa, o programa não tem ponto de entrada e falha na linkedição.
3. **String do `printf` sem aspas**: o texto de formato precisa estar entre aspas duplas: `"A idade do aluno eh: %d anos.\n"`.
4. **`cout << endl;` é C++**: não existe em C (não há `iostream`, `cout` nem `endl`). A quebra de linha em C é feita com `\n` dentro do `printf`.

Se a questão pede exatamente três, os erros de maior peso são o 2, o 3 e o 4. O erro 1 é o mais "leve" (alguns compiladores só emitem aviso). Também vale notar que os `..` no fim da frase provavelmente eram para ser `.\n`.

Código corrigido:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int idade = 20;
    printf("A idade do aluno eh: %d anos.\n", idade);
    system("PAUSE");
    return 0;
}
```

### Questão 03

Valores iniciais: `a = 2, b = 4, c = 5, d = 10`

| Instrução | Passo a passo | Resultado |
|---|---|---|
| `a += b + c;` | a = 2 + (4 + 5) | **a = 11** |
| `b *= c = d - 2;` | associa da direita p/ esquerda: c = 10 - 2 = 8; depois b = 4 * 8 | **c = 8, b = 32** |
| `d %= a + 3;` | d = 10 % (11 + 3) = 10 % 14 | **d = 10** |
| `a += b += c += 5;` | c = 8 + 5 = 13; b = 32 + 13 = 45; a = 11 + 45 | **c = 13, b = 45, a = 56** |

**Valores finais: a = 56, b = 45, c = 13, d = 10.**

### Questão 04

Dados: `i = 2, j = 3, k = 0, x = 2.5, y = 5.0`

a) `i < j + 2` → `2 < 5` → **1**

b) `2 * i - 5 <= j - 4` → `-1 <= -1` → **1**

c) `!k && (x + y >= 7.5)` → `1 && (7.5 >= 7.5)` → `1 && 1` → **1**

d) `!(i == j) || (y / x == 2.0)` → `!(0) || ...` → `1 || ...` → **1** (o lado direito nem é avaliado, por curto-circuito)

e) `i == 2 && j == 4 || k == 0` → `&&` tem precedência sobre `||`: `(1 && 0) || 1` → `0 || 1` → **1**

### Questão 05

**a)** No `while`, a condição é testada **antes** de cada execução do bloco. Se for falsa desde o início, o bloco executa **zero vezes**. No `do-while`, a condição é testada **depois** do bloco, então ele executa **no mínimo uma vez**. Por isso o `do-while` é ideal para menus e validação de entrada.

**b)** O `for` é mais elegante e legível quando o número de repetições é conhecido ou controlado por um contador: inicialização, condição e incremento ficam juntos no cabeçalho (`for (i = 0; i < n; i++)`). Isso evita esquecer o incremento (causa clássica de laço infinito no `while`) e deixa o controle do laço visível em uma linha. Exemplos: percorrer vetores, tabuadas, somatórios, laços aninhados para matrizes e padrões.

**c)** `while (condicao);` **não é erro de compilação**, é um **erro de lógica**. O `;` forma um comando vazio, que passa a ser o corpo do laço. Se `condicao` for verdadeira, nada dentro do laço a altera, então ele vira um **laço infinito** (o programa trava repetindo o comando vazio). Se for falsa, o laço é ignorado e o bloco `{ ... }` que vinha depois roda uma única vez, fora do laço, o que também não é o comportamento desejado.

### Questão 06

**a)** A variável `soma` é declarada **dentro do bloco do `for`**, então seu escopo vai só até a chave de fechamento `}` do laço. O `printf` está fora do bloco, onde `soma` não existe, e o compilador emite o erro `'soma' undeclared`.

**b)** Fluxo do laço:

- `i = 1, 2, 3, 4`: executam o corpo completo.
- `i = 5`: o `continue` pula o restante do corpo e vai direto ao `i++`.
- `i = 6, 7`: executam o corpo completo.
- `i = 8`: o `break` encerra o laço imediatamente.
- `i = 9, 10`: **nunca são executadas**.

Ou seja, o corpo é executado por completo para i = 1, 2, 3, 4, 6 e 7 (6 vezes). O `continue` só pula a iteração atual; o `break` encerra o laço todo.

**c)** Além do escopo, há um segundo problema: `int soma = 0;` dentro do laço reinicia a variável a cada iteração, então ela nunca acumularia nada. A declaração e a inicialização precisam ficar **antes** do laço:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0;   // fora do laço: escopo abrange o printf e acumula corretamente

    for (i = 1; i <= 10; i++) {
        if (i == 5) continue;
        if (i == 8) break;
        soma += i * i;
    }

    printf("Soma final = %d\n", soma);
    system("PAUSE");
    return 0;
}
```

Cálculo: 1² + 2² + 3² + 4² + 6² + 7² = 1 + 4 + 9 + 16 + 36 + 49 = **115**

Saída no console: `Soma final = 115`

---

## PARTE II – Questões práticas (código em C)

Cada questão tem seu arquivo `.c`:

| Questão | Arquivo | Tema |
|---|---|---|
| 8 | `questao_08.c` | Esfera: área e volume com `pow()` |
| 9 | `questao_09.c` | Área do triângulo (Fórmula de Heron) |
| 10 | `questao_10.c` | Segundos em horas, minutos e segundos |
| 11 | `questao_11.c` | Holerite com gratificação e imposto |
| 12 | `questao_12.c` | Validação de nota com `do-while` |
| 13 | `questao_13.c` | Fatorial com `long long int` |
| 14 | `questao_14.c` | Senha com 3 tentativas |
| 15 | `questao_15.c` | Triângulo de Floyd |

Todos foram compilados com `gcc -Wall -Wextra` (sem avisos) e testados. Exemplos de saída:

- Q8, R = 2: `Area da superficie: 50.265` / `Volume: 33.510`
- Q9, lados 3, 4, 5: `Area do triangulo: 6.00`
- Q10, 3665 s: `1 hora(s), 1 minuto(s) e 5 segundo(s)`
- Q11, 20 dias: bruto R$ 900,00; gratificação R$ 45,00; imposto R$ 72,00; líquido **R$ 873,00**
- Q13, N = 5: `5! = 120` (0! = 1; N = 20 ainda cabe: 2432902008176640000)
- Q15, N = 5: saída exatamente no formato do enunciado
