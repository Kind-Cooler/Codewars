/* https://www.codewars.com/kata/525f50e3b73515a6db000b83 */
#include <stdio.h>
#include <stdint.h>

char *create_phone_number(char phnum[15], const uint8_t digits[10])
{
// write to phnum and return it
// it must be nul-terminated
int i = 0;

	while (i < 10){
		switch (i){
			case 0:
				*phnum++ = '(';

				break;
			case 3:
				*phnum++ = ')';
				*phnum++ = ' ';
				break;
			case 6:
				*phnum++ = '-';
				break;
				
		}
		*phnum++ = digits[i++] + '0';
	}
	*phnum = '\0';
    return phnum;
}
/* //error at function declaration uint vs char array
char* create_phone_number(char phnum[15], const unsigned char n[10]) {
    sprintf(phnum, "(%d%d%d) %d%d%d-%d%d%d%d",
        n[0], n[1], n[2], n[3], n[4], n[5], n[6], n[7], n[8], n[9]);
    return phnum;
}
*/
void main (void)
{
	char digits[10]= { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
	char result [15];
	char *res;
	res = create_phone_number (result, digits);
	printf ("%s\n", result);
}
