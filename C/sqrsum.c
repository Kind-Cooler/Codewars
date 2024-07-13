/*  https://www.codewars.com/kata/515e271a311df0350d00000f */
#include <stdio.h>
#include <stddef.h>

int square_sum(const int values[/* count */], size_t count)
{
    int i=0;
    while (count--){
    i+= values[count] * values[count];
    }
	return i;
}

int main()
{
    size_t c = 3;
    int nums[]={1, 2, 2};
    printf ("%d\n",square_sum (nums, c));

}
