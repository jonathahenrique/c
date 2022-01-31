#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int v1, v2;
    float res;
    char opr;

    printf("<<< EX028 - Super Calculadora v1.0\n\n");
    printf("VALOR 1: ");
    scanf("%d", &v1);
    printf("VALOR 2: ");
    fflush(stdin);
    scanf("%d", &v2);

    printf("=======================\n");
    printf("+\tAdi��o\n");
    printf("-\tSubtra��o\n");
    printf("*\tMultiplica��o\n");
    printf("/\tDivis�o\n");
    printf("=======================\n");

    printf("Digite sua op��o:=> ");
    fflush(stdin);
    opr = getchar();

    switch(opr){
        case '+':
            res = v1 + v2;
            printf("\n---------------------------------------------------\n");
            printf("O resultado de %d + %d � igual a %.f.", v1, v2, res);
            printf("\n---------------------------------------------------\n");
            break;
        case '-':
            res = v1 - v2;
            printf("\n---------------------------------------------------\n");
            printf("O resultado de %d - %d � igual a %.f.", v1, v2, res);
            printf("\n---------------------------------------------------\n");
            break;
        case '*':
            res = v1 * v2;
            printf("\n---------------------------------------------------\n");
            printf("O resultado de %d * %d � igual a %.f.", v1, v2, res);
            printf("\n---------------------------------------------------\n");
            break;
        case '/':
            res = (float)v1 / (float)v2;
            printf("\n---------------------------------------------------\n");
            printf("O resultado de %d / %d � igual a %.2f.", v1, v2, res);
            printf("\n---------------------------------------------------\n");
            break;
        default:
            printf("N�o foi poss�vel fazer a opera��o. Tente novamente.\n");
    }
    printf("VOLTE SEMPRE!\n");
}
