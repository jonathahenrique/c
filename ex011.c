#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int num;

    printf("<<< EX011 - Par ou �mpar >>>\n\n");
    printf("Digite um n�mero para descobrir se ele � PAR OU �MPAR: ");
    scanf("%d", &num);

    printf("O n�mero que voc� digitou � %s!", (num % 2 == 0)?"PAR":"�MPAR");
}
