#include <stdio.h>

void main()
{
	int coffee;

	printf("� Ŀ�� �帱���? (1:����, 2:����, 3:��) ");
	scanf("%d", &coffee);

	printf("\n# 1.�߰ſ� ���� �غ��Ѵ�\n");
	printf("# 2.�������� �غ��Ѵ�\n");

	switch(coffee)
	{
		case 1 : printf("# 3. ����Ŀ�Ǹ� ź��\n"); break;
		case 2 : printf("# 3. ����Ŀ�Ǹ� ź��\n"); break;
		case 3 : printf("# 3. ��Ŀ�Ǹ� ź��\n"); break;
		default : printf("# 3. �ƹ��ų� ź��\n"); break;
	}

	printf("# 4.���� �״´�\n");
	printf("# 5. ��Ǭ���� ��� ���δ�\n\n");
	printf("�մ�~ Ŀ�� ���� �ֽ��ϴ�\n\n");
}
