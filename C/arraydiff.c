/* https://www.codewars.com/kata/523f5d21c841566fde000009 */ 

#include <stdio.h>
#include <stdlib.h>

//  return a dynamically allocated array
//  assign the length of this array to *z
//  memory will be freed by the test suite
// NOTE: In C, assign return array length to pointer *z

int *array_diff(const int *arr1, size_t n1, const int *arr2, size_t n2, size_t *z) 
{
	int i, j, t, x = 0, p = 0;
	int ind[n1];
	int war1[n1];
	for (i = 0; i < n1; i++) war1[i] = arr1[i];

	for (i = 0; i < n2; i++){
		for (j = 0; j < n1; j++){
			if (arr2[i] == war1[j]){
				;
			}
			else {
				ind[x] = j;
				/* printf ("x:%d, j:%d, %d\n", x, j, war1[j]); */
				x++;	
			}
		}
		for (p = 0; p < x; p++){
			t = war1[ind[p]];
			war1[p] = t;
		}
		n1 = x;
		x = 0;
	}
	
	if (n2 == 0) p = n1;
	*z = p;
	/* printf ("malloc: %lu\n", *z); */
	int *diff = malloc(*z * sizeof(int));
	
	for (i = 0; i < *z; i++) diff[i] = war1[i];

	return diff;
}

int main()
{
	size_t zp;
	int ar1[] = {1, 2, 3, 4, 5};
	int ar2[] = {1,3,4};
	int i;
	int *p = array_diff (ar1, 5, ar2, 3, &zp);

	for (i = 0; i < zp; i++)
		printf ("%d ", p[i]);
	printf ("\n");
	free (p);
}
