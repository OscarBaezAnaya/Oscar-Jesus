
#include "stdio.h"
#include "GENFUN.h"
#include <stdlib.h>
#include <time.h> 


void main(void)
{
	uint8  au8array [11]= "hello world";
	uint8  au8sal   [10];
	uint32 au32khe  [255];
	uint32 au32komo [255];
	uint8  au8khe   [7] ={2,5,7,5,3,7,1};
	uint8  au8komo  [7] ={0,0,0,0,0,0,0};
	uint8  au8coff  [10]={5,9,7,2,1,0,3,5,4,7};
	uint8  oscar;
	uint8  u8Target;
	uint8  u8Char;
	uint8  jesus;
	uint8  k, l;

	
	printf     ("Funcion CapsOn");
		printf ("Before CapsOn: %s", au8array);
		printf ("\n");
		GENFUN_vCapsOn (&au8array[0], 11);
		printf ("After CapsOn: %s", au8array);
		printf ("\n\n");
		
	
	printf     ("Funcion CapsOff");
		printf ("Before CapsOff: %s", au8array);
		printf ("\n");
		GENFUN_vCapsOff (&au8array[0], 11);
		printf ("After CapsOff: %s", au8array);
		printf ("\n\n");
		

	printf     ("Funcion GetOccurence");
		printf ("\n");
		printf ("Que letra desea buscar?");
		printf ("\n");
		scanf  ("%c", &u8Target );
		oscar= GENFUN_u8GetOccurence (&au8array[0], u8Target, 11);
		printf ("La letra %c se repite %d veces", u8Target, oscar);
		printf ("\n\n");
		
	
	printf     ("Funcion GetAverage");
		printf ("\n");
		printf ("La funcion Average sacara el promedio de la cadena siguiente:");
		for    (k=0; k<7; k++) {printf(" %d ", au8khe[k]);}
		printf ("\n");
		jesus = GENFUN_u8GetAverage (&au8khe[0],7);
		printf ("El promedio es : %d", jesus);
		printf ("\n\n");
		

	printf     ("Funcion MemSet");
		printf ("\n");
		u8Target ='h';
		printf ("Before MemSet: %s", au8array);
		printf ("\n");
		GENFUN_u8MemSet (&au8array[0], u8Target, 11);
		printf ("La nueva cadena es %s", au8array);
		printf ("\n\n");
		

	printf     ("Funcion MemCopy");
		printf ("\n");
		printf ("La funcion MemCopy va a copiar los valores de la cadena y estos seran asignados a una nueva cadena:");
		for    (k=0; k<7; k++) {printf(" %d ", au8khe[k]);}
		printf ("\n");
		printf ("La nueva cadena es:");
		for    (k=0; k<7; k++) {printf(" %d ", au8komo[k]);}
		printf ("\n");
		GENFUN_u8MemCopy (&au8khe[0], &au8komo[0],7);
		printf ("\n");
		printf ("Despues de que se realizara la funcion MemCopy, la nueva cadena es:");
		for    (k=0; k<7; k++) {printf(" %d ",au8komo[k]);}
		printf ("\n\n");	


	/*printf   ("After SortList");
		printf ("\n");
		for    (l=0; l<10; l++) {printf("%d", au8sal[l]);}
		printf ("\n");
		printf ("Before SortList");
		printf ("\n");
		GENFUN_vSortList (&au8coff[0], &au8sal[0], 10);
		printf ("Afteer Sort %d", au8coff[l]);
		printf ("\n\n");*/


	printf("Funcion SoftSignal");
		GENFUN_vSoftSignal (&au32khe[0], &au32komo[0]);
		printf("\n\n");	


	printf ("Funcion FilterSignal");
		printf ("\n");
		GENFUN_vFilterSignal (&au32khe[0], &au32komo[0], MaxVal, MinVal);
}


void GENFUN_vCapsOn (uint8 *pu8Src, uint8 u8SizeOfList)
{
	while  (u8SizeOfList != 0)
	{
		if (*pu8Src > ASCII_LOW_THRESHOLD_OFF_ON && 
			*pu8Src < ASCII_HIGH_THRESHOLD_OFF_ON)    
		{
			*pu8Src -= ASCII_CONVERTION_FACTOR;
		}
		else
		{
			/*Nothing to do*/
		}
		pu8Src++;
		u8SizeOfList--;
	}
}


void GENFUN_vCapsOff (uint8 *pu8Src, uint8 u8SizeOfList)
{
	while  (u8SizeOfList != 0)
	{
		if (*pu8Src > ASCII_LOW_THRESHOLD_OFF_ON_2 && 
			*pu8Src < ASCII_HIGH_THRESHOLD_OFF_ON_2)
		{
			*pu8Src += ASCII_CONVERTION_FACTOR;
		}
		else
		{
			/*Nothing to do*/
		}
		pu8Src++;
		u8SizeOfList--;
	}
}


uint8 GENFUN_u8GetOccurence (uint8 *pu8Src, uint8 u8Target, uint8 u8SizeOfList) 
{
	int contra = 0;
	
	while  (u8SizeOfList != 0)
	{
		if (*pu8Src == u8Target)
		{
			contra ++;
		}
		else
		{
			/*Nothing to do*/
		}
		u8SizeOfList--;
		pu8Src++;
	}

	return contra;
}


uint8 GENFUN_u8GetAverage (uint8 *pu8Src, uint8 u8SizeOfList)
{
	uint8 Suma = 0;
	uint8 div = u8SizeOfList;
	while (u8SizeOfList != 0)
	{
		Suma += *pu8Src;
		pu8Src++;
		u8SizeOfList--;
	}
	Suma/=div; 
	return Suma;
}


void GENFUN_u8MemSet (uint8 *pu8Src, uint8 u8Char, uint8 u8SizeOfList) 
{
	while (u8SizeOfList != 0)
	{
		*pu8Src = u8Char;
		u8SizeOfList--;
		pu8Src++;	
	}
}


void GENFUN_u8MemCopy (uint8 *pu8Src, uint8 *pu8Dest, uint8 u8SizeOfList) 
{
	while (u8SizeOfList != 0)
	{
		*pu8Dest = *pu8Src;
		pu8Src++;
		pu8Dest++;
		u8SizeOfList--;
	}
}


/*void GENFUN_vSortList (uint8 *pu8Src, uint8 *pu8Dest, uint8 u8SizeOfList) 
{
	uint8 u8SizeOfList2 = u8SizeOfList;
	uint8 sal[10], Tempsal;
	while (u8SizeOfList != 0 )
	{
		pu8Dest = pu8Src;
		pu8Dest ++;
		while (u8SizeOfList2 != 0 )
		{
			if (*pu8Src < *sal )
			{
				Tempsal = *pu8Src;
				*pu8Src = *pu8Dest; 
				*pu8Dest = Tempsal;
			}
			else
			{
				pu8Dest ++;
				u8SizeOfList2++;
			}
			u8SizeOfList--;
		}		
		pu8Src ++;
	}
}*/


void GENFUN_vSoftSignal (uint32 *pu32Src, uint32 *pu32Dest) 
{
	uint8 indi    = END_SOFT;
	uint8 indidos = END_SOFT_2;
	uint8 prome=0,  nume=0, suma=0;
	
	printf ("Los valores almacenados aleatoriamente en el primer areglo son:");
	printf ("\n");
	while  (indi != 0)
	{
		*pu32Src = rand() % 10;
		printf ("%d", *pu32Src);
		indi--;
		pu32Src++;
	}
	pu32Src = pu32Src-255;
	printf ("\n");
	printf ("El resultado de la segunda cadena y los promedios es:");
	printf ("\n");
	while  (indidos != 0)
	{
		nume  = *pu32Src;
		pu32Src++;
		suma  = (nume + *pu32Src);
		prome = (suma/2);
		*pu32Dest = prome;
		printf ("%d", *pu32Dest);
		indidos--;
		pu32Dest++;

	}
}


void GENFUN_vFilterSignal (uint32 *pu32Src, uint32 *pu32Dest, uint32 u32MaxVal, uint32 u32MinVal)
{
	uint8 indi    =  END_SOFT;
	uint8 indidos =  END_SOFT;
	uint8 u = 0;
	printf ("Los valores almacenados aleatoriamente en el primer areglo con el limite menor de %d y con el limite mayor de %d", u32MinVal, u32MaxVal);
	printf ("\n");
	u32MaxVal--;
	while  (indi != 0)
	{
		*pu32Src = (u32MinVal) + (rand() % u32MaxVal);
		*pu32Dest= u;
		printf ("%d", *pu32Src);
		indi--;
		pu32Src++;
		pu32Dest++;
	}
		pu32Src = pu32Src-255;
		pu32Dest= pu32Dest-1;
		printf ("\n");
		printf ("Los resultados se guardaran en otra cadena:");
		printf ("\n");
		while  (indidos != 0)
	{
		u = *pu32Src;
		*pu32Dest = u;
		pu32Src++;
		pu32Dest++;
		printf ("%d", *pu32Dest);
		indidos--;
	}
}