#include <stdio.h>
#include <locale.h>
#include <time.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    int dia = data->tm_mday;
    int mes = data->tm_mon +1;
    int ano = data->tm_year + 1900;
    data->
    printf("Estamos no dia %d do m�s %d de %d", dia, mes, ano);
}
