#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    printf("<<< EX012 - Situa��o do Aluno >>>\n\n");
    float n1, n2;

    printf("Primeira nota: ");
    scanf("%f", &n1);
    printf("Segunda nota: ");
    scanf("%f", &n2);

    float media = (n1 + n2) / 2;
    printf("A m�dia do aluno foi %.1f\n", media);
    printf("A situa��o �: %s",(media>=5)?"APROVADO":"REPROVADO");
}
