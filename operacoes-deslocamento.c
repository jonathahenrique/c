#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int n = 15 << 1;

    printf("O resultado foi %d", n);
}
