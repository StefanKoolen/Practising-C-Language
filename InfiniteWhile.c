/************************************************
* Made by Stefan Koolen			 	*
* My GitHub: http://www.github.com/StefanKoolen *
************************************************/
#include<stdio.h>

	main(){

int i;
			printf("What is 1+1?\n");
			scanf("%d", &i);
			printf("\n");

		while(i!=2){

			printf("Can't you count or what?\n");
			printf("What is 1+1?\n");
			scanf("%d", &i);
			printf("\n");

		}/*End loop when i != 2*/

                while(i=2){

                        printf("Infinite Loop ");

                }/*End loop when i = 2*/

	}/*End program*/
