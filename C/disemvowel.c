/* https://www.codewars.com/kata/52fba66badcd10859f00097e */
#include <stdio.h>
#include <stdlib.h>

//solution must allocate all required memory
//and return a free-able buffer to the caller.

char *disemvowel(const char *str)
{
	int i = 0;
	int j = 0;
	char t;
	
	char *chptr = (char *) malloc ((strlen (str)+1) * sizeof (char));
	
	while (str[i] != '\0' ){
		t = str[i];
		if (t == 'A'|| t == 'a' ||
			t == 'E'|| t == 'e' ||
			t == 'I'|| t == 'i' ||
			t == 'O'|| t == 'o' ||
			t == 'U'|| t == 'u' ){
			i++;
		}
		else{
			chptr [j++] = t;
			i++;
		}
	} 
	chptr[j] = '\0';
	return chptr;
}


void main()
{
	char frase[] = "This website is for losers LOL!";
	char *si = disemvowel (frase);
	printf ("%s\n", si);
	free (si);
}
