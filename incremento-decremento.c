#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int n = 8;
    //n++;
    printf("O resultado é %d\n", n++);
    printf("No final vale %d", n);
}
