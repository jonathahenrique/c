#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int contini, contfim;

    printf("Quer come�ar a contar de qual n�mero? ");
    scanf("%d", &contini);
    printf("Quer terminar de contar em qual? ");
    scanf("%d", &contfim);

    if(contini<contfim){
        while(contini<=contfim){
        printf("%d\n", contini);
        contini++;
    }
    }

    printf("Terminei a contagem!");
}
