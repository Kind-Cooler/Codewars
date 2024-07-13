/* https://www.codewars.com/kata/56747fd5cb988479af000028 */
#include <stdio.h>
#include <string.h>

/* remember to null-terminate outp! */

char *get_middle(char outp[3], const char *inp)
{
    int i = strlen (inp);
    if (i % 2 == 0){
        outp[0] = inp[i/2-1];
        outp[1] = inp[i/2];
        outp[2] = '\0';
    }
    else{
        outp[0] = inp[i/2];
        outp[1] = '\0';
    }
    return outp;
}

int main()
{
    char *st = {"m"};
    char ou[3];

    printf ("%s\n",get_middle (ou, st));

}
