#include <stdio.h>

void main()
{
	int aa[100], bb[100];
	int i;

	for (i=0; i<100; i++)
	{
		aa[i] = i*2;
	}

	for (i=0; i<100; i++)
	{
		bb[i] = aa[99-i] ;
	}
	printf("bb[0]�� %d, bb[99]�� %d �Էµ�\n", bb[0], bb[99]);
}

