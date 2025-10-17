```markdown
# Aula 1 — Notas rápidas de C

Resumo visual e objetivo dos conceitos básicos para começar a programar em C.

---

## Índice
- 1. #include <stdio.h>
- 2. int main()
- 3. Comentários
- 4. Variáveis e tipos
- 5. printf
- 6. scanf
- 7. \n (quebra de linha)
- 8. %d (inteiros)
- 9. %s (strings)
- 10. Funções
- 11. Estruturas de decisão
- 12. Estruturas de repetição
- 13. Problemas comuns com scanf
- 14. fgets + sscanf (jeito mais seguro)
- Dicas rápidas e exemplo completo

---

## 1. #include <stdio.h>
Importa funções de entrada/saída como `printf`, `scanf`, `fgets`, `puts`, etc.  
Necessário em qualquer programa que leia ou escreva dados na tela/teclado.

Exemplo:
```c
#include <stdio.h>
```

---

## 2. int main()
Ponto de entrada do programa. `int` indica que a função retorna um inteiro ao sistema operacional.
Um retorno `0` normalmente significa que o programa terminou sem erros.

Exemplo mínimo:
```c
int main(void) {
    return 0;
}
```

---

## 3. Comentários
- Linha única: `// comentário`
- Múltiplas linhas: `/* comentário em várias linhas */`  
Usados para explicar o código; não alteram a execução.

---

## 4. Variáveis e tipos
- `int` → inteiros (ex: 42)  
- `float` → números com casas decimais (precisão simples)  
- `double` → números com mais precisão  
- `char` → um único caractere (ex: `'a'`)  
- `char[]` ou `char *` → sequência de caracteres (string)

Exemplo:
```c
int idade = 20;
float preco = 3.50f;
char inicial = 'A';
char nome[50] = "Joao";
```

---

## 5. printf
Mostra texto na tela. Use especificadores de formato:

- `%d` → inteiro
- `%f` → float/double
- `%s` → string
- `%c` → caractere
- `\n` → nova linha

Exemplo:
```c
printf("Nome: %s\nIdade: %d\n", nome, idade);
```

---

## 6. scanf
Lê dados do teclado. Para tipos numéricos (ex: `int`, `float`) passe o endereço da variável com `&`.  
Para strings (array char), não é necessário `&`.

Exemplo:
```c
int x;
scanf("%d", &x);

char palavra[20];
scanf("%s", palavra); // lê até o primeiro espaço
```

Atenção: `scanf("%s", ...)` para strings vai parar no primeiro espaço.

---

## 7. \n — quebra de linha
Caracter especial usado em strings para pular linha:
```c
printf("Olá\nMundo\n");
```

---

## 8. %d — inteiros
Usado em `printf` e `scanf` para representar/ler inteiros:
```c
int n = 10;
printf("%d\n", n);
scanf("%d", &n);
```

---

## 9. %s — strings
Em `printf` exibe a string; em `scanf` lê até o primeiro espaço:
```c
char s[100];
scanf("%s", s);     // "hello" (não lê espaços)
printf("%s\n", s);
```

---

## 10. Funções
Blocos de código que realizam tarefas específicas. Podem receber parâmetros e retornar valores.

Exemplo:
```c
int soma(int a, int b) {
    return a + b;
}
```

---

## 11. Estruturas de decisão
- `if` — executa se condição for verdadeira  
- `else` — caso contrário

Exemplo:
```c
if (x > 0) {
    printf("positivo\n");
} else {
    printf("zero ou negativo\n");
}
```

---

## 12. Estruturas de repetição
- `for` — repete um número conhecido de vezes  
- `while` — repete enquanto a condição for verdadeira

Exemplo `for`:
```c
for (int i = 0; i < 10; i++) {
    printf("%d\n", i);
}
```

---

## 13. Problemas comuns com scanf
- Digitar letras quando se espera número → erro de conversão e comportamento indefinido.  
- `%s` lê só até o primeiro espaço (nomes com espaços são cortados).  
- Restos do buffer (newline) podem atrapalhar leituras seguintes.

---

## 14. fgets + sscanf — leitura mais segura
- `fgets` lê a linha inteira (inclui espaços) e evita overflow quando usado corretamente.  
- `sscanf` converte a string lida para outros tipos com controle.

Exemplo:
```c
char linha[100];
fgets(linha, sizeof(linha), stdin); // lê até '\n' ou EOF
int idade;
if (sscanf(linha, "%d", &idade) == 1) {
    // conversão OK
} else {
    // erro de leitura
}
```

---

## Tabela rápida de especificadores
- %d → inteiro
- %f → float/double
- %s → string
- %c → caractere
- \n → nova linha

---

## Dicas rápidas
- Sempre limite o tamanho ao ler strings: `fgets(nome, sizeof(nome), stdin)`.  
- Verifique o retorno de `scanf`/`sscanf` para detectar erros.  
- Inicialize variáveis antes de usar.  
- Use `const` onde aplicável para evitar modificações acidentais.

---

## Exemplo completo (pequeno programa)
```c
#include <stdio.h>
#include <string.h>

int main(void) {
    char linha[100];
    char nome[50];
    int idade;

    printf("Digite seu nome: ");
    if (fgets(linha, sizeof(linha), stdin)) {
        // remove newline se existir
        linha[strcspn(linha, "\n")] = '\0';
        strncpy(nome, linha, sizeof(nome));
        nome[sizeof(nome)-1] = '\0';
    }

    printf("Digite sua idade: ");
    if (fgets(linha, sizeof(linha), stdin) && sscanf(linha, "%d", &idade) == 1) {
        printf("Olá, %s. Você tem %d anos.\n", nome, idade);
    } else {
        printf("Idade inválida.\n");
    }

    return 0;
}
```

---

Atualizado: 2025-10-17
Pequenas melhorias de apresentação e exemplos funcionais. Se quiser, posso:
- adicionar mais exemplos práticos,
- traduzir para slides Markdown,
- ou criar exercícios com soluções.
```
