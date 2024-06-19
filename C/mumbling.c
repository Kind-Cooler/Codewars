/* https://www.codewars.com/kata/5667e8f4e3f572a8f2000039 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char *accum(const char *source);

char *accum(const char *source)
{
	int t = strlen (source);
	int newstlen = 0;
	int i = 0;
	int j = 0;
	char lt;
	
	while (t){
		newstlen += (t + 1);
		t--;
	}
	//printf ("%d\n", newstlen);
	char *ptr = (char*) malloc ((newstlen) * sizeof(char));
	
	while (source[j] != '\0'){
		lt = source[j++];
		t = 0;
		while (t < j){ 
			if (t == 0)
				ptr [i++] = toupper(lt);
			else
				ptr [i++] = tolower(lt);
			t++;
		}
		ptr [i++] = '-';
	} 
	
	ptr[--i] = '\0';
	return ptr;
}

void main(void){
	
	char src [1000] = "ZpglnRxqenU";
	char *si = accum (src);
	printf ("%s\n", si);

	free (si);

}
