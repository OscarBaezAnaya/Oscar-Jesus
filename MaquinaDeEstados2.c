#include "stdio.h"
#include "MaquinaDeEstados2.h"
#include "stdlib.h"


void main (void)
{
  unsigned int u8Delay = 0;
  while(vaso == 1)
  {
  system("cls");
  printf ("Bienvenido a la Maquina de bebidas\n");
  printf ("Desea hielos en su bebida?\n");
  printf ("1) Si   2) No\n");
  scanf ("%d", &hielo);
  if (hielo == 1)
    {
      printf ("\nVaso desplazandose\n");
      u8Delay = hieloTime;
      while(u8Delay--);
      printf("Sirviendo hielos a la bebida\n");
      u8Delay = inicioTime;
      while(u8Delay--);
      printf("Vaso dezplazandose al inicio\n\n");
      u8Delay = inicioTime;
      while(u8Delay--);
    }
  else
    {
      //no hace nada
    }
  printf("A continuacion se presenta el menu de las bebidas\n");
  u8Delay = inicioTime;
  while(u8Delay--);
  printf ("-------------Menu-------------\n");
  printf ("1) $20 - CocaCola\n");
  printf ("2) $35 - Whisky\n");
  printf ("3) $25 - Vodka\n");
  printf ("4) $15 - Sprite\n");
  printf ("5) $10 - Lima\n");
  printf ("6) $30 - Ron\n");
  printf ("7) $50 - Jarabe\n\n");
  printf ("Seleccione el primer ingrediente de la bebida\n");
  scanf  ("%d", &bebida);
  printf ("Seleccione el segundo ingrediente de la bebida\n");
  scanf  ("%d", &bebida1);
  printf ("Seleccione el tercer ingrediente de la bebida\n");
  scanf  ("%d", &bebida2);
  printf ("Seleccione el cuarto ingrediente de la bebida\n");
  scanf  ("%d", &bebida3);
  printf ("\nIniciando...\n\n");
  u8Delay = inicioTime;
  while(u8Delay--);
switch (bebida)
    {
    case 1:
      printf ("Vaso desplazandose\n\n");
        CocaCola = preciobebida + PrecioCocaCola;
        u8Delay = CocaColaTime;
        while(u8Delay--);
        printf ("Sirviendo CocaCola\n\n");
        u8Delay = inicioTime;
        while(u8Delay--);
      break;
    case 2:
      printf ("Vaso desplazandose\n\n");
        Whisky = preciobebida + PrecioWhisky;
        u8Delay = WhiskyTime;
        while(u8Delay--);
        printf ("Sirviendo Whisky\n\n");
        u8Delay = inicioTime;
        while(u8Delay--);
      break;
    case 3:
      printf ("Vaso desplazandose\n\n");
        Vodka = preciobebida + PrecioVodka;
        u8Delay = VodkaTime;
        while(u8Delay--);
        printf ("Sirviendo Vodka\n\n");
        u8Delay = inicioTime;
        while(u8Delay--);
      break;
    case 4:
      printf ("Vaso desplazandose\n\n");
        Sprite = preciobebida + PrecioSprite;
        u8Delay = SpriteTime;
        while(u8Delay--);
        printf ("Sirviendo Sprite\n\n");
        u8Delay = inicioTime;
        while(u8Delay--);
      break;
    case 5:
      printf ("Vaso desplazandose\n\n");
        Lima = preciobebida + PrecioLima;
        u8Delay = LimaTime;
        while(u8Delay--);
        printf ("Sirviendo Lima\n\n");
        u8Delay = inicioTime;
        while(u8Delay--);
      break;
    case 6:
      printf ("Vaso desplazandose\n\n");
        Ron = preciobebida + PrecioRon;
        u8Delay = RonTime;
        while(u8Delay--);
        printf ("Sirviendo Ron\n\n");
        u8Delay = inicioTime;
        while(u8Delay--);
      break;
    case 7:
      printf ("Vaso desplazandose\n\n");
        Jarabe = preciobebida + PrecioJarabe;
        u8Delay = JarabeTime;
        while(u8Delay--);
        printf ("Sirviendo Jarabe\n\n");
        u8Delay = inicioTime;
        while(u8Delay--);
      break;
    }
switch (bebida1)
    {
    case 1:
      printf ("Vaso desplazandose\n\n");
        CocaCola = preciobebida + PrecioCocaCola;
        u8Delay = CocaColaTime;
        while(u8Delay--);
        printf ("Sirviendo CocaCola\n\n");
        u8Delay = inicioTime;
        while(u8Delay--);
      break;
    case 2:
      printf ("Vaso desplazandose\n\n");
        Whisky = preciobebida + PrecioWhisky;
        u8Delay = WhiskyTime;
        while(u8Delay--);
        printf ("Sirviendo Whisky\n\n");
        u8Delay = inicioTime;
        while(u8Delay--);
      break;
    case 3:
      printf ("Vaso desplazandose\n\n");
        Vodka = preciobebida + PrecioVodka;
        u8Delay = VodkaTime;
        while(u8Delay--);
        printf ("Sirviendo Vodka\n\n");
        u8Delay = inicioTime;
        while(u8Delay--);
      break;
    case 4:
      printf ("Vaso desplazandose\n\n");
        Sprite = preciobebida + PrecioSprite;
        u8Delay = SpriteTime;
        while(u8Delay--);
        printf ("Sirviendo Sprite\n\n");
        u8Delay = inicioTime;
        while(u8Delay--);
      break;
    case 5:
      printf ("Vaso desplazandose\n\n");
        Lima = preciobebida + PrecioLima;
        u8Delay = LimaTime;
        while(u8Delay--);
        printf ("Sirviendo Lima\n\n");
        u8Delay = inicioTime;
        while(u8Delay--);
      break;
    case 6:
      printf ("Vaso desplazandose\n\n");
        Ron = preciobebida + PrecioRon;
        u8Delay = RonTime;
        while(u8Delay--);
        printf ("Sirviendo Ron\n\n");
        u8Delay = inicioTime;
        while(u8Delay--);
      break;
    case 7:
      printf ("Vaso desplazandose\n\n");
        Jarabe = preciobebida + PrecioJarabe;
        u8Delay = JarabeTime;
        while(u8Delay--);
        printf ("Sirviendo Jarabe\n\n");
        u8Delay = inicioTime;
        while(u8Delay--);
      break;
    }
switch (bebida2)
    {
    case 1:
      printf ("Vaso desplazandose\n\n");
        CocaCola = preciobebida + PrecioCocaCola;
        u8Delay = CocaColaTime;
        while(u8Delay--);
        printf ("Sirviendo CocaCola\n\n");
        u8Delay = inicioTime;
        while(u8Delay--);
      break;
    case 2:
      printf ("Vaso desplazandose\n\n");
        Whisky = preciobebida + PrecioWhisky;
        u8Delay = WhiskyTime;
        while(u8Delay--);
        printf ("Sirviendo Whisky\n\n");
        u8Delay = inicioTime;
        while(u8Delay--);
      break;
    case 3:
      printf ("Vaso desplazandose\n\n");
        Vodka = preciobebida + PrecioVodka;
        u8Delay = VodkaTime;
        while(u8Delay--);
        printf ("Sirviendo Vodka\n\n");
        u8Delay = inicioTime;
        while(u8Delay--);
      break;
    case 4:
      printf ("Vaso desplazandose\n\n");
        Sprite = preciobebida + PrecioSprite;
        u8Delay = SpriteTime;
        while(u8Delay--);
        printf ("Sirviendo Sprite\n\n");
        u8Delay = inicioTime;
        while(u8Delay--);
      break;
    case 5:
      printf ("Vaso desplazandose\n\n");
        Lima = preciobebida + PrecioLima;
        u8Delay = LimaTime;
        while(u8Delay--);
        printf ("Sirviendo Lima\n\n");
        u8Delay = inicioTime;
        while(u8Delay--);
      break;
    case 6:
      printf ("Vaso desplazandose\n\n");
        Ron = preciobebida + PrecioRon;
        u8Delay = RonTime;
        while(u8Delay--);
        printf ("Sirviendo Ron\n\n");
        u8Delay = inicioTime;
        while(u8Delay--);
      break;
    case 7:
      printf ("Vaso desplazandose\n\n");
        Jarabe = preciobebida + PrecioJarabe;
        u8Delay = JarabeTime;
        while(u8Delay--);
        printf ("Sirviendo Jarabe\n\n");
        u8Delay = inicioTime;
        while(u8Delay--);
      break;
    }
switch (bebida3)
    {
    case 1:
      printf ("Vaso desplazandose\n\n");
        CocaCola = preciobebida + PrecioCocaCola;
        u8Delay = CocaColaTime;
        while(u8Delay--);
        printf ("Sirviendo CocaCola\n\n");
        u8Delay = inicioTime;
        while(u8Delay--);
      break;
    case 2:
      printf ("Vaso desplazandose\n\n");
        Whisky = preciobebida + PrecioWhisky;
        u8Delay = WhiskyTime;
        while(u8Delay--);
        printf ("Sirviendo Whisky\n\n");
        u8Delay = inicioTime;
        while(u8Delay--);
      break;
    case 3:
      printf ("Vaso desplazandose\n\n");
        Vodka = preciobebida + PrecioVodka;
        u8Delay = VodkaTime;
        while(u8Delay--);
        printf ("Sirviendo Vodka\n\n");
        u8Delay = inicioTime;
        while(u8Delay--);
      break;
    case 4:
      printf ("Vaso desplazandose\n\n");
        Sprite = preciobebida + PrecioSprite;
        u8Delay = SpriteTime;
        while(u8Delay--);
        printf ("Sirviendo Sprite\n\n");
        u8Delay = inicioTime;
        while(u8Delay--);
      break;
    case 5:
      printf ("Vaso desplazandose\n\n");
        Lima = preciobebida + PrecioLima;
        u8Delay = LimaTime;
        while(u8Delay--);
        printf ("Sirviendo Lima\n\n");
        u8Delay = inicioTime;
        while(u8Delay--);
      break;
    case 6:
      printf ("Vaso desplazandose\n\n");
        Ron = preciobebida + PrecioRon;
        u8Delay = RonTime;
        while(u8Delay--);
        printf ("Sirviendo Ron\n\n");
        u8Delay = inicioTime;
        while(u8Delay--);
      break;
    case 7:
      printf ("Vaso desplazandose\n\n");
        Jarabe = preciobebida + PrecioJarabe;
        u8Delay = JarabeTime;
        while(u8Delay--);
        printf ("Sirviendo Jarabe\n\n");
        u8Delay = inicioTime;
        while(u8Delay--);
      break;
    }
      printf ("Vaso dezplazandose al inicio\n");
      u8Delay = inicioTime;
      while(u8Delay--);
      printf ("Su bebida esta lista\n");
      precio = CocaCola+Whisky+Vodka+Sprite+Lima+Ron+Jarabe;
      printf ("El precio de su bebida es %d \n\n", precio);
      printf ("Desea otra bebida?\n");
      printf ("1) Si   2) No\n");
      scanf ("%d", &vaso);
      printf("Colocando vaso limpio\n");
      u8Delay = vasoTime;
      while(u8Delay--);
}
}
