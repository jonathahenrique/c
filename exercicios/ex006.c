#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int n1;

    printf("<<< EX006 - Antecessor e Sucessor >>>\n\n");
    printf("Digite um n�mero: ");
    scanf("%d", &n1);

    int a1 = n1 - 1;
    int s1 = n1 + 1;

    printf("Analisando o n�mero %d, seu antecessor � %d e seu sucessor � %d.", n1, a1, s1);
}
