#include <stdio.h>

void main()
{
	int a;
	float b;
	char ch;
	char s[20];

	printf("������ �Է� : ");
	scanf("%d", &a);
	printf("�Ǽ��� �Է� : ");
	scanf("%f", &b);
	printf("���ڸ� �Է� : ");
	scanf(" %c", &ch);
	printf("���ڿ��� �Է� : ");
	scanf("%s", &s);

	printf("\n������ 10���� ==> %d\n", a);
	printf("������ 16���� ==> %x\n", a);
	printf("������ 8���� ==> %o\n", a);
	printf("�Ǽ� ==> %10.3f\n", b);
	printf("�Ǽ�(���п�) ==> %e\n", b);
	printf("���� ==> %c\n", ch);
	printf("���ڿ� ==> %s\n", s);
}

	
