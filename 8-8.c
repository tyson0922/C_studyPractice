#include <stdio.h>

void main()
{
	char ss[5] = "abcd";
	char tt[5];
	int i;

	for(i=0; i<4l; i++)
	{
		tt[i]= ss[3-i] ; 
	}
	tt[4] = '\0';

	printf("�Ųٷ� ����� ���==> %s \n", tt);
}

