/* https://www.codewars.com/kata/554b4ac871d6813a03000035 */ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void high_and_low (const char *strnum, char *result)
{
	char ns[100] = "";
	int max, min, fg = 1;
	int i = 0, j = 0;
	while (i <= strlen(strnum)) {
		if (strnum[i] != ' ' && strnum[i] != '\0'){
			ns[j++] = strnum[i++];
			// printf ("i: %d\n", i);
		}
		else {
			ns[j] = '\0';
			i++;
			// printf ("ie: %d\n", i);
			j = 0;
			if (fg){
				max = min = atoi(ns);
				fg = 0;
			}
			if (atoi(ns) > max) max = atoi(ns);
			if (atoi(ns) < min) min = atoi(ns);
			//printf ("%2d  %2d\n", max, min);
		}
	} 
	
// print your answer to result
	sprintf(result, "%d %d", max, min);
}

void main()
{
	char res[1000];
	high_and_low("42 -4 55", res);
	printf ("%s\n", res);
}
