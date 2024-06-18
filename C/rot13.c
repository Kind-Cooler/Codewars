/* https://www.codewars.com/kata/52223df9e8f98c7aa7000062 */

#include <stdio.h>
#include <stddef.h>

char *rot13(char *str_out, const char *str_in)
{

	int i = 0;
	printf ("%s\n", str_in);
	while (*str_in != 0)
	{
		if (*str_in >= 97 && *str_in <= 122 ){
			if (*str_in + 13 > 122){	
				str_out [i]  = (97 + (*str_in - 110));
			}
			else{
				str_out [i] = (*str_in + 13);
			}
			str_in++;
			i++;
		}
		else if (*str_in >= 65 && *str_in <= 90 ){
			if (*str_in + 13 > 90){
				str_out [i]  = (65 + (*str_in - 78));
			}
			else{
				str_out [i] = (*str_in + 13);
			}
			str_in++;
			i++;
		}
		else{
			str_out [i] = (*str_in);
			str_in++;
			i++;
		}	
    }  
    str_out [i] = '\0';
    return str_out;
}

void main (void)
{
	char ciph[] = "This is my first ROT13 excercise!";
	char res[1000];
	
	printf ("%s\n", rot13 (res, ciph)); // grfg
	printf ("\n");
	
}
