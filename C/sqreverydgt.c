/* https://www.codewars.com/kata/546e2562b03326a88e000020 */
#include <stdio.h>
#include <limits.h>

unsigned long long square_digits (unsigned n)
{
	unsigned long long sum = 0, p=1, num = n, mul = 1, dec = 1, i, x, j;
	
	printf ("%u\n", n);
	while (num){
		i = num % 10;
		num /= 10;
		mul = i*i;
		// printf ("%llu x ", mul);
		j = 1;
		while (mul > 9){
			mul /= 10;
			j++;	
		}
		// printf ("%llu - ", dec);
		sum = sum + (i*i)*(dec);
		// printf ("\n%llu\n", sum);
		p = 1;
		for (x = 0; x < j; x++)
			p = p * 10;
		dec = dec * p;
	}
	return sum;
}

void main()
{
	printf ("\n%llu\n", square_digits (3210987654));
	printf ("%llu\n", ULLONG_MAX);
}
