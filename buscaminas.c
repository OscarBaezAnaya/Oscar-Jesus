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