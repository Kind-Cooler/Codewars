/*  https://www.codewars.com/kata/52742f58faf5485cae000b9a */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fminput (int, char *, char *);
char *formatDuration (int n) {
       
    int secs, mins, hrs, days, yrs;
    int ryrs, rdays, rhrs; 
    char *dur = (char*) malloc (1000);        
    dur[0]='\0';

    printf ("%d secs\n", n);

    if (n == 0) {
        strcat (dur, "now");
        return dur;
    }

       yrs = n / 31536000;
       ryrs = n % 31536000;
       days = ryrs / 86400;
       rdays = ryrs % 86400;
       hrs = rdays / 3600;
       rhrs = rdays % 3600;
       mins = rhrs / 60;
       secs = rhrs % 60;


       printf ("y:%d, d:%d, h:%d, m:%d, s:%d\n", yrs, days, hrs, mins, secs);

    if (yrs){
        fminput (yrs, "year", dur);
    }

    if (days){
        if ((hrs || mins || secs) && (yrs))
            strcat (dur, ", ");
        else if (yrs)
            strcat (dur, " and ");
        fminput (days, "day", dur);
    }

    if (hrs){
        if ((mins || secs) && (yrs || days)) 
            strcat (dur, ", ");
        else if (yrs || days)
            strcat (dur, " and ");
        fminput (hrs, "hour", dur);

    }

    if (mins){     
        if (secs && (yrs || days || hrs)) 
            strcat (dur, ", ");
        else if (yrs || days || hrs)
            strcat (dur, " and ");
        fminput (mins, "minute", dur);
    }

    if (secs){
        if (yrs || days || hrs || mins) strcat (dur, " and ");
        fminput (secs, "second", dur);
    }


    return dur;
}

void fminput (int qty, char *type, char *strg)
{
    char tmp[100];
    sprintf (tmp, "%d", qty);
    strcat (strg, tmp);
    if (qty == 1)
        sprintf (tmp, " %s", type);
    else
        sprintf (tmp, " %ss", type);
    strcat (strg, tmp);
}

int main ()
{
    int s = 3665;
    char *outp;

    outp = formatDuration (s);

    printf ("%s\n", outp);

    free (outp);
}
