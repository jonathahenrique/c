#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int valor1, valor2;

    printf("<<< EX013 - Operadores Bitwise >>>\n\n");
    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);
    printf("\n------ OPERAÇÕES BITWISE ------\n");

    int e = valor1 & valor2;
    int ou = valor1 | valor2;
    int ex = valor1 ^ valor2;

    printf("Calculando %d & %d é igual a %d\n", valor1, valor2, e);
    printf("Calculando %d | %d é igual a %d\n", valor1, valor2, ou);
    printf("Calculando %d ^ %d é igual a %d\n", valor1, valor2, ex);
}
