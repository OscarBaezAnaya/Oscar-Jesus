#include "SM.h"
#include "BML.h"

void StatesMachine ( void )
{
	static CM_StateMachine enCurrentState = enTime;
	static uint16 u16PresaA = 250; 
	static uint16 u16PresaB = 500;
	static uint16 u16PresaC = 100;
	static uint16 u16PresaD = 150;
	static uint16 u16PresaE = 300;
	static uint16 u16PresaF = 400; 
	static uint8 u8Confirm; 
	static uint8 u8Lluvia;
	static uint8 u8LluviaTime=100;
	static uint8 u8PuertasAbiertas=150;
	static uint8 u8Estados=0;
	static uint8 u8Reinicio;
	uint8 randomlluvia;
	srand(time(NULL));
		switch ( enCurrentState )
		{
			case enTime:
			system("cls");
			enCurrentState = enCheckTime;
			break;
			case enCheckTime:
				system("cls"); 
				printf("Bienvenido al sistema de presas\n");
				printf("Quieres revisar cuanta agua tiene cada presa? 1)Si 2)No\nR= ");
				scanf("%d", &u8Confirm );
				if ( u8Confirm ==  YES )
				{
					system("cls");
				    printf("La presa numero 1 tiene %d litos de agua\n", u16PresaA);
				    printf("La presa numero 2 tiene %d litos de agua\n", u16PresaB);
				    printf("La presa numero 3 tiene %d litos de agua\n", u16PresaC);
				    printf("La presa numero 4 tiene %d litos de agua\n", u16PresaD);
				    printf("La presa numero 5 tiene %d litos de agua\n", u16PresaE);
				    printf("La presa numero 6 tiene %d litos de agua\n\n", u16PresaF);  
				    printf("Volviendo a iniciar\n");
				}
				else
				{
					enCurrentState = enExecute; 
					printf("\n");
					printf("Se presentaran los estados de las presas:\n\n");
				}
			break;
			case enExecute: 
			system("cls");
				if ( u16PresaA == 0 )
				{
					//Nothing to do
				}
				else 
				{
					printf("La presa 1 tiene %d litros de agua\n\n", u16PresaA);
					randomlluvia = rand() % 2;
					u8Lluvia = randomlluvia;
					if (u8Lluvia==1)
					{
						printf("Lloviendo en la presa 1\n\n");
						u16PresaA = u16PresaA + u8LluviaTime;
					}
					else
					{
						//Nothing to do
					}
					if (u16PresaA>=500)
					{
						printf("La presa 1 llego a su maxima capacidad entonces se abrirar las puertas para quitar el exceso de agua\n\n");
						printf("Puertas abiertas de la presa 1\n\n");
						u16PresaA = u16PresaA - u8PuertasAbiertas;
					}
					else
					{
						//Nothing to do
					}
				}
				if ( u16PresaB == 0 )
				{
					//Nothing to do
				}
				else 
				{
					printf("La presa 2 tiene %d litros de agua\n\n", u16PresaB);
					randomlluvia = rand() % 2;
					u8Lluvia = randomlluvia;
					if (u8Lluvia==1)
					{
						printf("Lloviendo en la presa 2\n\n");
						u16PresaB = u16PresaB + u8LluviaTime;
					}
					else
					{
						//Nothing to do
					}
				if (u16PresaB>=700)
				{
					printf("La presa 2 llego a su maxima capacidad entonces se abrirar las puertas para quitar el exceso de agua\n\n");
					printf("Puertas abiertas de la presa 2\n\n");
					u16PresaB = u16PresaB - u8PuertasAbiertas;
				}
				else
				{
					//Nothing to do
				}
				if ( u16PresaC == 0 )
				{
					//Nothing to do
				}
				else 
				{
					printf("La presa 3 tiene %d litros de agua\n\n", u16PresaC);
					randomlluvia = rand() % 2;
					u8Lluvia = randomlluvia;
					if (u8Lluvia==1)
					{
						printf("Lloviendo en la presa 3\n\n");
						u16PresaC = u16PresaC + u8LluviaTime;
					}
					else
					{
						//Nothing to do
					}
					if (u16PresaC>=200)
					{
						printf("La presa 3 llego a su maxima capacidad entonces se abrirar las puertas para quitar el exceso de agua\n\n");
						printf("Puertas abiertas de la presa 3\n\n");
						u16PresaC = u16PresaC - u8PuertasAbiertas;
					}
					else
					{
						//Nothing to do
					}
				}
				if ( u16PresaD == 0 )
				{
					//Nothing to do
				}
				else 
				{
					printf("La presa 4 tiene %d litros de agua\n\n", u16PresaD);
					randomlluvia = rand() % 2;
					u8Lluvia = randomlluvia;
					if (u8Lluvia==1)
					{
						printf("Lloviendo en la presa 4\n\n");
						u16PresaD = u16PresaD + u8LluviaTime;
					}
					else
					{
						//Nothing to do
					}
					if (u16PresaD>=300)
					{
						printf("La presa 4 llego a su maxima capacidad entonces se abrirar las puertas para quitar el exceso de agua\n\n");
						printf("Puertas abiertas de la presa 4\n\n");
						u16PresaD = u16PresaD - u8PuertasAbiertas;
					}
					else
					{
						//Nothing to do
					}
				}
				if ( u16PresaE == 0 )
				{
					//Nothing to do
				}
				else 
				{
					printf("La presa 5 tiene %d litros de agua\n\n", u16PresaE);
					randomlluvia = rand() % 2;
					u8Lluvia = randomlluvia;
					if (u8Lluvia==1)
					{
						printf("Lloviendo en la presa 5\n\n");
						u16PresaE = u16PresaE + u8LluviaTime;
					}
					else
					{
						//Nothing to do
					}
					if (u16PresaE>=550)
					{
						printf("La presa 5 llego a su maxima capacidad entonces se abrirar las puertas para quitar el exceso de agua\n\n");
						printf("Puertas abiertas de la presa 5\n\n");
						u16PresaE = u16PresaE - u8PuertasAbiertas;
					}
					else
					{
						//Nothing to do
					}
				}
				if ( u16PresaF == 0 )
				{
					//Nothing to do
				}
				else 
				{
					printf("La presa 6 tiene %d litros de agua\n\n", u16PresaF);
					randomlluvia = rand() % 2;
					u8Lluvia = randomlluvia;
					if (u8Lluvia==1)
					{
						printf("Lloviendo en la presa 6\n\n\n");
						u16PresaF = u16PresaF + u8LluviaTime;
					}
					else
					{
						//Nothing to do
					}
					if (u16PresaF>=600)
					{
						printf("La presa 6 llego a su maxima capacidad entonces se abrirar las puertas para quitar el exceso de agua\n\n");
						printf("Puertas abiertas de la presa 6\n\n\n");
						u16PresaF = u16PresaF - u8PuertasAbiertas;
						u8Estados++;
					}
					else
					{
						//Nothing to do
						u8Estados++;
					}
				}
			break;
		}
		//salida
	}
}