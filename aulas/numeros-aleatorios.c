#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL)); //Gerar número automático
    int n = rand() % 10; //Gera entre 0 e 9
    printf("Eu gerei o número (%d)", n);
}
