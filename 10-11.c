#include <stdio.h>

void gugu (int a)
{
	for (int i=1; i <10; i++)
	{
		printf("%2d X%3d=%3d\n", a, i, a*i);
	}
}
void main()
{
	int a;
	printf("출력하고 싶은 단을 입력 : ");
	scanf("%d", &a);
	gugu(a);
}
