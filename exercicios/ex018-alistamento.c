#include <stdio.h>
#include <locale.h>
#include <time.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    int dia, mes, ano, hoje, mesatual, anoatual, horario, idade,tempo;

    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    hoje = data->tm_mday;
    mesatual = data->tm_mon + 1;
    anoatual = data->tm_year + 1900;
    horario = data->tm_hour;

    printf("<<< EX018 - Serviço Militar v1.0\n\n");

    if(horario >= 0 && horario < 12){
        printf("Bom dia! ");
    }
    else if(horario >=12 && horario <18) {
        printf("Boa tarde! ");
    }
    else {
        printf("Boa noite! ");
    }

    printf("Para iniciarmos a verificação\npreciso de algumas informações sua...\n");
    printf("\n========= DATA DE NASCIMENTO =========\n");
    printf("Por favor registre as informações abaixo.\n\n");
    printf("Dia do nascimento: ");
    scanf("%d", &dia);
    printf("Mês(Informe o número): ");
    fflush(stdin);
    scanf("%d", &mes);
    printf("Ano: ");
    scanf("%d", &ano);

    printf("\nAtualmente estamos em %d.\n", anoatual);
    printf("Conforme sua data de nascimento em \"%d/%d/%d\"\n", dia, mes, ano);

    idade = anoatual - ano;
    tempo = idade - 18;

    if(tempo < 0){
        tempo *= -1;
    }

    if(mes >= mesatual && dia > hoje){
        idade--;
    }

    printf("Você tem %d anos. ", idade, tempo);

    if(anoatual - ano == 18){
        printf("É o ano de seu alistamento,\ncaso ainda não tenha feito, faça agora!\n\n");
    }
    else if(idade>18){
        printf("Já se passaram %d anos da sua data de alistamento.\n\n", tempo);
    }
    else{
        printf("Você precisará se alistar apenas daqui a %d anos.\n\n", tempo);
    }
    system("PAUSE");
}
