/* Inc https://www.codewars.com/kata/51ba717bb08c1cd60f00002f */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *range_extraction(const int *args, size_t n)
{
    size_t i, cr = 0;
    char its[64];
    char *ptr = (char *) malloc (100000);
    ptr[0] = '\0';

    for (i = 0; i < n; i++){
        if (cr == 0){
           // printf ("%d\n", args[i]);
            sprintf (its,"%d", args[i]);
            strcat (ptr, its);
        }
        if (args[i+1] == args[i]+1){
            cr++;
        }
        else if (cr >= 2){
            //printf ("+ %d\n", args[i]);
            cr = 0;
            sprintf (its,"-%d", args[i]);
            strcat (ptr, its);
        }
        else if (cr){
            if (cr == 1) strcat (ptr, ",");
            //printf ("%d\n", args[i]);
            sprintf (its,"%d", args[i]);
            strcat (ptr, its);
            cr = 0;
        }
        if (cr == 0)
            strcat(ptr, ",");

    }
    ptr [strlen (ptr)-1] = '\0';
    return ptr;
}

int main()
{
    int i;
    int sz = 1;
    int nums[1] = {9};
    char *res;
    for (i = 0; i < sz; i++){
        printf ("%d, ", nums[i]);
    }
    printf ("\n");

    res = range_extraction(nums, sz);
    printf ("%s\n", res);

    free (res);
}
