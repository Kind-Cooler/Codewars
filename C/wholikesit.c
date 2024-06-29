/* https://www.codewars.com/kata/5266876b8f4bf2da9b000362 */

#include <stdio.h>
#include <stdlib.h>

// result string must be a heap-allocated, nul-terminated string
// to be freed by the tests suite

char *likes(size_t n, const char *const names[n]) {
    
    int i;
    for (i = 0; i < n; i++)
        printf ("%s\n", names[i]);

    char *ret = (char*) malloc (1000);

    if (n == 0)
        sprintf (ret, "no one likes this");
    if (n == 1)
        sprintf (ret, "%s likes this", names[0]);
    if (n == 2)
        sprintf (ret, "%s and %s like this", names[0], names[1]);
    if (n == 3)
        sprintf (ret, "%s, %s and %s like this", names[0], names[1], names[2]);
    if (n >= 4){
        i = n - 2;
        sprintf (ret, "%s, %s and %d others like this", names[0], names[1], i);
    }

    return ret;
}


int main()
{
    int l = 5;
    char *nam[][10] = {"Peter", "Jun", "Alex", "Mark", "Max"};
    char *msg = likes(l, nam);

    printf ("%s\n", msg);


    
}