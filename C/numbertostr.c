#include <stdlib.h>

//  return a dynamically allocated C-string
//  this output will be freed by the tester

char *number_to_string(int number) {

    //  <----  hajime!
    int sizst = 0;
    int num = number;
    while (num){
		num = num / 10;
		sizst++;
	}
    printf ("%d\n" , sizst);
    char *ptr;
    prt = (char*) malloc (sizst * sizeof(char));
       
    *ptr++ = 'Y';
    *prt = '\0';
    
    printf ("%s\n", ptr);
	return ptr;
}

void main(void)
{
	char *si;
	si = number_to_string (123);
}
