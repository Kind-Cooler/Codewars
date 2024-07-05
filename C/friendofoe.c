/* https://www.codewars.com/kata/55b42574ff091733d900002f */
#include <stdio.h>
#include <string.h>

void filter_friends (const char *names[])
{
  // names[] is NULL-terminated, mutate it
  // You must re-use the pointers in 'names', do not allocate memory
  // Do not forget to NULL-terminate 'names'
    int i = 0, j = 0;
    while (names[i]!=NULL){ 
        if (strlen (names[i]) != 4){
            for (j = i; names[j]!=NULL; j++){
                *(names+j) = *(names +j+1);  
            }
            i--;
        }
        i++;
    }
}

int  main()
{
	const char *nombres[] = {
		 			"Ryan",
                    "Jimmy",
                    "123",
                    "Chalipon",
					"4",
                    "Cool Man",
                    NULL};
	
	//printf ("%s\n", nombres [0]);
	filter_friends (nombres);
    int i = 0;
    printf ("\n");
    while (nombres [i]!=NULL){
        printf ("%s\n", nombres[i++]);
    }	
}
