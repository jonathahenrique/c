#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int aux,ind, vet [8] = {5,1,4,2,7,8,3,6};
   /* printf("Digite um número: ");
    scanf("%d", &num);
    for(cont=1;cont<=40;cont++){
        printf("\nNumero lido: %d", num);
        num++;
        }*/
    for(ind=15;ind>=4;cont--)

   {

      aux=vet[7-ind];

      vet[7-ind]=vet[ind];

      vet[ind]=aux;

   }
   printf("vet %d", vet);
}
