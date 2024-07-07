/* https://www.codewars.com/kata/55a2d7ebe362935a210000b2   */
#include <stdio.h>
#include <stddef.h>

int find_smallest_int(const int array[/* len */], size_t len)
{
    int sml = array[len-1];
    
    while ((len--) > 0)
        if (array[len] < sml)
            sml = array[len]; 

    return sml;
}

int main()
{
    int arr[] = {1,-15,88,2};
    size_t l = 4;

    printf ("%d\n", find_smallest_int (arr, l));

}
