/* https://www.codewars.com/kata/523f5d21c841566fde000009 */ 

#include <stdio.h>
#include <stdlib.h>

//  return a dynamically allocated array
//  assign the length of this array to *z
//  memory will be freed by the test suite
// NOTE: In C, assign return array length to pointer *z

int *array_diff(const int *arr1, size_t n1, const int *arr2, size_t n2, size_t *z) {

	int *diff = (int *) malloc(z * sizeof(int));
	
	return diff;
}

void main()
{
	
	int zp = 0;
	
	int *iarr = array_diff ({1, 2, 2, 2, 3}, 5, {2}, 1, zp);
	free (iarr);
}
