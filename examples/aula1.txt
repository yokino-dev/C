1️⃣ #include <stdio.h>

Importa funções de entrada e saída, como printf e scanf.

Necessário para qualquer programa que leia ou escreva dados na tela ou no teclado.

2️⃣ int main()

Função principal do programa.

É o ponto de início da execução.

int indica que a função retorna um número inteiro ao sistema operacional (0 significa que terminou sem erro).

3️⃣ Comentários

// → comentário de uma linha.

/* ... */ → comentário de múltiplas linhas.

Servem para explicar o código; não afetam a execução.

4️⃣ Variáveis e tipos

int → números inteiros.

float → números decimais (menos precisão).

double → números decimais com mais precisão.

char → um único caractere.

char[] → texto ou sequência de caracteres (string).

5️⃣ printf

Mostra informações na tela.

Pode usar especificadores de formato:

%d → inteiro

%f → decimal

%s → string

%c → caractere

\n → quebra de linha

6️⃣ scanf

Lê dados digitados pelo usuário.

Necessário usar & para tipos numéricos (como int e float) para passar o endereço da variável.

%d → lê inteiro

%s → lê string (até o primeiro espaço; não precisa de &)

7️⃣ \n

Caractere especial que quebra a linha.

Usado dentro de strings em printf ou puts para pular para a linha de baixo.

8️⃣ %d

Especificador de formato para números inteiros.

Usado em printf para mostrar inteiros e em scanf para ler inteiros.

9️⃣ %s

Especificador de formato para strings (texto).

No printf → exibe o conteúdo da string.

No scanf → lê uma palavra (até o primeiro espaço).

🔟 Funções

Blocos de código que realizam tarefas específicas.

Podem receber parâmetros e retornar valores.

Chamadas dentro de printf ou separadamente.

1️⃣1️⃣ Estruturas de decisão

if → executa código se a condição for verdadeira.

else → executa código se a condição for falsa.

1️⃣2️⃣ Estruturas de repetição

for → repete código um número definido de vezes.

while → repete código enquanto a condição for verdadeira.

1️⃣3️⃣ Problemas comuns com scanf

Digitar letras quando se espera número → causa erro de conversão.

%s lê apenas até o primeiro espaço, então nomes com espaços podem ser cortados.

1️⃣4️⃣ fgets + sscanf

fgets → lê linha inteira (incluindo espaços), mais seguro que %s.

sscanf → converte strings para outros tipos (ex: de texto para inteiro), evitando erro ao ler números digitados incorretamente.
