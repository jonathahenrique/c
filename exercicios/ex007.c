#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int n1;

    printf("<<< EX007 - Dobro e Ter�a Parte >>>\n\n");
    printf("Digite um n�mero: ");
    scanf("%d", &n1);

    int d1 = n1 * 2;
    float tp1 = (float)n1 / 3;

    printf("Analisando o n�mero %d, seu dobro � %d e sua ter�a parte � %.2f.", n1, d1, tp1);
}
