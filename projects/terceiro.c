#include <stdio.h>  

typedef struct { // A função é um protótipo
    int a;
    int b;  
} Calc; // Estou definindo um tipo customizavel do programa que representa calculadora, usando o recurso de struct de 'C'
Calc init(int a, int b); // Calc aqui é uma função que retorna uma calculadora

int soma(Calc c){
    return c.a + c.b;
}

int main() {
    Calc calculadora = {2,3};
    int resultado = soma(calculadora);
    printf("O resultado da soma é: %d\n:", resultado);
    return 0;
}