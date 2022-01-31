#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int a = 4, b = 3, c = 2;
    printf("%s\n", a>b && a>c?"VERDADEIRO":"FALSO");
    printf("%s", a>b || a<c && !c!=4?"VERDADEIRO":"FALSO");
}
