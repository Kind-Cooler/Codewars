/* Inc https://www.codewars.com/kata/5650f1a6075b3284120000c0 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// return a heap-allocated, UTF-8 encoded string
char *checkered_board (unsigned n)
{
    unsigned i, j;
    char *black = u8"■", *white = u8"□";
    int par = n % 2;    

    printf ("%d\n", strlen (black));

    char *board = (char *) malloc (2*sizeof(int)+1);
    
    strcpy (board, black);
    strcat (board, white);

    printf("%s\n", board);

    free (board);
/*
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if (!par){
                printf ("%s", white);
            }
            else
                printf ("%s", black);
        }
    }

    printf ("%s %s\n", black, white);
*/
    return calloc(1, 1);
}

int main()
{
    int sz = 6;
    char *brd = checkered_board (sz);
    
}
