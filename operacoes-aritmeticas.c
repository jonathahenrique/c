#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    float n1 = 8;
    float n2 = 7;
    float res = (n1 + n2) / 2;
    printf("A m�dia entre %.1f e %.1f � de: %.1f", n1, n2, res);

    float preco = 1000;
    float desconto = (preco * 10 / 100);
    float valorfinal = preco - desconto;
    printf("\n\nO desconto de 10%% aplicado sobre %.2f � de: %.2f\n", preco, desconto);
    printf("Diante disso o valor final com desconto aplicado ficar�: %.2f\n", valorfinal);
}
