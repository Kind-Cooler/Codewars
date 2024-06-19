/* https://www.codewars.com/kata/5265326f5fda8eb1160004c8 */
#include <stdio.h>
#include <stdlib.h>

//  return a dynamically allocated C-string
//  this output will be freed by the tester

char *number_to_string(int number) {
    int sizst = 0;
    int num = number;
    int i;
    while (num){
		num = num / 10;
		sizst++;
	}
    if (number <= 0) sizst++;
    //printf ("%d\n" , sizst);
    char *ptr = (char*) malloc ((sizst + 1) * sizeof(char));
	num = 1;
	for (i = 0; i < sizst; ++i){
		if (number < 0 && i == 0){
			ptr [i] = '-';
			number = -number; 
			num = 0;
		}
		else{
			ptr[sizst-num-i] = (number % 10) + '0';	
			number = number / 10;
		}
	}
	ptr[sizst] = '\0';

	return ptr;
}

void main(void)
{
	char *si = number_to_string (-120);
	printf ("%s\n", si);
	free (si);
}
