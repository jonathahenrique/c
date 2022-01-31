#include <stdio.h>
#include <locale.h>
#include <time.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    float vel;
    printf("Insira uma velocidade: ");
    scanf("%f", &vel);

    if (vel>80){
        printf("Multado!\n");
    }
    printf("Se beber, não dirija!");
}
