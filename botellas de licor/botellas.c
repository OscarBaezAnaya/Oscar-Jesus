#include "stdio.h"
#include "stdlib.h"
#include "botellas.h"

void main (void)
{
	unsigned int u8Delay = 0;
	while(z==0)
	{
	system("cls");
	printf("bienvenido a nuestro servicio de servido automatico que bebidas deseas?");
	printf("las botellas que tenemos son las siguientes:\n");
	printf(" 1)Ron\n 2)whiskey\n 3)vodka\n 4)ginebra\n 5)jarabe de fresa\n 6)tequila\n 7)jugo de naranja\n 8)refresco\n 9)agua mineral\n 10)pure de durazno\n");
	printf("por favor seleccione la primera botella que desee en su copa\n");
	printf("su eleccion es:");
	scanf("%d", &firstselectionofStates);
	if(firstselectionofStates==1)
			{
				printf("\nusted selecciono Ron\n");
				pricetotal=firststate+priceron;
			}
		else if(firstselectionofStates==2)
			{
				printf("\nusted selecciono whiskey\n");
				pricetotal=firststate+pricewhiskey;
			}
		else if(firstselectionofStates==3)
			{
				printf("\nusted selecciono vodka\n");
				pricetotal=firststate+pricevodka;
			}
		else if(firstselectionofStates==4)
			{
				printf("\nusted selecciono ginebra\n");
				pricetotal=firststate+priceginebra;
			}
		else if(firstselectionofStates==5)
			{
				printf("\nusted selecciono jarabe de fresa\n");
				pricetotal=firststate+pricejarabedefresa;
			}
		else if(firstselectionofStates==6)
			{
				printf("\nusted selecciono Tequila\n");
				pricetotal=firststate+pricetequila;
			}
		else if(firstselectionofStates==7)
			{
				printf("\nusted selecciono jugo de naranja\n");
				pricetotal=firststate+pricejugodenaranja;
			}
		else if(firstselectionofStates==8)
			{
				printf("\nusted selecciono refresco\n");
				pricetotal=firststate+pricejugodenaranja;
			}
		else if(firstselectionofStates==9)
			{
				printf("\nusted selecciono agua mineral\n");
				pricetotal=firststate+priceagua;
			}
		else if(firstselectionofStates==10)
			{
				printf("\nusted selecciono pure de durazno\n");
				pricetotal=firststate+pricedurazno;
			}

		printf("quieres otro licor con tu copa?\n1)si\n2)no\n");
		printf("tu respuesta es:");
		scanf("%d",&firstans);
			if(firstans==truth)
			{
					system("cls");
					printf("las botellas que tenemos son las siguientes:\n");
					printf(" 1)Ron\n 2)whiskey\n 3)vodka\n 4)ginebra\n 5)jarabe de fresa\n 6)tequila\n 7)jugo de naranja\n 8)refresco\n 9)agua mineral\n 10)pure de durazno\n");
					printf("por favor seleccione la primera botella que desee en su copa\n");
					printf("tu eleccion es:");
					scanf("%d", &firstselectionofStates);
					if(firstselectionofStates==1)
						{
							printf("\nusted selecciono Ron\n");
							pricetotal2=firststate+priceron;
						}
					else if(firstselectionofStates==2)
						{
							printf("\nusted selecciono whiskey\n");
							pricetotal2=firststate+pricewhiskey;
						}
					else if(firstselectionofStates==3)
						{
							printf("\nusted selecciono vodka\n");
							pricetotal2=firststate+pricevodka;
						}
					else if(firstselectionofStates==4)
						{
							printf("\nusted selecciono ginebra\n");
							pricetotal2=firststate+priceginebra;
						}
					else if(firstselectionofStates==5)
						{
							printf("\nusted selecciono jarabe de fresa\n");
							pricetotal2=firststate+pricejarabedefresa;
						}
					else if(firstselectionofStates==6)
						{
							printf("\nusted selecciono Tequila\n");
							pricetotal2=firststate+pricetequila;
						}
					else if(firstselectionofStates==7)
						{
							printf("\nusted selecciono jugo de naranja\n");
							pricetotal2=firststate+pricejugodenaranja;
						}
					else if(firstselectionofStates==8)
						{
							printf("\nusted selecciono refresco\n");
							pricetotal2=firststate+pricejugodenaranja;
						}
					else if(firstselectionofStates==9)
						{
							printf("\nusted selecciono agua mineral\n");
							pricetotal2=firststate+priceagua;
						}
					else if(firstselectionofStates==10)
						{
							printf("\nusted selecciono pure de durazno\n");
							pricetotal2=firststate+pricedurazno;
						}

					printf("quieres otro licor con tu copa?\n1)si\n2)no\n");
					printf("tu respuesta es:" );
					scanf("%d",&firstans);
						if(firstans==truth)
						{
											system("cls");
											printf("las botellas que tenemos son las siguientes:\n");
											printf("1)Ron\n 2)whiskey\n 3)vodka\n 4)ginebra\n 5)jarabe de fresa\n 6)tequila\n 7)jugo de naranja\n 8)refresco\n 9)agua mineral\n 10)pure de durazno\n");
											printf("por favor seleccione el tercer licor que desee en su copa\n");
											printf("tu eleccion es:");
											scanf("%d", &firstselectionofStates);
											if(firstselectionofStates==1)
												{
													printf("\nusted selecciono Ron\n");
													pricetotal3=firststate+priceron;
												}
											else if(firstselectionofStates==2)
												{
													printf("\nusted selecciono whiskey\n");
													pricetotal3=firststate+pricewhiskey;
												}
											else if(firstselectionofStates==3)
												{
													printf("\nusted selecciono vodka\n");
													pricetotal3=firststate+pricevodka;
												}
											else if(firstselectionofStates==4)
												{
													printf("\nusted selecciono ginebra\n");
													pricetotal3=firststate+priceginebra;
												}
											else if(firstselectionofStates==5)
												{
													printf("\nusted selecciono jarabe de fresa\n");
													pricetotal3=firststate+pricejarabedefresa;
												}
											else if(firstselectionofStates==6)
												{
													printf("\nusted selecciono Tequila\n");
													pricetotal3=firststate+pricetequila;
												}
											else if(firstselectionofStates==7)
												{
													printf("\nusted selecciono jugo de naranja\n");
													pricetotal3=firststate+pricejugodenaranja;
												}
											else if(firstselectionofStates==8)
												{
													printf("\nusted selecciono refresco\n");
													pricetotal3=firststate+pricejugodenaranja;
												}
											else if(firstselectionofStates==9)
												{
													printf("\nusted selecciono agua mineral\n");
													pricetotal3=firststate+priceagua;
												}
											else if(firstselectionofStates==10)
												{
													printf("\nusted selecciono pure de durazno\n");
													pricetotal3=firststate+pricedurazno;
												}
			}			
			else (firstans==lie);
			{	
				printf("\ndeseas quitar algun licor en tu bebida antes de procesarla?\n1)si\n2)no\n");
				printf("tu respuesta es\n");
				scanf("%d",&firstans);
				system("cls");
				if(firstans==1)
				{
					printf("cual deseas quitar?\n1)tu primer licor\n2)tu segundo licor\n3)tu tercer licor\n4)ninguno");
					scanf("%d",&firstans);
					if(firstans==1)
					{
						pricetotal=0;
					}
					else if(firstans==2)
					{
						pricetotal2=0;
					}
					else if(firstans==3)
					{
						pricetotal3=0;
					}
					else
					{
						//nothing to do//
					}
				}
				else
				{
					//empty//
				}
				printf("\ntu costo por tu primer licor en tu bebida es:%d\n",pricetotal);
				printf("\ntu costo adicional por tu segundo licor en tu bebida es:%d\n",pricetotal2);	
			}
						}
			else (firstans==lie);
		{
				printf("\ntu costo adicional por el tercer licor en tu bebida es:%d\n", pricetotal3);
				finalprice=pricetotal+pricetotal2+pricetotal3;
				printf("tu precio total es:%d\n",finalprice);
		}
		printf("\nquieres otra bebida?\n 1)si\n 2)no\n");
		scanf("%d",&firstans);
		if(firstans==1)
		{
			z=0;
		}
		else if (firstans==2)
		{
			z=5;
		}
	}		
		printf("preparando bebida/s\n");
		u8Delay = bebidatimes;
        while(u8Delay--);
        u8Delay = bebidatimes;
        while(u8Delay--);
        u8Delay = bebidatimes;
        while(u8Delay--);
        u8Delay = bebidatimes;
        while(u8Delay--);
        u8Delay = bebidatimes;
        while(u8Delay--);
        printf("bebidas listas por favor recojalas, gracias por su preferencia");
        //holi
}
