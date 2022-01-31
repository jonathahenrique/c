#include <stdio.h>
#include <locale.h>
#include <string.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    char nome1[10];
    char nome2[10];

    printf("Digite um nome: ");
    gets(nome1);
    printf("Digite outro nome: ");
    fflush(stdin);
    gets(nome2);

    char sit[10];
    int res = strcmp(nome1, nome2);
    strcpy (sit, (res<1)?"IGUAIS":"DIFERENTES");
    fflush(stdin);
    printf("Comparando os nomes %s e %s chegamos a conclusão de que são %s", nome1, nome2, sit);
}
