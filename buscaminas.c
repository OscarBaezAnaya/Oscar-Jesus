#include <ctype.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define MinaEncontrada 1
#define EspacioYaDescubierto 2
#define NingunError 3

#define Columnas 15
#define Filas 15
#define EscacioSinDescubrir '#'
#define EspacioDescubierto ' '
#define Mina '@'
#define CantidadDeMinas 225
#define DEBUG 0 

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
  int m;
  for (m = FilaInicio; m <= FilaFin; m++)
  {
    int l;
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
int AleatorioEnRango(int Minimo, int Maximo)
{
  return Minimo + rand() / (RAND_MAX / (Maximo - Minimo + 1) + 1);
}
void IniciarTablero(char Tablero[Filas][Columnas])
{
    int l;
    for (l = 0; l < Filas; l++) 
  {
    int m;
    for (m = 0; m < Columnas; m++) 
    {
      Tablero[l][m] = EscacioSinDescubrir;
    }
  }
}

void ColocarMina(int Fila, int Columna, char Tablero[Filas][Columnas])
{
  Tablero[Fila][Columna] = Mina;
}
void ColocarMinasAleatoriamente(char Tablero[Filas][Columnas])
{
  int l;
  for (l = 0; l < CantidadDeMinas; l++)
  {
    int Fila = AleatorioEnRango(0, Filas- 1);
    int Columna = AleatorioEnRango(0, Columnas - 1);
    ColocarMina(Fila, Columna, Tablero);
  }
}
void ImprimirSeparadorEncabezado() 
{
  int m;
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
  int m;
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
  char Columna = 'A';
  int l;
  for (l = 0; l < Columnas; l++)
  {
    int m;
    printf("| %c ", Columna);
    Columna++;
if (l + 1 == Columnas)
      {
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
        int MinasCercanas = MostrarMinasCercanas(l, m, Tablero);
        VerdaderaLetra = EnteroACaracter (MinasCercanas);
      }
      if (LetraActual == Mina && (DEBUG || DeberiaMostrarMinas))
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
int AbrirCasilla(char FilaLetra, char ColumnaLetra, char Tablero[Filas][Columnas])
{
  FilaLetra = toupper(FilaLetra);
  ColumnaLetra = toupper(ColumnaLetra);
  int Fila = FilaLetra - 'A';
  int Columna = ColumnaLetra - 'A';
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
int NoHayCasillasSinAbrir(char Tablero[Filas][Columnas])
{
  int l;
  for (l = 0; l < Filas; l++)
  {
    int m;
    for (m = 0; m < Columnas; m++)
    {
      char Actual = Tablero[l][m];
      if (Actual == EscacioSinDescubrir)
      {
        return 0;
      }
    }
  }
  return 1;
}

int main()
{
  printf("\n\n------------------------Juego De Buscaminas----------------------\n");
  char Tablero[Filas][Columnas];
  int DeberiaMostrarMinas = 0;
  srand(getpid());
  IniciarTablero(Tablero);
  ColocarMinasAleatoriamente(Tablero);
  while (1)
  {
    ImprimirTablero(Tablero, DeberiaMostrarMinas);
    if (DeberiaMostrarMinas) 
    {
      break;
    }
    int Columna;
    char Fila;
    printf("Ingresa la fila y Columna: ");
    scanf(" %c", &Fila);
    scanf("%c", &Columna);
    printf("\n");
    int status = AbrirCasilla(Fila, Columna, Tablero);
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
  return 0;
}