#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL)); //Gerar n�mero autom�tico
    int n = rand() % 10; //Gera entre 0 e 9
    printf("Eu gerei o n�mero (%d)", n);
}
