#include <stdio.h>
#include <locale.h>
#include <time.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int hora, min;
    float dinheiro;

    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    hora = data->tm_hour;
    min = data->tm_min;

    printf("<<< EX022 - Dá para ver o filme: >>>\n\n");
    printf("============== CINEMA ESTUDONAUTA ==============\n");
    printf("HORÁRIO DO FILME: 19H - PREÇO DO INGRESSO: R$20\n");
    printf("------------------------------------------------\n");

    if(hora>18){
        printf("Não é possível ver o filme hoje pois a seção já foi iniciada.");
    }
    else{
        printf("Agora é %dh%d, ainda dá tempo de ver o filme!\n", hora, min);
        printf("Quanto de dinheiro você tem? ");
        scanf("%f", &dinheiro);
        if(dinheiro>=20){
            printf("Você pode comprar o ingresso para assistir o filme!");
        }
        else{
            printf("Apesar de dar tempo, você não tem dinheiro suficiente!");
        }
    }
    system("PAUSE");
}
