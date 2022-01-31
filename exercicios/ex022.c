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

    printf("<<< EX022 - D� para ver o filme: >>>\n\n");
    printf("============== CINEMA ESTUDONAUTA ==============\n");
    printf("HOR�RIO DO FILME: 19H - PRE�O DO INGRESSO: R$20\n");
    printf("------------------------------------------------\n");

    if(hora>18){
        printf("N�o � poss�vel ver o filme hoje pois a se��o j� foi iniciada.");
    }
    else{
        printf("Agora � %dh%d, ainda d� tempo de ver o filme!\n", hora, min);
        printf("Quanto de dinheiro voc� tem? ");
        scanf("%f", &dinheiro);
        if(dinheiro>=20){
            printf("Voc� pode comprar o ingresso para assistir o filme!");
        }
        else{
            printf("Apesar de dar tempo, voc� n�o tem dinheiro suficiente!");
        }
    }
    system("PAUSE");
}
