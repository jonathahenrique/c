#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int n;
    int des;

    printf("<< EX014 - Operadores de Deslocamento >>>\n\n");
    printf("Digite um n�mero: ");
    scanf("%d", &n);
    printf("Digite um deslocamento: ");
    scanf("%d", &des);

    int right = n >> des;
    int left = n << des;

    printf("\n------ OPERA��ES SHIFT ------\n");
    printf("Calculando %d >> %d � igual a %d\n", n, des, right);
    printf("Calculando %d << %d � igual a %d\n", n, des, left);
}
