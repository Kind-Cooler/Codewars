/* https://www.codewars.com/kata/5168bb5dfe9a00b126000018 */
#include <stdio.h>
#include <string.h>

char *strrev (char *string)
{
  int i;
  char t;
  int lnst = strlen (string);
  for (i = 0; i < lnst/2; i++){
	  t = string [i];
	  string [i] =  string [lnst - 1 - i];
	  string [lnst - 1 - i] = t;	  
  }
  
  return string; // reverse the string in place and return it
}

void main()
{
	char ss[] = "dollar";
	
	printf ("%s\n", strrev (ss));
}
