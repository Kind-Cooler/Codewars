/* https://www.codewars.com/kata/513e08acc600c94f01000001 */

#include <stdio.h>
#include <string.h>


void rgb (int r, int g, int b, char hex[6 + 1])
{
  // write to the hex string
  if (r < 0) r = 0;
  if (r > 255) r = 255;
  if (g < 0) g = 0;
  if (g > 255) g = 255;
  if (b < 0) b = 0;
  if (b > 255) b = 255;
  
  *hex = '\0';
  sprintf (hex,"%02X%02X%02X", r, g, b);

}

void main(void)
{
	char nhex[7];
	
	rgb (-20,0,255,nhex);
	
	printf ("%s\n", nhex);
	
	
}
