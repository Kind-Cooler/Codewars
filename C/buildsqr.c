/*  https://www.codewars.com/kata/59a96d71dbe3b06c0200009c  */

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

char *generate_shape (size_t n)
{
    if (!(n > 0 && n < 51)) 
        return "Fuera de rango";
    
    int i = 0, j = 0;

    char *sq = (char *) malloc ((n+1)*(n)*sizeof(char));

    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            sq[i*(n+1) + j] = '+';
        }
        sq[i*(n+1) + j] = '\n';
    }
    sq[(i-1)*(n+1) + j] = '\0';
    return sq;
}

int main ()
{
    size_t num = 5;
    char *shp = generate_shape (num);

    printf ("%s", shp);
    free (shp);

}
