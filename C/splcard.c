/* https://www.codewars.com/kata/53417de006654f4171000587  */
#include <stdio.h>
#include <stddef.h>
#include <ctype.h>
int val (char);

char *game_outcome (size_t n, const char steve[n], const char josh[n], char *outcome)
{
    int i = 0;
    int ps = 0;
    int pj = 0;
    while (i < n){
        if (val(steve[i])==val(josh[i]))
            ;
        if (val(steve[i]) > val(josh[i]))
            ps++;

        if (val(steve[i]) < val(josh[i]))
            pj++;
        i++;
    }

    if (ps > pj)
        sprintf (outcome, "Steve wins %d to %d", ps, pj);
    if (ps < pj)
        sprintf (outcome, "Josh wins %d to %d", pj, ps);
    if (ps == pj)
        sprintf (outcome, "Tie");
	
	return outcome;
}

int val (char x)
{
    if (isdigit (x)) return x - '0';
    if (x == 'T') return 10;
    if (x == 'J') return 11;
    if (x == 'Q') return 12;
    if (x == 'K') return 13;
    if (x == 'A') return 14;
}


int main()
{
    size_t nc = 10;
    char st[10] = {'K', '2', '4', '5', '4', '3', '2', 'K', 'A', 'T'};
    char jo[10] = {'Q', '3', '4', '6', '4', '3', '5', 'A', '8', '7'};

    char *res[100];
    char *p;

    p = game_outcome (nc, st, jo, res); 
    
    printf ("%s\n", p);

}
