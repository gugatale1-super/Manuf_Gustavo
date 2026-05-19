#include <stdio.h>

int main () {
    char opcao;

    printf("Digite o turno em que você estuda: ");
    scanf(" %c", &opcao);

        if (opcao == 'M')
        {
            printf("Bom dia!");
        }
        else if (opcao == 'V')
        {
            printf("Boa tarde!");
        }
        else if (opcao == 'N')
        {
            printf("Boa noite!");
        }
        
    
    else {
        printf("Periodo invalido");
    }


     
}