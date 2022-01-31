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
    printf("+\tAdição\n");
    printf("-\tSubtração\n");
    printf("*\tMultiplicação\n");
    printf("/\tDivisão\n");
    printf("=======================\n");

    printf("Digite sua opção:=> ");
    fflush(stdin);
    opr = getchar();

    switch(opr){
        case '+':
            res = v1 + v2;
            printf("\n---------------------------------------------------\n");
            printf("O resultado de %d + %d é igual a %.f.", v1, v2, res);
            printf("\n---------------------------------------------------\n");
            break;
        case '-':
            res = v1 - v2;
            printf("\n---------------------------------------------------\n");
            printf("O resultado de %d - %d é igual a %.f.", v1, v2, res);
            printf("\n---------------------------------------------------\n");
            break;
        case '*':
            res = v1 * v2;
            printf("\n---------------------------------------------------\n");
            printf("O resultado de %d * %d é igual a %.f.", v1, v2, res);
            printf("\n---------------------------------------------------\n");
            break;
        case '/':
            res = (float)v1 / (float)v2;
            printf("\n---------------------------------------------------\n");
            printf("O resultado de %d / %d é igual a %.2f.", v1, v2, res);
            printf("\n---------------------------------------------------\n");
            break;
        default:
            printf("Não foi possível fazer a operação. Tente novamente.\n");
    }
    printf("VOLTE SEMPRE!\n");
}
