#include <stdio.h>

void func1 (char a, char b)
{
	int imsi;

	imsi = a;
	a = b;
	b = imsi;
}

void func2 (char *a, char *b)
{
	int imsi;

	imsi = *a;
	*a = *b;
	*b = imsi;
}

void main()
{
	char x = 'A', y = 'Z';
	printf("���� ��		 : x=%c, y=%c\n", x, y);
	
	func1(x, y);
	printf("���� ������ ��   : x=%c, y=%c\n", x, y);
	
	func2(&x, &y);
	printf("�ּҸ� ������ �� : x=%c, y=%c\n", x, y);
}
