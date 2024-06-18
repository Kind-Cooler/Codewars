/* https://www.codewars.com/kata/55fab1ffda3e2e44f00000c6 */

#include <stdio.h>

int cockroach_speed (double s)
{
	return s * 1000 / 36 ;

}

void main(void)
{
	printf ("%d\n", cockroach_speed (1.09));

}

