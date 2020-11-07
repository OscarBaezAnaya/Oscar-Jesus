
#include <ctype.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <math.h>
#include "Mines.h"

uint8 MostrarMinasCercanas(uint8 Fila, uint8 Columna, uint8 Tablero[Filas][Columnas])
{
uint8 Conteo = 0, FilaInicio, FilaFin, ColumnaInicio, ColumnaFin;
if (Fila <= 0)
{
FilaInicio = 0;
}
else 
{
FilaInicio = Fila - 1;
}
if 
(Fila + 1 >= Filas)
{
    FilaFin = Filas - 1;
  } 
  else 
  {
    FilaFin = Fila + 1;
  }

  if 
  (Columna <= 0) 
  {
    ColumnaInicio = 0;
  } else {
    ColumnaInicio = Columna - 1;
  }
  if 
  (Columna + 1 >= Columnas) 
  {
    ColumnaFin = Columnas - 1;
  } 
  else 
  {
    ColumnaFin = Columna + 1;
  }
  uint8 m;
  for (m = FilaInicio; m <= FilaFin; m++)
  {
    uint8 l;
    for (l = ColumnaInicio; l <= ColumnaFin; l++)
    {
      if (Tablero[m][l] == Mina) 
      {
        Conteo++;
      }
    }
  }
  return Conteo;
}
uint8 AleatorioEnRango(uint8 Minimo, uint8 Maximo)
{
  return Minimo + rand() / (RAND_MAX / (Maximo - Minimo + 1) + 1);
}
void IniciarTablero(uint8 Tablero[Filas][Columnas])
{
    uint8 l;
    for (l = 0; l < Filas; l++) 
  {
    uint8 m;
    for (m = 0; m < Columnas; m++) 
    {
      Tablero[l][m] = EspacioSinDescubrir;
    }
  }
}

void ColocarMina(uint8 Fila, uint8 Columna, uint8 Tablero[Filas][Columnas])
{
  Tablero[Fila][Columna] = Mina;
}
void ColocarMinasAleatoriamente(uint8 Tablero[Filas][Columnas], uint8 CantidadDeMinas)
{
  uint8 l;
  for (l = 0; l < CantidadDeMinas; l++)
  {
    uint8 Fila = AleatorioEnRango(0, Filas- 1);
    uint8 Columna = AleatorioEnRango(0, Columnas - 1);
    ColocarMina(Fila, Columna, Tablero);
  }
}
void ImprimirSeparadorEncabezado() 
{
  uint8 m;
  for (m = 0; m <= Columnas; m++) 
  {
    printf("----");
    if (m + 2 == Columnas) 
    {
      printf("-");
    }
  }
  printf("\n");
}
void ImprimirSeparadorFilas()
{
  uint8 m;
  for (m = 0; m <= Columnas; m++)
  {
    printf("----");
    if (m == Columnas) 
    {
      printf("-");
    }
  }
  printf("\n");
}
void ImprimirEncabezado()
{
  ImprimirSeparadorEncabezado();
  printf("|   ");
  uint8 Columna = 'A';
  uint8 l;
  for (l = 0; l < Columnas; l++)
  {
    uint8 m;
    printf("| %c ", Columna);
    Columna++;
if (l + 1 == Columnas)
      {
        printf("|");
      }
    }
  printf("\n");
}
uint8 EnteroACaracter(uint8 Numero)
{
  return Numero + '0';
}

void ImprimirTablero(uint8 Tablero[Filas][Columnas], uint8 DeberiaMostrarMinas)
{
  ImprimirEncabezado();
  ImprimirSeparadorEncabezado();
  uint8 Letra = 'A';
  uint8 l;
  for (l = 0; l < Filas; l++)
  {
    uint8 m;
    printf("| %c ", Letra);
    Letra++;
    for (m = 0; m < Columnas; m++)
    {
      uint8 VerdaderaLetra = EspacioSinDescubrir;
      uint8 LetraActual = Tablero[l][m];
      if (LetraActual == Mina)
      {
        VerdaderaLetra = EspacioSinDescubrir;
      }
      else if (LetraActual == EspacioDescubierto)
      {
        uint8 MinasCercanas = MostrarMinasCercanas(l, m, Tablero);
        VerdaderaLetra = EnteroACaracter (MinasCercanas);
      }
      if (LetraActual == Mina && DeberiaMostrarMinas)
      {
        VerdaderaLetra = Mina;
      }
      printf("| %c ", VerdaderaLetra);
      if (m + 1 == Columnas)
      {
        printf("|");
      }
    }
    printf("\n");
    ImprimirSeparadorFilas();
  }
}
uint8 AbrirCasilla(uint8 FilaLetra, uint8 ColumnaLetra, uint8 Tablero[Filas][Columnas])
{
  FilaLetra = toupper(FilaLetra);
  ColumnaLetra = toupper(ColumnaLetra);
  uint8 Fila = FilaLetra - 'A';
  uint8 Columna = ColumnaLetra - 'A';
  if (Tablero[Fila][Columna] == Mina) 
  {
    return MinaEncontrada;
  }
  if (Tablero[Fila][Columna] == EspacioDescubierto)
  {
    return EspacioYaDescubierto;
  }
  Tablero[Fila][Columna] = EspacioDescubierto;
  return NingunError;
}
uint8 NoHayCasillasSinAbrir(uint8 Tablero[Filas][Columnas])
{
  uint8 l;
  for (l = 0; l < Filas; l++)
  {
    uint8 m;
    for (m = 0; m < Columnas; m++)
    {
      uint8 Actual = Tablero[l][m];
      if (Actual == EspacioSinDescubrir)
      {
        return 0;
      }
    }
  }
  return 1;
}
uint8 main()
{
uint8 x, CantidadDeMinas, e=1;

    while (e == 1)
{
    printf("1) Facil 2) Normal 3) Dificil\n");
    scanf("%d", &x);
    if (x==1)
    {
    e++;
    CantidadDeMinas = 10;
    }
    else if (x==2)
    {
    e++;
    CantidadDeMinas = 20;
    }
    else if (x==3)
    {
    e++;
    CantidadDeMinas = 30;
    }
}
  printf("\n------------------------Juego De Buscaminas----------------------\n");
  uint8 Tablero[Filas][Columnas];
  uint8 DeberiaMostrarMinas = 0;
  srand(getpid());
  IniciarTablero(Tablero);
  ColocarMinasAleatoriamente(Tablero, CantidadDeMinas);
  while (1)
  {
    ImprimirTablero(Tablero, DeberiaMostrarMinas);
    if (DeberiaMostrarMinas) 
    {
      break;
    }
    uint8 Columna;
    uint8 Fila;
    printf("Ingresa la fila y Columna: ");
    scanf(" %c", &Fila);
    scanf(" %c", &Columna);
    printf("\n");
    system("cls");
    uint8 status = AbrirCasilla(Fila, Columna, Tablero);
    if (NoHayCasillasSinAbrir(Tablero))
    {
      printf("Descubriste todas las casillas sin minas, ganaste\n");
      printf("YOU WIN\n");
      DeberiaMostrarMinas = 1;
    } 
      else if (status == EspacioYaDescubierto)
    {
      printf("Ya abirste esa casilla\n");
    } 
      else if (status == MinaEncontrada)
    {
      printf("Pisaste una mina, perdiste\n");
      printf("YOU LOSE\n");
      DeberiaMostrarMinas = 1;
    }
  }
}
