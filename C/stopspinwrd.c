/* https://www.codewars.com/kata/5264d2b162488dc400000001 */

#include <stdio.h>

void spin_words(const char *sentence, char *result) {

	int lenwd=0;
	int t, i, j, p0;

	p0 = i = 0;
	while (1){
		result [i] = sentence [i];
		if (result[i] == ' ' || sentence[i] == '\0'){
			lenwd = i - p0;
			//printf ("i: %d\n", i);
			//printf ("Esp indx: %d\n", lenwd);
			
			if (lenwd >= 5)
				for (j = 0; j < (lenwd / 2); j++){
					t = result[i-lenwd+j];
					result[i-lenwd+j] = result[i-j-1];
					result[i-j-1] = t;
				}
			if (result[i] == '\0') break;			
			p0 = i + 1;
		}
		i++;
	}
}

int main()
{
	char sen[] = "Just kidding there is still one more";
	char res[10000];
	
	spin_words (sen, res);
	
	printf ("%s\n", res);

}
