#include <stdio.h>
#include <locale.h>
#include <time.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    float nota1, nota2, media;

    printf("<<< EX015 - Bons alunos merecem parabéns >>>\n\n");
    printf("Digite a sua primeira nota: ");
    fflush(stdin);
    scanf("%f", &nota1);
    printf("Digite a sua segunda nota: ");
    fflush(stdin);
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("\n----------------------------------------\n");
    if (media>7){
        printf("MEUS PARABÉNS! ");
    }
    printf("A sua média final foi %.1f", media);
    printf("\n----------------------------------------\n");
}
