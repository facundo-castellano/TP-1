/* Tabla Fahrenheit-Celsius.
* Facundo Castellano
* 12/04/2015
*/

#include <stdio.h>

main()
{
	
	int fahr;
	
	/* Tabla Fahrenheit-Celsius en orden inverso*/
	
	for (fahr = 300; fahr >= 0; fahr = fahr -20)
		printf("%3d\t %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
	
}

