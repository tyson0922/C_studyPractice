#include <stdio.h>

void main()
{
	char stack[5];
	int top=0;

	stack[top] = 'A';
	printf("%c �ڵ����� �ͳο� ��\n", stack[top]);
	top++;

	stack[top] = 'B';
	printf("%c �ڵ����� �ͳο� ��\n", stack[top]);
	top++;
	
	stack[top] = 'C';
	printf("%c �ڵ����� �ͳο� ��\n", stack[top]);
	top++;

	printf("\n");

	top--;
	printf("%c �ڵ����� �ͳ��� ��������\n", stack[top]);
	stack[top]=' ';
	
	top--;
	printf("%c �ڵ����� �ͳ��� ��������\n", stack[top]);
	stack[top]=' ';
	
	top--;
	printf("%c �ڵ����� �ͳ��� ��������\n", stack[top]);
	stack[top]=' ';
}
