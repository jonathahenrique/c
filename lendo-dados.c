#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int num;
    float med;
    char l;
    char nome[30];

    //lendo números inteiros e reais.
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    printf("Digite um número real: ");
    scanf("%f", &med);
    printf("Você inseriu o número inteiro: %d, e o número real: %.2f. Obrigado!\n", num, med);

    //lendo caracter.
    printf("Agora digite uma letra: ");
    fflush(stdin);
    //scanf("%c",&l);
    l = getchar(); //recomendado para ler um caracter, getchar ao invés do scanf.
    printf("Você digitou a letra %c\n", l);

    //lendo string.
    printf("Por fim, digite seu nome: ");
    //scanf("%s", nome);
    fflush(stdin);
    gets(nome); //recomendado para ler Strings
    printf("Muito obrigado por participar %s!\n\n", nome);
    system("pause");
}
