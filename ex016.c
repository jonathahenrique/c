#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    float valorc, desc, valorfinal;

    printf("<<< EX016 - Consumidor ganha desconto >>>\n\n");
    printf("Qual foi o valor total das compras? R$");
    scanf("%f", &valorc);
    printf("\n---------------------------------------------------------------------------\n");
    printf("Voc� comprou %.2f na nossa loja. ", valorc);
    desc =  valorc * 10 / 100;
    valorfinal = valorc - desc;

    if (valorc > 500){
        printf("\n================ ATEN��O ================\n");
        printf("Por fazer mais de R$500 em compras, voc� vai receber 10%% de desconto. No seu caso o desconto ser� de %.2f.\n", desc);
        printf("O valor a ser pago � R$%.2f! ", valorfinal);
    }
    printf("Obrigado, volte sempre!");
    printf("\n---------------------------------------------------------------------------\n");
}
