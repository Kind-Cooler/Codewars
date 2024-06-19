/* https://www.codewars.com/kata/526571aae218b8ee490006f4 */

#include <stdio.h>
#include <stddef.h>

size_t countBits(unsigned value)
{
	int i;
	int count = 0;
	for (i = 0; value > 0; i++){
		if (value % 2 != 0){
			count++;
		}
		value = value / 2;
		i++;
	}
	return count;
}

void main (void)
{
	printf ("%d\n", countBits (7));
	
}
