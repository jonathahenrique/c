#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");

    printf("O %s tem %d anos de idade.\n", "Jonatha", 20);
    printf("Seu peso atual � de %.2fkg\n", 74.5);
    printf("O seu sexo � %c", 'M');
}
