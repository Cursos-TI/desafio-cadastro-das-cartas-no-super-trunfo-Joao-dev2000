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

printf("para começar digite uma letra de A a H para representar um estado:");
scanf("%s", &estado1);
printf("\n");

printf("agora digite um numero de 1 a 4 para representar o codigo de sua carta:");
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

printf("ok voce acabou de cadastrar a 1 carta vamos para segunda carta");
printf("\n\n");

printf("digite uma letra de A a H para representar um estado:");
scanf("%s", &estado2);
printf("\n");

printf("agora digite um numero de 1 a 4 para representar o codigo de sua carta:");
scanf("%d", &cidade2);
printf("\n");

printf("agora digite o nome de uma cidade:");
scanf("%s", n2);
printf("\n");

printf("digite a area da cidade:");
scanf("%f", &area2);
printf("\n");

printf("digite a populaçao da cidade:");
scanf("%f", &pop2);
printf("\n");

printf("digite o PIB da cidade:");
scanf("%f", &pib2);
printf("\n");

printf("digite a quantidade de pontos turisticos no local:");
scanf("%d", &ponto2);
printf("\n");







}