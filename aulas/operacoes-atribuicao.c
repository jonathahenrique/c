#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int a = 6, b = 2, c = 4, d = 8;
    a += 2; //a = a + 2;
    b *= 2; //b = b * 2;
    c /= 2; //c = c / 2;
    d %= 2; //d = d % 2;
    printf("O valores são os seguintes:\nA:%d\nB:%d\nC:%d\nD:%d", a, b, c, d);
}
