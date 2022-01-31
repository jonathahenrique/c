#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int num;
    printf("Entre com um inteiro:\n");

    scanf("%d", &num);

    num = num + num%3;

    printf("num = %d \n", num);

}

