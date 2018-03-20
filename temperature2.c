#include <stdio.h>

/* print Celsius-Fahrenheit table*/
main()
{  

  printf("Temperatures in Celsius and Fahrenheit \n");

  int cels;
    
  for (cels = 0; cels <= 150; cels = cels + 10)
    printf("%3d %6.1f\n",cels, ((cels*(9.0/5.0))+32)); 
}
