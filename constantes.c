#include <stdio.h>
#include <locale.h>
//#define TOTAL 12

void main () {
    setlocale(LC_ALL, "Portuguese");
    const int TOTAL = 12;
    printf("%d", TOTAL);
}
