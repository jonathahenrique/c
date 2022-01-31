#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    float peso;
    int opt;

    printf("<<< EX 029 - Seu peso nos Planetas v1.0 >>>\n\n");
    printf("Seu peso atual na terra (Kg): ");
    fflush(stdin);
    scanf("%f", &peso);

    printf("\n\t  ESCOLHA UM PLANETA\n");
    printf("\t======================\n");
    printf("\t1\tMercúrio\n");
    printf("\t2\tVênus\n");
    printf("\t3\tMarte\n");
    printf("\t4\tJúpiter\n");
    printf("\t5\tSaturno\n");
    printf("\t6\tUrano\n");
    printf("\t======================\n");
    printf("Digite sua opção =>: ");
    fflush(stdin);
    scanf("%d", &opt);

    switch(opt){
        case 1:
            peso = peso * 0.38;
            printf("\n-----------------------------------------------\n");
            printf("No planeta MERCÚRIO, seu peso seria %.2f", peso);
            printf("\n-----------------------------------------------\n");
            break;
        case 2:
            peso *= 0.91;
            printf("\n-----------------------------------------------\n");
            printf("No planeta VÊNUS, seu peso seria %.2f", peso);
            printf("\n-----------------------------------------------\n");
            break;
        case 3:
            peso *= 0.38;
            printf("\n-----------------------------------------------\n");
            printf("No planeta Marte, seu peso seria %.2f", peso);
            printf("\n-----------------------------------------------\n");
            break;
        case 4:
            peso *= 2.34;
            printf("\n-----------------------------------------------\n");
            printf("No planeta Júpiter, seu peso seria %.2f", peso);
            printf("\n-----------------------------------------------\n");
            break;
        case 5:
            peso *= 1.06;
            printf("\n-----------------------------------------------\n");
            printf("No planeta Saturno, seu peso seria %.2f", peso);
            printf("\n-----------------------------------------------\n");
            break;
        case 6:
            peso *= 0.92;
            printf("\n-----------------------------------------------\n");
            printf("No planeta Urano, seu peso seria %.2f", peso);
            printf("\n-----------------------------------------------\n");
            break;
        default:
            printf("\nOPÇÃO INVÁLIDA\n");
            break;
    }
    printf("\nObrigado por participar!\n");
    system("PAUSE");
}
