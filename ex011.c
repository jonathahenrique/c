#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int num;

    printf("<<< EX011 - Par ou Ímpar >>>\n\n");
    printf("Digite um número para descobrir se ele é PAR OU ÍMPAR: ");
    scanf("%d", &num);

    printf("O número que você digitou é %s!", (num % 2 == 0)?"PAR":"ÍMPAR");
}
