#include <stdio.h>

void main()
{
	int aa[100000];
	int *p;
	int i, hap=0;
	int cnt;

	printf(" �Է��� ������ ? ");
	scanf("%d", &cnt);

	for (i = 0; i <cnt ; i++)
	{
		printf(" %d ��° ���� : ", i+1);
		scanf("%d", &aa[i]);
	}

	p = aa;
	for (i=0; i<cnt; i++)
		hap = hap + *(p+i);
	printf("�Է� ������ �� ==> %d\n" , hap);
}
