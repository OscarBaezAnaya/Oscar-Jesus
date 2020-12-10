#include "SM.h"
#include "BML.h"

void BML ( void ) 
{
	StatesMachine ();
	delay(5);
}


void delay ( int number_of_seconds ) 
{ 
    int milli_seconds = 1000 * number_of_seconds; 
  
    clock_t start_time = clock(); 
   
    while (clock() < start_time + milli_seconds); 
} 

