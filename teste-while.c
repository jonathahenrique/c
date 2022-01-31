#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int cont = 1, r = 0, n;

    while(cont<=5){
    printf("Digite o %d valor: ", cont);
    scanf("%d", &n);
    r += n;
    cont++;
    }
    printf("A soma de todos números digitados é: %d", r);
}
