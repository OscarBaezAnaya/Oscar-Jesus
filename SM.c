#include "SM.h"
#include "BML.h"

void StatesMachine ( void )
{
	static CM_StateMachine enCurrentState = enTime;
	static uint16 u16BombA; 
	static uint16 u16BombB;
	static uint16 u16BombC; 
	static uint8 u8Confirm; 
	static uint8 u8contador=3;
		switch ( enCurrentState )
		{
			case enTime:
				system("cls"); 
				printf("Asigne el tiempo para cada bomba, el tiempo se ejecutará en segundos completos (Si el tiempo es 0, no se ejecutaran las bombas\n");
				printf("Tiempo de la bomba A: ");
				scanf("%d", &u16BombA);
				printf("Tiempo de la bomba B: ");
				scanf("%d", &u16BombB);
				printf("Tiempo de la bomba C: ");
				scanf("%d", &u16BombC);
				enCurrentState = enCheckTime;
			break;
			case enCheckTime: 
				printf("Quieres cambiar el tiempo de las bombas? 1)Si 	2)No\nR= ");
				scanf("%d", &u8Confirm );
				if ( u8Confirm ==  YES )
				{
				    enCurrentState = enTime;  
				}
				else
				{
					enCurrentState = enExecute; 
				}
			break;
			case enExecute: 
			
				if ( u16BombA == 0 )
				{
					/*NOTHING TO DO*/
				}
				else 
				{
					u16BombA--;
					printf("Bomba A activa, tiempo restante %d seg\n", u16BombA);
				}
				if ( u16BombB == 0 )
				{
					/*NOTHING TO DO*/
				}
				else 
				{
					u16BombB--;
					printf("Bomba B activa, tiempo restante %d seg\n", u16BombB);
				}
				if ( u16BombC == 0 )
				{
					/*NOTHING TO DO*/
				}
				else 
				{
					u16BombC--;
					printf("Bomba C activa, tiempo restante %d seg\n", u16BombC);
				}
				if(u16BombA == 0 & u16BombB == 0 & u16BombC == 0)
				{
					enCurrentState = enTime;
					printf("Todo se va a reiniciar en %d segundos\n", u8contador);
					if(u8contador==0)
					{
						enCurrentState=enTime;
					}
					else
					{
						u8contador--;
					}
				}	
			break;
		}
		printf("\n");
}

