#include <stdio.h>

void main()
{
	int aa[3];
	int *p;
	int i, hap = 0;

	for (i = 0; i <3; i++)
	{
		printf(" %d ��° ���� : " , i+1);
		scanf("%d", &aa[i]);
	}

	p = aa;

	for (i= 0; i <3; i++)
		hap = hap + *(p+i);

	printf("�Է� ������ ��=> %d\n", hap);
}
