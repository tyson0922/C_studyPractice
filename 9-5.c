#include <stdio.h>

void main()
{
	int aa[3] = {10, 20, 30};

	printf("&aa[0]�� %d, aa+0�� %d \n", &aa[0], aa+0);
	printf("&aa[1]�� %d, aa+1�� %d \n", &aa[1], aa+1);
	printf("&aa[2]�� %d, aa+2�� %d \n", &aa[2], aa+2);
}

