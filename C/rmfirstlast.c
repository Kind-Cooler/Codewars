/* https://www.codewars.com/kata/56bc28ad5bdaeb48760009b0 */	

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* remove_char(char* dst, const char* src)
{
  /* src is the input string */
  /* your solution should write the result into dst and return it */
	unsigned long i=0;
	
	//dst = (char *) calloc ((strlen (src) - 1), sizeof(char));
	
	for (i = 1; i < (strlen (src)-1); ++i)
		dst [i-1] = src[i];
	dst[i-1] = '\0';  

	return dst;
}

int main()
{
	char str [] = "eloquent";
	char dest[1000] = "";
		
	printf ("%s\n", remove_char (dest, str));
	
	//free(dest);
	return 0;
}
