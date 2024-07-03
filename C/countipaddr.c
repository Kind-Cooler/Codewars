/* https://www.codewars.com/kata/526989a41034285187000de4 */
#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <stdio.h>

/* Implement a function that receives two IPv4 addresses, and returns 
 * the number of addresses between them (including the first one, excluding the last one).
 * All inputs will be valid IPv4 addresses in the form of strings. The last address 
 * will always be greater than the first one.*/

uint32_t ips_between (const char *start, const char *end)
{
	unsigned int qips = 0;
	int stoc, enoc;
	char oct[4];
	int i, k, j;
	int no = 0;
	i = j = k = 0;
	while (no++ < 4){	
		while (start[k] != '.' && start[k] != '\0')
			oct [j++] = start[k++];
		oct[j] = '\0';
		stoc = atoi(oct);
		j = 0;
		k++;	
		
		while (end[i] != '.' && end[i] != '\0')
			oct[j++] = end[i++];
		oct[j] = '\0';
		enoc = atoi(oct);
		j = 0;
		i++;	
		
		switch (no-1){
			case 0:
				qips += (enoc - stoc) * 16777216;
				//printf ("case 0 \n");
				break;
			case 1:
				qips += (enoc - stoc) * 65536;
				//printf ("case 1 \n");
				break;
			case 2:
				qips += (enoc - stoc) * 256;
				//printf ("case 2 \n");
				break;
			case 3:
				qips += (enoc - stoc);
				//printf ("case 3 \n");
				break;
		}
	}
	return qips;
}

void main(void)
{
	printf ("%u\n", ips_between ("0.0.0.0", "255.255.255.255"));
}
