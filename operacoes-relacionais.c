#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int a = 5;
    int b = 6;
    int c = (a==b);

    printf("O resultado é %d", c);
}
