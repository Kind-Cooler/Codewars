/* https://www.codewars.com/kata/5715eaedb436cf5606000381 */

#include <stdio.h>

#include <stddef.h>

int positive_sum(const int *values, size_t count);

int positive_sum (const int *values, size_t count)
{
	int sum = 0;
	while (count--)
	{
		if (*values > 0)
			sum = sum + *values;
		values++;
	}
	return sum;
	
}


void main()
{
	int nums[1] = {-3};
	printf ("%d\n", positive_sum (nums, 1));

}
