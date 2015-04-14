/* Tabla Celsius-Fahrenheit.
* Facundo Castellano
* 12/04/2015
*/

#include <stdio.h>

main()
{
	
	int celsius;
	
	/* Tabla Celsius-Fahrenheit */
	
	for (celsius = 300; celsius >= 0; celsius = celsius -20)
		printf("%3d\t %6.1f\n", celsius, celsius * (9.0/5.0) + 32.0);
	
}

