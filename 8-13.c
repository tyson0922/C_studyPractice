#include <stdio.h>
#include <string.h>

void main()
{
	char ss[20];
	char tt[20];
	int r1, r2;

	puts("ù��° ���ڿ��� �Է��ϼ���.");
	gets(ss);

	puts("�ι�° ���ڿ��� �Է��ϼ���.");
	gets(tt);

	r1 = strlen(ss);
	r2 = strlen(tt);

	printf("ù��° ���ڿ��� ���� ==> %d \n");
	printf("�ι�° ���ڿ��� ���� ==> %d \n");
	
	if(strcmp(ss, tt) == 0)
		puts("�� ���ڿ��� ������ �����ϴ�.\n");
	else 
		puts("�� ���ڿ��� ������ �ٸ��ϴ�.\n");
}
