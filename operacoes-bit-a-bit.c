#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int a = 25 & 5;
    printf("O resultado é: %d", a);
}
