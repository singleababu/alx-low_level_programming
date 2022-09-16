#include <stdio.h>

#include <math.h>



/**

 * comments goes here

 */

int main(void)

{

	int c;

	long num = 612852475143;



	for (c = (int) sqrt(num); c > 2; c++)

	{

		if (num % c == 0)

		{

			printf("%d\n", c);

			break;

		}

	}



	return (0);

}
