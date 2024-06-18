/* https://www.codewars.com/kata/52e88b39ffb6ac53a400022e */
#include <stdio.h>
#include <inttypes.h>

void uint32_to_ip (uint32_t number, char *IPv4)
{
// write to IPv4
	int o1,o2,o3,o4;
	
	o4 = number & 255;
	o3 = (number >> 8) & 255;
	o2 = (number >> 16) & 255;
	o1 = (number >> 24) & 255;
	
	sprintf (IPv4,"%d.%d.%d.%d", o1,o2, o3, o4);

}

void main ()
{
	char ip [30];
	uint32_to_ip (2149583361, ip); //0.0.4.210
	
	printf ("%s\n", ip);
}
