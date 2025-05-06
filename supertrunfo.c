#include <stdio.h>

int main(){

// definido vairaveis

char estado1 , estado2;

//numero da cidade

int cidade1, cidade2;

//nome da cidade

char n1[40], n2[40];

// area e pib e populaçao

float area1, area2;

float pib1, pib2;

float pop1, pop2;

int ponto1, ponto2;

printf("=== bem vindo ao desafio super trunfo === \n");
printf("\n");

printf("=== para começar precisamos cadastrar 2 cartas ===");
printf("\n\n");

printf("para começar digite umma letra de A a H para representar um estado:");
scanf("%s", &estado1);
printf("\n");

printf("agora digite umm numero de 1 a 4 para representar o codigo de sua carta:");
scanf("%d", &cidade1);
printf("\n");

printf("agora digite o nome de uma cidade:");
scanf("%s", n1);
printf("\n");

printf("digite a area da cidade:");
scanf("%f", &area1);
printf("\n");

printf("digite a populaçao da cidade:");
scanf("%f", &pop1);
printf("\n");

printf("digite o PIB da cidade:");
scanf("%f", &pib1);
printf("\n");

printf("digite a quantidade de pontos turisticos no local:");
scanf("%d", &ponto1);
printf("\n");

printf("estado e: %s \n", &estado1);
printf("codigo e: %d \n", cidade1);
printf("nome e : %s \n", n1);
printf("area e : %.3f \n", area1);
printf("pop: %.3f \n", pop1);
printf("PIB e : %.2f \n", pib1);
printf("ponto 1 e : %d", ponto1);

return (0);






}