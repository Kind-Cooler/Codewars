/* https://www.codewars.com/kata/54ff3102c1bad923760001f3 */

#include <stddef.h>

size_t get_count(const char *s)
{
    int i = 0;
    int count = 0;
    while (s[i] != '\0'){
		switch (s[i]){
			case 'a': 
				count++;
				break;
			case 'e': 
				count++;
				break;
			case 'i': 
				count++;
				break;
			case 'o': 
				count++;
				break;
			case 'u': 
				count++;
				break;
		}
		i++;	
	}
    return count;
}

void main (void)
{
	printf ("%d\n", get_count ("abracadabra"));
}
