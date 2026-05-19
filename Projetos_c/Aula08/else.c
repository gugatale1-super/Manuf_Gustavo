#include <stdio.h>

int main() {

    int idade;
    int altura;
    printf("Insira sua altura: ");
    scanf("%d", &altura);

    if (altura >= 160)
    {
        printf("Insira sua idade: ");
        scanf("%d", &idade);
       if (idade <= 17)
       {
        printf("nao autorizado");
       }
       else printf( "autorizado");
        
    }
    else 
        printf("cresca mais");







}