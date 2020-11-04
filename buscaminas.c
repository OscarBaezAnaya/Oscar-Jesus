#include <assert.h>
#include <ctype.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define MinaEncontrada 1
#define EspacioYaDescubierto 2
#define NingunError 3

#define Columnas 9
#define Filas 9
#define EscacioSinDescubrir '.'
#define EspacioDescubierto ' '
#define Mina '*'
#define CantidadDeMinas / 45

int MostrarMinasCercanas(int Fila, int Columna, char Tablero[Filas][Columnas])
{
int Conteo = 0, FilaInicio, FilaFin, ColumnaInicio, ColumnaFin;
if (Fila <= 0)
{
FilaInicio = 0;
}
else 
{
FilaInicio = Fila - 1;
}
if 
(Fila + 1 >= Filas) {
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
  int m;
  for (m = FilaInicio; m <= FilaFin; m++) {
    int l;
    for (l = ColumnaInicio; l <= ColumnaFin; l++) {
      if (Tablero[m][l] == Mina) {
        Conteo++;
      }
    }
  }
  return Conteo;
}
int AleatorioEnRango(int Minimo, int Maximo)
{
  return Minimo + rand() / (Rand_Max / (Maximo - Minimo + 1) + 1);
}
void IniciarTablero(char Tablero[Filas][Columnas])
{
  int l;
  for (l = 0; l < Filas; l++) {
    int m;
    for (m = 0; m < Columnas; m++) {
      Tablero[l][m] = EscacioSinDescubrir;
    }
  }
}

void ColocarMina(int Fila, int Columna, char Tablero[Filas][Columnas])
{
  Tablero[Fila][Columna] = Mina;
}
void ColocarMinasAleatoriamente(char Tablero[Filas][Columnas]) {
  int l;
  for (l = 0; l < CantidadDeMinas; l++) {
    int Fila = AleatorioEnRango(0, Filas- 1);
    int Columna = AleatorioEnRango(0, Columnas - 1);
    colocarMina(Fila, Columna, Tablero);
  }
}
void imprimirSeparadorEncabezado() 
{
  int m;
  for (m = 0; m <= Columnas; m++) 
  {
    printf("-----");
    if (m + 2 == Columnas) 
    {
      printf("--");
    }
  }
  printf("\n");
}
void ImprimirSeparadorFilas()
{
  int m;
  for (m = 0; m <= Columnas; m++)
  {
    printf("+----");
    if (m == Columnas) 
    {
      printf("+");
    }
  }
  printf("\n");
}
void ImprimirEncabezado() {
  ImprimirSeparadorEncabezado();
  printf("|    ");
  int l;
  for (l = 0; l < Columnas; l++) {
    printf("| %d ", l + 1);
    if (l + 1 == Columnas) {
      printf("|");
    }
  }
  printf("\n");
}
char EnteroACaracter(int Numero)
{
  return Numero + '0';
}

void ImprimirTablero(char Tablero[Filas][Columnas], int DeberiaMostrarMinas)
{
  ImprimirEncabezado();
  ImprimirSeparadorEncabezado();
  char Letra = 'A';
  int l;
  for (l = 0; l < Filas; l++)
  {
    int m;
    printf("| %c ", Letra);
    Letra++;
    for (m = 0; m < Columnas; m++)
    {
      char VerdaderaLetra = EscacioSinDescubrir;
      char LetraActual = Tablero[l][m];
      if (LetraActual == Mina)
      {
        VerdaderaLetra = EscacioSinDescubrir;
      }
      else if (LetraActual == EspacioDescubierto)
      {
        int MinasCercanas = ObtenerMinasCercanas(l, m, Tablero);
        VerdaderaLetra = EnteroACaracter(MinasCercanas);
      }
      if (LetraActual == Mina && (DEBUG || DeberiaMostrarMinas))
      {
        VerdaderaLetra = Mina;
      }
      printf("| %c ", VerdaderaLetra);
      if (m + 1 == Columnas) {
        printf("|");
      }
    }
    printf("\n");
    imprimirSeparadorFilas();
  }
}