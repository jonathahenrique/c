#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int num, tot;
    char opt;

    do{
    printf("Digite um valor: ", num);
    fflush(stdin);
    scanf("%d", &num);
    tot += num;
    printf("Você quer continuar[S/N]? ");
    fflush(stdin);
    opt = getchar();
    } while(opt == 'S' || opt == 's');
    printf("\nA soma de todos números digitados é: %d\n", tot);
    printf("FIM");
}
