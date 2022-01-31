#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    float price;
    int opt;

    printf("<<< EX030 - Pre�o por �poca >>>\n\n");
    printf("Digite o pre�o de um produto: R$");
    fflush(stdin);
    scanf("%f", &price);

    printf("\n\t  ESCOLHA UM PER�ODO\n");
    printf("\t===============================\n");
    printf("\t1\tCarnaval [+10%%]\n");
    printf("\t2\tF�rias Escolares [+20%%]\n");
    printf("\t3\tDia das Crian�as [+5%%]\n");
    printf("\t4\tBlack Friday [-30%%]\n");
    printf("\t5\tNatal [-5%%]\n");
    printf("\t===============================\n");
    printf("\tDigite sua op��o =>: ");
    fflush(stdin);
    scanf("%d", &opt);

    switch(opt){
        case 1:
            price = price + price * 10 / 100;
            printf("\n-----------------------------------------------\n");
            printf("Na �poca do CARNAVAL, o pre�o do produto vai para %.2f", price);
            printf("\n-----------------------------------------------\n");
            break;
        case 2:
            price = price + price * 20 / 100;
            printf("\n-----------------------------------------------\n");
            printf("Na �poca das F�rias Escolares, o pre�o do produto vai para %.2f", price);
            printf("\n-----------------------------------------------\n");
            break;
        case 3:
            price = price + price * 5 / 100;
            printf("\n-----------------------------------------------\n");
            printf("Na �poca do Dia das Crian�as, o pre�o do produto vai para %.2f", price);
            printf("\n-----------------------------------------------\n");
            break;
        case 4:
            price = price - price * 30 / 100;
            printf("\n-----------------------------------------------\n");
            printf("Na �poca do BLACK FRIDAY, o pre�o do produto vai para %.2f", price);
            printf("\n-----------------------------------------------\n");
            break;
        case 5:
            price = price - price * 5 / 100;
            printf("\n-----------------------------------------------\n");
            printf("Na �poca do NATAL, o pre�o do produto vai para %.2f", price);
            printf("\n-----------------------------------------------\n");
            break;
        default:
            printf("\nOP��O INV�LIDA\n");
            break;
    }
    printf("\nObrigado por participar!\n");
    system("PAUSE");
}
