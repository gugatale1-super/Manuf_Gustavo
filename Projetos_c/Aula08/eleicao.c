#include <stdio.h>

int main() {
//entrada
    float divisao;
    int soma, A, B, C, nulo, branco;
    float pA, pValido, pB, pC, pnulo, pbranco;
    printf("Insira quantas pessoas que votaram no candidato A: ");
    scanf("%d", &A);
     printf("Insira quantas pessoas que votaram no candidato B: ");
    scanf("%d", &B);
     printf("Insira quantas pessoas que votaram no candidato C: ");
    scanf("%d", &C);
     printf("Insira quantas pessoas que votaram nulo: ");
    scanf("%d", &nulo);
     printf("Insira quantas pessoas que votaram em branco: ");
    scanf("%d", &branco);
    printf("\n");
//processamento
    
    soma = A + B + C + nulo + branco;
    pValido = ((float)( A + B + C) / soma) * 100;
    pA = ((float) A / soma) * 100;
    pB = ((float) B / soma) * 100;
    pC = ((float) C / soma) * 100;
    pnulo = ((float) nulo / soma) * 100;
    pbranco = ((float) branco / soma) * 100;


    
    
//saida
    printf("--- resultados da eleicao ---\n");
    printf("Total de eleitores: %d\n", soma);
    printf("Percentual de votos validos: %.2f%%\n", pValido);
    printf("Percentual Candidato A: %.2f%%\n", pA);
    printf("Perccentual Candidato B: %.2f%%\n", pB);
    printf("Percentual Candidato C: %.2f%%\n", pC);
    printf("Percentual votos nulos: %.2f%%\n", pnulo);
    printf("PErcentual votos em branco: %.2f%%\n", pbranco);
   

}