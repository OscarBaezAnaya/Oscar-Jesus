#include "stdio.h"
#include <stdlib.h>

typedef unsigned int uint8;

uint8 u8Check2Luhn(uint8 *pu8Data,uint8 u8ListSize);

void main(void)
{
	uint8 au8arraynum[16]={1,2,3,4,2,2,3,4,1,2,3,4,2,2,3,4};
	uint8 u8For, u8Check=0;

	u8Check=u8Check2Luhn(&au8arraynum[0],16);

	if(u8Check==1)		
	{
		printf("La tarjeta es valida\n Los numeros de su tarjeta son: ");
		for(u8For=0; u8For<=15; u8For++) {printf("%d ", au8arraynum[u8For]);}
	}
	else
	{
		printf("Su tarjeta no es valida\n");
	}

}

uint8 u8Check2Luhn(uint8 *pu8Data, uint8 u8ListSize)
{
	uint8 u8SaveNumber=0, u8Start=0, u8SumaTotal=0, u8Total=0, Comprobacion=0; 	
	
	while( u8Start <= u8ListSize )
	{
		
		if( u8Start % 2 == 0 )
		{
			u8SaveNumber= (*pu8Data)*2;			
			if(u8SaveNumber<10)
			{
				/*Nothing to do*/
			}
			else
			{
				u8SaveNumber=u8SaveNumber-9;
			}
		}
		else
		{
			u8SaveNumber= *pu8Data;
		}
		u8SumaTotal=u8SaveNumber+u8SumaTotal;
		u8Start++;
		pu8Data++;
		
	}
	
	u8Total=u8SumaTotal%10;
	
	if(u8Total==0)
	{
		Comprobacion=1;
	}
	else
	{
		Comprobacion=0;
	}
	return Comprobacion;
}
