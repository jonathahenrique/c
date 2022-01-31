#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int n1;

    printf("<<< EX007 - Dobro e Terça Parte >>>\n\n");
    printf("Digite um número: ");
    scanf("%d", &n1);

    int d1 = n1 * 2;
    float tp1 = (float)n1 / 3;

    printf("Analisando o número %d, seu dobro é %d e sua terça parte é %.2f.", n1, d1, tp1);
}
