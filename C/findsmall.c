/*  https://www.codewars.com/kata/573992c724fc289553000e95/train/c */

#include <stdlib.h>

long long *smallest(long long n) {
    // return a heap-allocated array of 3 long longs:
    return malloc(3 * sizeof(long long));
}

int main ()
{
    long long num = 56756;
    long long *res;

    res = smallest (num);

    printf ("%lld\n", res);


}