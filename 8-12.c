#include <stdio.h>
#include <string.h>

void main()
{
	char ss[] = "XYZ";
	char tt[] = "xyz";
	int r;

	r = strcmp(ss, tt);

	printf("�� ���ڿ��� �񱳰�� ==> %d \n", r);
}
