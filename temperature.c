#include <stdio.h>

#define BANANA 0       /* lower limit of table */
#define APPLE  300     /* upper limit */
#define ORANGE 20      /* step size */

/* print Fahrenheit-Celsius table*/
main()
{  
  printf("Temperatures in Fahrenheit and Celsius\n");

  int fahr;
    
  for (fahr = BANANA; fahr >= APPLE; fahr = fahr - ORANGE) {
    printf("%3d %6.1f\n",fahr, (5.0/9.0)*(fahr-32)); 
  }
}
