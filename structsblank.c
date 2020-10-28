#include "stdio.h"
#include "structs.h"

/* Descripcion 

->Crear un programa que simule un estacionamiento con 5 diferentes secciones 0, 1, 2, 3 o 4. Cada seccion tendra un cupo maximo de carros que sera definido por Defines diferentes. 
->Se tiene que usar un arreglo de estructuras para manejar los estacionamientos, la estructura es la de abajo.
->El programa correra en un ciclo infinito y habra funciones aleatorias que metan y saquen carros de las diferentes secciones.
->El programa debe tener una logica que atienda las peticiones siguientes con funciones:
	*Obtener el numero de espacios disponibles de una seccion (F1)
	*Obtener el numero de espacios no disponibles de una seccion (F2)
	*Obtener ganancias de sección(F3)
	*Registrar vehiculo ingresado(F4)
	*Remover vehiculo(F5)
	*Registrar pago de vehiculo ingresado(F6)
*/

/* Fucniones */
/*
->(F1) Una funcion con 1 parametro, la cual reciba la seccion de estacionamiento (0, 1, 2, 3 o 4) e imprima la cantidad de espacios disponibles de esa seccion
->(F2) Una funcion con 1 parametro, la cual reciba la seccion de estacionamiento (0, 1, 2, 3 o 4) e imprima la cantidad de espacios no disponibles de esa seccion
->(F3) Una funcion con 1 parametro, la cual reciba la seccion de estacionamiento (0, 1, 2, 3 o 4) e imprima la cantidad de dinero acumulada en esa sección
->(F4) Una funcion con 1 parametro, la cual reciba la seccion de estacionamiento y permita ingresar un vehiculo a esa seccion
->(F5) Una funcion con 1 parametro, la cual reciba la seccion de estacionamiento y permita retirar un vehiculo de la cuenta de la seccion
->(F6) Una funcion con 1 parametro, la cual reciba la seccion de estacionamiento y registre el pago por haber ingresado el vehiculo
*/

tstParkingInfo astMyParks[enMaxSectors] = INIT_PARKING_SLOTS;						/*struct to Use*/

void main ( void )
{
	uint8 u8InputAction = 0;
	tenParkingSectors enSector; 
	uint8 u8ConfirmationFromAction = 0;
	while(1)
	{
		fflush(stdin);
		printf("Press 1 to -> Read Available Slots\n\n");
		printf("Press 2 to -> Read Unavailable Slots\n\n");
		printf("Press 3 to -> Read Earned Money\n\n");
		printf("Press 4 to -> Enter a Car to a Section\n\n");
		printf("Press 5 to -> Remove a Car from a Section\n\n");
		printf("Press 6 to -> print a receipt\n\n");
		printf("Enter selection: ");
		scanf("%d", &u8InputAction);
		printf("Action Selected %d\n\n", u8InputAction );
		
		printf("Enter Sector from 0 to 4: ");
		scanf("%d", &enSector);
		printf("\n");
		printf("Sector Selected %d\n\n", enSector );

		if( enSector < enMaxSectors )
		{
			if( u8InputAction == 1 )
			{
				ShowAvailableSlots (enSector);
			}
			else if( u8InputAction == 2 )
			{
				ShowNotAvailableSlots (enSector);
			}
			else if( u8InputAction == 3 )
			{
				ShowEarnedMoney (enSector);
			}
			else if( u8InputAction == 4 )
			{
				u8AddCarToSector (enSector);
			}
			else if ( u8InputAction == 5 )
			{
				u8RemoveCarFromSector (enSector);
			}
			else if (u8InputAction)
			{
				u8ImportPaymentOfSlot (enSector);
			}
			printf("\n\n");
		}
		else
		{
			/*Not a valid sector*/
		}

	}
}

/*F1*/
void ShowAvailableSlots ( tenParkingSectors enCurrentSector )
{
		if(enCurrentSector == 0)
	{	
		if(astMyParks[enCurrentSector].u8AvailableSlots != enSector0)
		{
			printf("El sector actual tienen %d espacios disponibles", astMyParks[enCurrentSector].u8AvailableSlots);
		}
		else
		{
			printf("No hay espacio disponible");
		}
	}
		if(enCurrentSector == 1)
	{	
		if(astMyParks[enCurrentSector].u8AvailableSlots != enSector1)
		{
			printf("El sector actual tienen %d espacios disponibles", astMyParks[enCurrentSector].u8AvailableSlots);
		}
		else
		{
			printf("No hay espacio disponible");
		}
	}
		if(enCurrentSector == 2)
	{	
		if(astMyParks[enCurrentSector].u8AvailableSlots != enSector2)
		{
			printf("El sector actual tienen %d espacios disponibles", astMyParks[enCurrentSector].u8AvailableSlots);
		}
		else
		{
			printf("No hay espacio  disponible");
		}
	}
		if(enCurrentSector == 3)
	{	
		if(astMyParks[enCurrentSector].u8AvailableSlots != enSector3)
		{
			printf("El sector actual tienen %d espacios disponibles", astMyParks[enCurrentSector].u8AvailableSlots);
		}
		else
		{
			printf("No hay espacio  disponible");
		}
	}
		if(enCurrentSector == 4)
	{	
		if(astMyParks[enCurrentSector].u8AvailableSlots != enSector4)
		{
			printf("El sector actual tienen %d espacios disponibles", astMyParks[enCurrentSector].u8AvailableSlots);
			
		}
		else
		{
			printf("No hay espacio  disponible");
		}
	}
}

/*F2*/
void ShowNotAvailableSlots ( tenParkingSectors enCurrentSector )
{
		if(enCurrentSector == 0)
	{	
		if(astMyParks[enCurrentSector].u8NotAvailableSlots != enSector0)
		{
			printf("El sector actual hay %d espacios ocupados", astMyParks[enCurrentSector].u8NotAvailableSlots);
		}
		else
		{
			printf("Todos los espacio estan disponibles");
		}
	}
		if(enCurrentSector == 1)
	{	
		if(astMyParks[enCurrentSector].u8NotAvailableSlots != enSector1)
		{
			printf("El sector actual hay %d espacios ocupados", astMyParks[enCurrentSector].u8NotAvailableSlots);
		}
		else
		{
			printf("Todos los espacio estan disponibles");
		}
	}
		if(enCurrentSector == 2)
	{	
		if(astMyParks[enCurrentSector].u8NotAvailableSlots != enSector2)
		{
			printf("El sector actual hay %d espacios ocupados", astMyParks[enCurrentSector].u8NotAvailableSlots);
		}
		else
		{
			printf("Todos los espacio estan disponibles");
		}
	}
		if(enCurrentSector == 3)
	{	
		if(astMyParks[enCurrentSector].u8NotAvailableSlots != enSector3)
		{
			printf("El sector actual hay %d espacios ocupados", astMyParks[enCurrentSector].u8NotAvailableSlots);
		}
		else
		{
			printf("Todos los espacio estan disponibles");
		}
	}
		if(enCurrentSector == 4)
	{	
		if(astMyParks[enCurrentSector].u8NotAvailableSlots != enSector4)
		{
			printf("El sector actual hay %d espacios ocupados", astMyParks[enCurrentSector].u8NotAvailableSlots);
		}
		else
		{
			printf("Todos los espacio estan disponibles");
		}
	}
}

/*F3*/
void ShowEarnedMoney ( tenParkingSectors enCurrentSector )
{
		if(enCurrentSector == 0)
	{	
		if(astMyParks[enCurrentSector].u32MoneyEarn != enSector0)
		{
			printf("La cantidad de dinero acumulado en esa seccion es de %d", astMyParks[enCurrentSector].u32MoneyEarn);
		}
		else
		{
			printf("error en el sistema");
		}
	}
		if(enCurrentSector == 1)
	{	
		if(astMyParks[enCurrentSector].u32MoneyEarn != enSector1)
		{
			printf("La cantidad de dinero acumulado en esa seccion es de %d", astMyParks[enCurrentSector].u32MoneyEarn);
		}
		else
		{
			printf("error en el sistema");
		}
	}
		if(enCurrentSector == 2)
	{	
		if(astMyParks[enCurrentSector].u32MoneyEarn != enSector2)
		{
			printf("La cantidad de dinero acumulado en esa seccion es de %d", astMyParks[enCurrentSector].u32MoneyEarn);
		}
		else
		{
			printf("error en el sistema");
		}
	}
		if(enCurrentSector == 3)
	{	
		if(astMyParks[enCurrentSector].u32MoneyEarn != enSector3)
		{
			printf("La cantidad de dinero acumulado en esa seccion es de %d", astMyParks[enCurrentSector].u32MoneyEarn);
		}
		else
		{
			printf("error en el sistema");
		}
	}
		if(enCurrentSector == 4)
	{	
		if(astMyParks[enCurrentSector].u32MoneyEarn != enSector4)
		{
			printf("La cantidad de dinero acumulado en esa seccion es de %d", astMyParks[enCurrentSector].u32MoneyEarn);
		}
		else
		{
			printf("error en el sistema");
		}
	}
}
/*F4*/
uint8 u8AddCarToSector( tenParkingSectors enCurrentSector )
{
		if(enCurrentSector == 0)
	{
		printf("Tu auto estara estacionado en el sector %d ", enCurrentSector);
		astMyParks[enCurrentSector].u8NotAvailableSlots +=1;
		astMyParks[enCurrentSector].u8AvailableSlots -=1;
	}
		if(enCurrentSector == 1)
	{
		printf("Tu auto estara estacionado en el sector %d ", enCurrentSector);
		astMyParks[enCurrentSector].u8NotAvailableSlots +=1;
		astMyParks[enCurrentSector].u8AvailableSlots -=1;
	}
		if(enCurrentSector == 2)
	{
		printf("Tu auto estara estacionado en el sector %d ", enCurrentSector);
		astMyParks[enCurrentSector].u8NotAvailableSlots +=1;
		astMyParks[enCurrentSector].u8AvailableSlots -=1;
	}
		if(enCurrentSector == 3)
	{
		printf("Tu auto estara estacionado en el sector %d ", enCurrentSector);
		astMyParks[enCurrentSector].u8NotAvailableSlots +=1;
		astMyParks[enCurrentSector].u8AvailableSlots -=1;
	}
		if(enCurrentSector == 4)
	{
		printf("Tu auto estara estacionado en el sector %d ", enCurrentSector);
		astMyParks[enCurrentSector].u8NotAvailableSlots +=1;
		astMyParks[enCurrentSector].u8AvailableSlots -=1;
	}
}
/*F5*/
uint8 u8RemoveCarFromSector( tenParkingSectors enCurrentSector )
{
		if(enCurrentSector == 0)
	{
		printf("Tu auto sera removido del sector %d ", enCurrentSector);
		astMyParks[enCurrentSector].u8AvailableSlots +=1;
		astMyParks[enCurrentSector].u8NotAvailableSlots -=1;
	}
		if(enCurrentSector == 1)
	{
		printf("Tu auto sera removido del sector %d ", enCurrentSector);
		astMyParks[enCurrentSector].u8AvailableSlots +=1;
		astMyParks[enCurrentSector].u8NotAvailableSlots -=1;
	}
		if(enCurrentSector == 2)
	{
		printf("Tu auto sera removido del sector %d ", enCurrentSector);
		astMyParks[enCurrentSector].u8AvailableSlots +=1;
		astMyParks[enCurrentSector].u8NotAvailableSlots -=1;
	}
		if(enCurrentSector == 3)
	{
		printf("Tu auto sera removido del sector %d ", enCurrentSector);
		astMyParks[enCurrentSector].u8AvailableSlots +=1;
		astMyParks[enCurrentSector].u8NotAvailableSlots -=1;
	}
		if(enCurrentSector == 4)
	{
		printf("Tu auto sera removido del sector %d ", enCurrentSector);
		astMyParks[enCurrentSector].u8AvailableSlots +=1;
		astMyParks[enCurrentSector].u8NotAvailableSlots -=1;
	}
}
/*F6*/
//voy a cobrar $100 por carro
void u8ImportPaymentOfSlot( tenParkingSectors enCurrentSector )
{
		if(enCurrentSector == 0)
	{
		printf("Tenga su ticket");
		astMyParks[enCurrentSector].u32MoneyEarn +=100;
	}
		if(enCurrentSector == 1)
	{
		printf("Tenga su ticket");
		astMyParks[enCurrentSector].u32MoneyEarn +=100;
	}
		if(enCurrentSector == 2)
	{
		printf("Tenga su ticket");
		astMyParks[enCurrentSector].u32MoneyEarn +=100;
	}
		if(enCurrentSector == 3)
	{
		printf("Tenga su ticket");;
		astMyParks[enCurrentSector].u32MoneyEarn +=100;
	}
		if(enCurrentSector == 4)
	{
		printf("Tenga su ticket");
		astMyParks[enCurrentSector].u32MoneyEarn +=100;
	}
}