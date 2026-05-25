#include <stdio.h>

int main(){

    float alc, gas, desc, litros, final, preco, total;
    int opc;

    printf("******************************\n");
    printf("1- A Alcool\n");
    printf("2- G Gasolina\n");
    printf("******************************\n");
    printf("Insira ocombustivel que voce deseja: ");
    scanf("%d", &opc);

    printf("Insira a quantidade de combusivel: ");
            scanf("%f", &litros);


    switch (opc)
    {
    case 1:
        if(litros <= 20){

            preco = 2.89;

            total = litros * preco;
            desc = total * 0.03;
            final = total - desc;

            printf("Voce ira pagar:R$%.2f", final);
        }
        else{
            preco = 2.89;
            
            total = litros * preco;
            desc = total * 0.05;
            final = total - desc;

            printf("Voce ira pagar:R$%.2f", final);
        }
        break;

        case 2:
        if(litros <= 20){
            
            preco = 4.95;
            
            total = litros * preco;
            desc = total * 0.04;
            final = total - desc;

            printf("Voce ira pagar:R$%.2f", final);
        }
        else{
            preco = 4.95;
            
            total = litros * preco;
            desc = total * 0.06;
            final = total - desc;

            printf("Voce ira pagar:R$%.2f", final);
        }
        break;
    default:
    printf("Opçao invalida");
        break;
    }
    return 0;
}