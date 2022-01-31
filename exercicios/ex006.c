#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int n1;

    printf("<<< EX006 - Antecessor e Sucessor >>>\n\n");
    printf("Digite um número: ");
    scanf("%d", &n1);

    int a1 = n1 - 1;
    int s1 = n1 + 1;

    printf("Analisando o número %d, seu antecessor é %d e seu sucessor é %d.", n1, a1, s1);
}
