/* https://www.codewars.com/kata/53da3dbb4a5168369a0000fe */

#include <stdio.h>

const char* even_or_odd(int number)
{
	if (number % 2 == 0)
		return "Even";
	else
		return "Odd";
}

int main (void)
{
	printf("%s\n", even_or_odd (99));
}
