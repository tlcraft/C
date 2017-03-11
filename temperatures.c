#include <stdio.h>

/*
	Prints Fahrenheit-Celsius table for fahr = -20, -10, 0, 10, ..., 300
*/

int main()
{
	int fahr, celsius;
	int lower, upper, step;

	lower = -20;	/* lower limit of temperature table */
	upper = 300;	/* upper limit */
	step = 10;		/* step size */

	printf("%s\t%s\n", "Fahrenheit", "Celsius");

	fahr = lower;
	while (fahr <= upper)
	{
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t\t%d\n", fahr, celsius);

		fahr += step;
	}
}