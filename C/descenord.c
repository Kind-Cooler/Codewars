/* https://www.codewars.com/kata/5467e4d82edf8bbf40000155 */
#include <stdio.h>
#include <inttypes.h>
#include <string.h>

uint64_t descendingOrder(uint64_t n)
{
  int i = 0;
  int j = 0;
  int t;
  uint64_t res = 0;
  char num [100];
  
  sprintf (num, "%lu", n);
  
	for (i = 0; i <= strlen(num); i++){
		for (j = i; j <= strlen(num); j++){
			if (num[i] < num [j]){
				t = num[i];
				num[i] = num[j];
				num[j] = t;
			}	  
		}
	}
  sscanf (num, "%lu", &res); 
  return res;
}

int main()
{
		printf ("%lu\n", descendingOrder (145263));
	
}


