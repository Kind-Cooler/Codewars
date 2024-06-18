/* https://www.codewars.com/kata/514b92a657cdc65150000006 */
#include <stdio.h>

int solution (int number){
	int sum = 0;
	int i;
	for (i = number - 1; i > 0; i--){
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	
	return sum;
}

void main (void){
	printf ("%d\n", solution (10));
}
