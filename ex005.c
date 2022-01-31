#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    int numpalpite;
    int randomnum = rand() % 6;

    printf("<<< EX005 - Ser� que voc� acerta? >>>\n\n");
    printf("Vou pensar em um n�mero entre 1 e 5. Tente adivinhar!\n");
    printf("Qual � o seu palpite? ");
    scanf("%d", &numpalpite);

    printf("\n----- RESULTADO -----\n\n");
    printf("Eu pensei no n�mero %d e voc� pensou no %d.\n", randomnum, numpalpite);

    if(randomnum == numpalpite){
        printf("Parab�ns, voc� acertou!");
    }
    else {
        printf("Que pena, voc� errou!");
    }
}
