#include <stdio.h>
#include <locale.h>
#include <time.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int anonasc, mesnasc, dianasc, idade;
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    int anoatual = data->tm_year + 1900;
    int mesatual = data->tm_mon + 1;
    int diahoje = data->tm_mday;

    //menu
    printf("<<< EX017 - Verificando Idade em Fila de banco >>>\n\n");

    printf("Qual o dia do seu nascimento? ");
    scanf("%d", &dianasc);
    printf("De qual mês? (Digite o número do Mês) ");
    fflush(stdin);
    scanf("%d", &mesnasc);
    printf("Em que ano? ");
    fflush(stdin);
    scanf("%d", &anonasc);


    if( mesnasc <= mesatual && dianasc <= diahoje){
        idade = anoatual - anonasc;
    }
    else {
        idade = anoatual - anonasc;
        idade--;
    }

    printf("------------------------------------\n");
    printf("Você tem %d anos, certo?\n", idade);
    printf("Seja bem-vindo(a) ao banco SIPRODIBANK!\n");

    if(idade >= 65){
        printf("=== ATENÇÃO! DIRIJA-SE PARA A FILA PREFERENCIAL ===\n");
    }


    printf("------------------------------------\n");
    system("PAUSE");
}
