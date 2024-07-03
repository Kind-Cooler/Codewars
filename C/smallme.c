/* https://www.codewars.com/kata/56a1c074f87bc2201200002e */
#include <stdio.h>
#include <stddef.h>

// do not allocate memory for the output array
// assign values to preallocated array results
 /* Better: Write a function that given, an array arr, 
  * returns an array containing at each index i the amount 
  * of numbers arr[j] that are smaller than arr[i] for j>i. */

void smaller(size_t length, const int array[length], size_t results[length]) {
    int i, j, c;

    for (i = 0; i < length; i++){
        c = 0;
        for (j = i + 1; j < length; j++){
            if (array[i] > array[j]) c++;
        }

        results[i] = c;
    }

}


int main()
{
    int i;
    size_t len = 3;
    int arr[3] = {1, 2, 0};
    size_t res[3];

    smaller (len, arr, res);
    

    for (i = 0; i < len; i++){
        printf ("%lu\n", res[i]);

    }
}
