/* https://www.codewars.com/kata/5270d0d18625160ada0000e4 */

#include <stdio.h>

int score(const int dice[5]) {

	int i, c1,c2,c3,c4,c5,c6;
	int pts = 0;
	c1 = c2 = c3 = c4 = c5 = c6 = 0;
	for (i = 0; i < 5; ++i){
		switch (dice[i]){
			case 1:
				c1++;
				break;
			case 6:
				c6++;
				break;
			case 5:
				c5++;
				break;
			case 4:
				c4++;
				break;
			case 3:
				c3++;
				break;
			case 2:
				c2++;
				break;
		}
	}
	
	if (c1 >= 3) {
		pts += 1000;
		c1 = c1 % 3;
	}
	if (c1) pts += 100 * c1;
	if (c6 >= 3) pts += 600;
	if (c5 >= 3) {
		pts += 500;
		c5 = c5 % 3;
	}
	if (c5) pts += 50 * c5;	
	if (c4 >= 3) pts += 400;
	if (c3 >= 3) pts += 300;
	if (c2 >= 3) pts += 200;

	return pts;
}

void main(void)
{
	int di[5] = {2,4,4,5,4};
	printf ("%d\n", score (di));
}
