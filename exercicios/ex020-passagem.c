#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int viagem;
    float total;

    printf("<<< EX020 - Preço da Passagem >>>\n\n");
    printf("------- TABELA DE PREÇOS -------\n");
    printf("Viagens até 200 Km\tR$0,50/Km\n");
    printf("A partir de 200 Km\tR$0,35/Km\n");
    printf("---------------------------------\n");
    printf("Distância total da viagem (em Km): ");
    scanf("%d", &viagem);

    if(viagem<=200){
        total = viagem * 0.5;
        printf("Uma viagem de %dKm custará R$0,50/Km\n", viagem);
    }
    else{
        total = viagem * 0.35;
        printf("Uma viagem de %dKm custará R$0,35/Km\n", viagem);
    }
    printf("Valor total: R$%.2f\n", total);
    system("PAUSE");
}
