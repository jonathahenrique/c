#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    char nome[20];
    float nota1, nota2, media;

    printf("<<< EX009 - Média do Aluno >>>\n\n");
    printf("Nome do aluno: ");
    gets(nome);
    printf("Nota 1: ");
    scanf("%f", &nota1);
    printf("Nota 2: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;
    printf("O aluno %s tirou as notas %.1f e %.1f finalizando com a média %.1f\n", nome, nota1, nota2, media);
}
