/* https://www.codewars.com/kata/55b42574ff091733d900002f */
#include <stdio.h>

void filter_friends (const char *names[])
{
  // names[] is NULL-terminated, mutate it
  // You must re-use the pointers in 'names', do not allocate memory
  // Do not forget to NULL-terminate 'names'

	printf ("%s\n", names);
	printf ("%c\n", names[1]);
	
  
}

void main()
{
	char nombres[10][20] = {
								"Carlos",
								"Luis",
								"Toby",
								"Ana"
								
							};
	
	//printf ("%s\n", nombres [2][1]);
	filter_friends (nombres[2]);
	
}
