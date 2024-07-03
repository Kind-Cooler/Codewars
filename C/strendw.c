/*   https://www.codewars.com/kata/51f2d1cafc9c0f745c00037d */

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool solution(const char *string, const char *ending)
{
    int leni = strlen(string);
    int lenf = strlen(ending);
    if (leni < lenf) return false;
    while (lenf--){
        leni--;
        if (string[leni] == ending[lenf])
            ;
        else
            return false;
    }
    return true;
}

int main()
{
    char ini[] = "ails";
    char fin[] = "fails";

    printf ("%d\n", solution (ini, fin));


}
