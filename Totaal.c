/************************************************
* Made by Stefan Koolen			 	*
* My GitHub: http://www.github.com/StefanKoolen *
************************************************/
#include <stdio.h>

main(){

printf("*******************************************************************************\n");
printf("Dit programma rekent precies uit wat je totaal kwijt bent aan je abo!\n");
printf("Gemaakt door Stefan Koolen.\n");
printf("http://www.github.com/stefankoolen.\n");
printf("*******************************************************************************\n\n");

float kgeld;
float ngeld;
int ktijd;
int ntijd;
float tp;
float tgeld;
int ttijd;

		printf("Wat is de prijs per maand met korting?\n\n");
		scanf("%f",&kgeld);

		printf("Wat is de periode dat je deze korting krijgt? (In maanden)\n\n");
		scanf("%d",&ktijd);

		printf("Wat is de prijs per maand zonder korting?\n\n");
		scanf("%f",&ngeld);

		printf("Wat is de periode dat je geen korting krijgt?\n\n");
		scanf("%d",&ntijd);

		printf("Wat is de prijs van het toestel?\n\n");
		scanf("%f",&tp);

		tgeld = kgeld * ktijd + ngeld * ntijd + tp;
		ttijd = ktijd + ntijd;

printf("Je bent in totaal kwijt: %.02f. Mogelijke aansluitkosten niet meegerekend.\n",tgeld);
printf("Het abbonement duurt %d maanden.\n",ttijd);

}
