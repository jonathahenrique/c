#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    char letra, letra_a, letra_b;

    printf("<<< EX008 - Alfabeto >>>\n\n");
    printf("Digite uma letra: ");
    letra = getchar();

    letra_a = letra - 1;
    letra_b = letra + 1;

    printf("Antes da letra %c temos a letra %c. Depois temos a letra %c.", letra, letra_a, letra_b);
}
