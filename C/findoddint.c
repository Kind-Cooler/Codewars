/* https://www.codewars.com/kata/54da5a58ea159efa38000836 */
#include <stdio.h>
#include <stddef.h>

int find_odd (size_t length, const int array[length])
{
  int odd;
  int cnt = 0; 
  int i = 0;
  int j = 0;
  while (i < length){
	  while (j < length){
		if (array[i] == array[j++])
			cnt++;
	  }
	  if ((cnt % 2) == 1){
		  odd = array[i];
		}
	  j = cnt = 0;
	  i++;
  }
  
  return odd;
}

void main()
{

	int len = 3;
	int arr[3] = {2,0,2};
	int t;
	
	t = find_odd (len, arr);
	printf("%d\n", t);
}
