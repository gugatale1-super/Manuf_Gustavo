#include <stdio.h>

int main(){

    int num1, tabuada, resut, i;

    printf("******************************\n");
    printf("Qual a tabuada desejada: ");
    scanf("%d", &num1);
    printf("******************************\n");

    for(i = 1; i <= 10; i++){
        printf(" %d x %d = %d \n", i, num1, i * num1);
    }
    return 0;
}       