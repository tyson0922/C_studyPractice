#include <stdio.h>

void main()
{
	int a, b;
	char ch;

	while (1)
	{
		printf("����� �μ��� �Է� (���߷��� Ctrl + C) : ");
		scanf("%d %d", &a, &b);

		printf("����� �����ڸ� �Է��ϼ��� : ");
		scanf(" %c", &ch);

		switch(ch)
		{
			case '+' :
				printf("%d + %d = %d �Դϴ�. \n", a, b, a+b);
				break;
			case '-' :
				printf("%d - %d = %d �Դϴ�. \n", a, b, a-b);
				break;
			case '*' :
				printf("%d * %d = %d �Դϴ�. \n", a, b, a*b);
				break;
			case '/' :
				printf("%d / %d = %d �Դϴ�. \n", a, b, a/b);
				break;
			case '%' :
				printf("%d % %d = %d �Դϴ�. \n", a, b, a%b);
				break;
			default :
				printf("�����ڸ� �߸� �Է��߽��ϴ�. \n");
		}
	}
}
