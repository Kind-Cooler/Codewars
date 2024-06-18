/* https://www.codewars.com/kata/54ff3102c1bad923760001f3 */

#include <stdio.h>
#include <stddef.h>

size_t get_count(const char *s)
{
	size_t count = 0; /* unsigned integral type stddef.h, en lugar de int*/
	while (*s != 0)
	{
		if (*s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u')
			count ++;
		s++;
	} 
	return count;
}


void main(void)
{
	char str[20] = "abracadabroco";
	
	printf ("%d\n", get_count(str));
	return 0;
}

