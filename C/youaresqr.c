/* https://www.codewars.com/kata/54c27a33fb7da0db0100040e */

#include <stdio.h>
#include <stdbool.h>
#include <math.h> /* must be linked: gcc -Wall youaresqr.c -lm */

bool is_square(int n) {
    return (pow ((int) sqrt (n), 2) == n) ? true : false;
}

int main()
{
    printf ("%d\n", is_square (25));
}