#include <stdio.h>

void main()
{
	int hap = 0;
	int i;
	int num1, num2, num3;

	printf(" ���۰�, ����, ������ �Է� : ");
	scanf("%d %d %d", &num1, &num2, &num3);

	for (i = num1; i<= num2; i=i+num3){
		hap = hap+i;
	}
	printf("%d���� %d���� %d�� ������ ���� ��: %d \n", num1, num2, num3, hap);
}

