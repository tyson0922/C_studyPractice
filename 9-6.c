#include <stdio.h>

void main()
{
	char ch;
	char* p;

	ch = 'A';
	p = &ch;

	printf("ch�� ������ �ִ� �� ==> %c \n", ch);
	printf("ch�� �ּ�(address): &ch ==> %d \n", &ch);
	printf("p�� ������ �ִ� �� : p ==> %d \n", p);
	printf("p�� ����Ű�� ���� ������ : *p ==> %c \n", *p);
	printf("p�� �ּ�(address): &p ===> %d \n", &p);
}

