#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int ano;

    printf("<<< EX019 - Ano Bissexto >>>\n\n");
    printf("Digite um ano qualquer: ");
    scanf("%d", &ano);

    if(ano % 4 == 0){
        printf("%d É um ano BISSEXTO!\n", ano);
    }
    else{
        printf("%d NÃO é um ano BISSEXTO!\n", ano);
    }
    system("PAUSE");
}
