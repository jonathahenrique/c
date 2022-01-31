#include <stdio.h>
#include <locale.h>
#include <string.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    char nome[10];
    strcpy(nome, "Jonatha"); //nome = Jonatha;
    int tam = strlen(nome);
    printf("Muito prazer %s! Seu nome tem %d letras", nome, tam);

    char sit[10];
    float media = 7;
    strcpy(sit, (media>=5)?"APROVADO":"REPROVADO");
    printf("\nA situação do aluno é %s\n", sit);

    char s1[] = "Jonatha";
    char s2[] = "Henrique";
    int res = strcmp(s1,s2);
    printf("O resultado da comparação é %d\n", res);
    printf("%s\n", strcat(s1, s2));
}
