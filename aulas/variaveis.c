#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    unsigned int idade = 20;
    float peso = 74.5;
    char sexo = 'M';
    char nome[] = "Jonatha";

    printf("%s é do sexo %c, tem %d anos de idade, e atualmente está pesando %.1fKg\n", nome, sexo, idade, peso);
}
