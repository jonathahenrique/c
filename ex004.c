#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    char nome_a[30], nome_b[30], nome_c[30];
    char sexo_a, sexo_b, sexo_c;
    float nota_a, nota_b, nota_c;

    printf("------<<< EX004 - Listagem >>>------\n\n");

    printf("Cadastrando a primeira pessoa:\n------------------------------\n");
    printf("NOME: ");
    gets(nome_a);

    printf("SEXO [M/F]: ");
    sexo_a = getchar();

    printf ("NOTA: ");
    scanf("%f", &nota_a);

    printf("\nCadastrando a segunda pessoa:\n------------------------------\n");

    printf("NOME: ");
    fflush(stdin);
    gets(nome_b);

    printf("SEXO [M/F]: ");
    fflush(stdin);
    sexo_b = getchar();

    printf ("NOTA: ");
    scanf("%f", &nota_b);

    printf("\nCadastrando a terceira pessoa:\n------------------------------\n");
    printf("NOME: ");
    fflush(stdin);
    gets(nome_c);

    printf("SEXO [M/F]: ");
    fflush(stdin);
    sexo_c = getchar();

    printf ("NOTA: ");
    scanf("%f", &nota_c);

    printf("\nListagem Completa\n------------------------------\n");
    printf("NOME\t\t   SEXO  NOTA\n");
    printf("%-20s %c %6.1f\n", nome_a, sexo_a, nota_a); //REVISAR LAYOUT DE EXIBIÇÃO.
    printf("%-20s %c %6.1f\n", nome_b, sexo_b, nota_b);
    printf("%-20s %c %6.1f\n", nome_c, sexo_c, nota_c);
    system("pause");
}
