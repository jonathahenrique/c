#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
   /* int a = 4, b = 8;
    int c = (a>b)?1:2;

    printf("O resultado � %d\n", c);

    float media = 5.5;
    //sit=(media>=7)?"Aprovado":"Reprovado";
    printf("Sua situa��o �: %s", (media>=5)?"Aprovado":"Reprovado");
   */
    int n1, n2;
    printf("Digite um n�mero: ");
    scanf("%d", &n1);
    printf("Digite outro n�mero: ");
    scanf("%d", &n2);
    int maior = (n1>n2)?n1:n2;
    printf("Entre os n�meros %d e %d, o maior n�mero � o %d.", n1, n2, maior);
}
