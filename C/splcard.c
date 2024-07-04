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
        sprintf (outcome, "John wins %d to %d", pj, ps);
    if (ps == pj)
        sprintf (outcome, "Tie");
	
 //   outcome[0] = 'Q';
   // outcome[1] = '\0';
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
    size_t nc = 2;
    char st[2] = {'T', '9'};
    char jo[2] = {'T', '8'};

    char *res[100];
    char *p;

    p = game_outcome (nc, st, jo, res); 
    
    printf ("%s\n", p);

}
