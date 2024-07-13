/* Inc https://www.codewars.com/kata/51b66044bce5799a7f000003  */

#include <stdio.h>
#include <string.h>
#include <math.h>

unsigned from_roman (const char *roman)
{
  return 0;
}

void to_roman(unsigned number, char *roman)
{
    int i, dig, n = number;
    char *uni[] = {".","I","II","III","IV","V","VI","VII","VIII","IX"};
    char *dec[] = {"X", "L", "C", "M"};
    char *tmp;
    char dt[100]= "";
    
    i = 0;
    while (n){
        dig = n % 10;
        n = n / 10;
        dig = dig * pow (10,i);
        printf ("%d\n", dig);
//        strcat (dt,uni[dig]);
        i++;
    }
    printf ("%s\n", dt);
  *roman = '\0';
}

void conv (int val, int dec)
{
    dec == 0 I V  IX:
    dec == 1 XI L XC
    dec == 2 CX D CM

}


int main ()
{
    char retrom[1000];

    to_roman (1610, retrom);
    printf ("%s\n", retrom);

}
