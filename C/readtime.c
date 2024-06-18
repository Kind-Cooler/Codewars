/* https://www.codewars.com/kata/52685f7382004e774f0001f7 */

#include <stdio.h>
#include <string.h>

char *human_readable_time (unsigned seconds, char *time_string)
{
	sprintf (time_string, "%02d:%02d:%02d", seconds/3600,(seconds % 3600) / 60,seconds % 60);
	return time_string; // return it
}

void main(void)
{
	char timex[100];
	printf ("%s\n", human_readable_time (3600, timex));
}
