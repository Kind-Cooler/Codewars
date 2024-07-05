/* Inc  https://www.codewars.com/kata/573992c724fc289553000e95  */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long long *smallest(long long n) {
    // return a heap-allocated array of 3 long longs:
    int i = 0, sz, j=0, k=0, idx = 0;
    int dig, dm = 10;
    int digs[100];
    long long tmp;
    long long *nm = (long long *) malloc (3 * sizeof(long long));

    while (n){
        dig = n % 10;
        n = n / 10;
        digs[i]= dig;
        i++;
    }
    sz = i--;
    printf ("sz:%d, i:%d\n", sz, i);
    while (i > 0){
        for (k = i; k >= 0; k--){
            if (digs[k] <= dm) {
                dm = digs[k];
                idx = k;
            }
        }

        printf ("f= sz:%d, idx:%d, i:%d\n", sz, idx, i);

        if (idx == i){
            i--;
            dm = 10;
            printf ("== sz:%d, idx:%d, i:%d\n", sz, idx, i);
        }
        else{
            k = i - idx;
       
            tmp = digs[idx];
            printf ("b idx:%d, i:%d\n", idx, i);

            for (j = idx; j < i; j++){
                digs[j] = digs[j+1];
                printf("j:%d\n", j);
            }
            if (tmp == digs[i])
                idx = i = sz-1;
            digs[j] = tmp;


            printf ("bk idx:%d, i:%d, j:%d\n", idx, i, j);
            break;
        }
       
    }
    printf ("dm:%d, j:%d - i:%d - idx:%d\n", dm, j, i, idx);
    
    if (i == 1){
    nm[1] = nm[2] = 0;
    }
    else{
    nm[2] = sz-1 - i;
    nm[1] = sz-1 - idx;
    }
    
    nm[0] = 0;
    for (k = sz-1; k >= 0; k--){
        tmp = (long long)(pow (10, k));
        if (digs[k]==0 && k == sz-1){
            nm[1] = sz-1-i;
            nm[2] = sz-1-idx;
        }
        nm[0] += digs[k]*tmp;
        printf ("%lld\n", nm[0]);
    }

    return nm;
}

int main ()
{
    long long num = 269045;
    long long *res;

    printf ("%lld\n", num);
    res = smallest (num);

    printf ("%lld, %lld, %lld\n", res[0], res[1], res[2]);

    free(res);

}
