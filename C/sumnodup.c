/* https://www.codewars.com/kata/5993fb6c4f5d9f770c0000f2 */
#include <stdio.h>
#include <stddef.h>

int sum_no_duplicates(size_t length, const int array[length]) {

    int i, j, f, sum = 0;;
    for (i = 0; i < length; i++){
        f = 0;
        for (j = 0; j < length; j++){
            if (array[i] == array [j] && i == j){ 
                f = 1;
            }
            if (array[i] == array[j] && i != j){
                f = 0;
                break;
            }
        }
        if (f)
            sum += array[i];
        
   }
    
    return sum;
}

int main()
{
    int len = 5;
    int arr[5] = {1, 1, 2, 2, 3};

    printf ("%d\n", sum_no_duplicates (len, arr));

}
