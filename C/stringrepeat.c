/* https://www.codewars.com/kata/57a0e5c372292dd76d000d7e */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *repeat_str(size_t count, const char *src)
{
// allocate a string on the heap
	char *ps;
	size_t i;
		
	ps = (char * ) calloc (count*(strlen(src)+1), sizeof(char));

	for (i = 0; i < count; ++i){
		strcat (ps, src);
	}
	
	return ps;
}

int main()
{
	char sou[] = "Hello";
	char *si;
	
	si = repeat_str (3, sou);
	printf ("%s\n", si);
	free (si);
	return 0;
}
