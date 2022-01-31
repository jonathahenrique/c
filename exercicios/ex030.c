#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    float price;
    int opt;

    printf("<<< EX030 - Preço por Época >>>\n\n");
    printf("Digite o preço de um produto: R$");
    fflush(stdin);
    scanf("%f", &price);

    printf("\n\t  ESCOLHA UM PERÍODO\n");
    printf("\t===============================\n");
    printf("\t1\tCarnaval [+10%%]\n");
    printf("\t2\tFérias Escolares [+20%%]\n");
    printf("\t3\tDia das Crianças [+5%%]\n");
    printf("\t4\tBlack Friday [-30%%]\n");
    printf("\t5\tNatal [-5%%]\n");
    printf("\t===============================\n");
    printf("\tDigite sua opção =>: ");
    fflush(stdin);
    scanf("%d", &opt);

    switch(opt){
        case 1:
            price = price + price * 10 / 100;
            printf("\n-----------------------------------------------\n");
            printf("Na época do CARNAVAL, o preço do produto vai para %.2f", price);
            printf("\n-----------------------------------------------\n");
            break;
        case 2:
            price = price + price * 20 / 100;
            printf("\n-----------------------------------------------\n");
            printf("Na época das Férias Escolares, o preço do produto vai para %.2f", price);
            printf("\n-----------------------------------------------\n");
            break;
        case 3:
            price = price + price * 5 / 100;
            printf("\n-----------------------------------------------\n");
            printf("Na época do Dia das Crianças, o preço do produto vai para %.2f", price);
            printf("\n-----------------------------------------------\n");
            break;
        case 4:
            price = price - price * 30 / 100;
            printf("\n-----------------------------------------------\n");
            printf("Na época do BLACK FRIDAY, o preço do produto vai para %.2f", price);
            printf("\n-----------------------------------------------\n");
            break;
        case 5:
            price = price - price * 5 / 100;
            printf("\n-----------------------------------------------\n");
            printf("Na época do NATAL, o preço do produto vai para %.2f", price);
            printf("\n-----------------------------------------------\n");
            break;
        default:
            printf("\nOPÇÃO INVÁLIDA\n");
            break;
    }
    printf("\nObrigado por participar!\n");
    system("PAUSE");
}
