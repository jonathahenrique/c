#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int num, oposto;
    float inverso;

    printf("<<< EX021 - Inverso ou Oposto >>>\n\n");
    printf("Digite um n�mero: ");
    scanf("%d", &num);

    if(num>0){
        inverso = 1 / (float)num;
        printf("O inverso de %d � igual a %f\n", num, inverso);
    }
    else if(num==0){
        printf("Tudo feito com zero � igual a 0.\n");
    }
    else{
        oposto = num * -1;
        printf("O oposto de %d � igual a %d.\n", num, oposto);
    }
}
