/*Inc   https://www.codewars.com/kata/550f22f4d758534c1100025a   */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char **dirReduc(const char *const array[], int length_in, int *length_out)
{
/*
  Return a heap-allocated array of constant strings.
  Your array will be freed, but the strings will not be.
  Report the length of your array through the 'length_out' pointer.
*/
    int i, j, x = 0;
    int mask [length_in];
    
    char **reduced = malloc(length_in * sizeof *reduced);
    
    for (i = 0; i < length_in; i++){
        printf ("%s\n", array[i]);
        if (array[i] == "NORTH" && array[i+1] == "SOUTH"){
            ;
        }
        else
        strcpy (reduced[x++], array[i+2]);
    } 

    
    for (i = 0; i < length_in; i++){
        printf ("%s\n", array[i]);
    }

  //const char **reduced = malloc(2 * sizeof *reduced);
  //reduced[0] = "SOUTH";
  //reduced[1] = "NORTH";
  *length_out = x;
  return reduced;
}

int main()
{
    const char *const direct[][10] = {"NORTH", "SOUTH", "SOUTH", 
                                        "EAST", "WEST", "NORTH", "NORTH", "WEST"};
    int len = 8;
    int lout, i;

    char **resp = dirReduc (direct, len, &lout);

    for (i = 0; i < lout; i++)
        printf ("%s  ", resp[i]);
    printf ("\n");

    free (resp);
}
