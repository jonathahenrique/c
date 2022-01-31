#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    char nproduto[10];
    float preco, desc, preco_final;

    printf("<<< EX010 - Preço do Produto >>>\n\n");
    printf("Produto: ");
    gets(nproduto);
    printf("Preço do %s: R$", nproduto);
    scanf("%f", &preco);
    printf("Desconto (%%): ");
    scanf("%f", &desc);

    preco_final = preco - (preco * desc / 100);

    printf("O produto %s custava R$%.2f, mas com %.2f%% de desconto, passa a custar R$%.2f\n", nproduto, preco, desc, preco_final);
}
