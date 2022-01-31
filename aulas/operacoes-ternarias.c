#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
   /* int a = 4, b = 8;
    int c = (a>b)?1:2;

    printf("O resultado é %d\n", c);

    float media = 5.5;
    //sit=(media>=7)?"Aprovado":"Reprovado";
    printf("Sua situação é: %s", (media>=5)?"Aprovado":"Reprovado");
   */
    int n1, n2;
    printf("Digite um número: ");
    scanf("%d", &n1);
    printf("Digite outro número: ");
    scanf("%d", &n2);
    int maior = (n1>n2)?n1:n2;
    printf("Entre os números %d e %d, o maior número é o %d.", n1, n2, maior);
}
