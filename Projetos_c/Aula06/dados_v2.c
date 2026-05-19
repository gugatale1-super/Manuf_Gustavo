#include <stdio.h>

int main() {

printf("digite o nome da turma: ");
char (turma) [60];
fgets(turma, sizeof(turma), stdin);
printf("Turma: %s\n", turma);

char uc[60];
printf("Digite a Unidade Curricular: ");
fgets(uc, sizeof(uc), stdin);
printf("UC: %s\n", uc);

char ambiente[20];
printf("Digite a sala de aula: ");
fgets(ambiente, sizeof(ambiente), stdin);
printf("ambiente: %s\n", ambiente);

char nome[80];
printf("Insira seu nome: ");
fgets(nome, sizeof(nome), stdin);
printf("nome : %s\n", nome);

char prato[20];
printf("nome do prato: ");
fgets(prato, sizeof(prato), stdin);
printf("prato: %s\n", prato);
return 0;
}