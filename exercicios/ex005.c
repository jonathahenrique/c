#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    int numpalpite;
    int randomnum = rand() % 6;

    printf("<<< EX005 - Será que você acerta? >>>\n\n");
    printf("Vou pensar em um número entre 1 e 5. Tente adivinhar!\n");
    printf("Qual é o seu palpite? ");
    scanf("%d", &numpalpite);

    printf("\n----- RESULTADO -----\n\n");
    printf("Eu pensei no número %d e você pensou no %d.\n", randomnum, numpalpite);

    if(randomnum == numpalpite){
        printf("Parabéns, você acertou!");
    }
    else {
        printf("Que pena, você errou!");
    }
}
