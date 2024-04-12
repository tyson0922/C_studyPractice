#include <stdio.h>
void main()
{
	int a, b, result;
	char c;
	printf("수식을 한줄로 띄어쓰기로 입력하세요 : ");
	scanf("%d %c %d", &a, &c, &b);

	switch (c)
	{
	case '-':
		result = a - b;
		printf("%d - %d = %d", a, b, result);
		break;

	case '+':
		result = a + b;
		printf("%d + %d = %d", a, b, result);
		break;
	case '*':
		result = a * b;
		printf("%d * %d = %d", a, b, result);
		break;
	case '/':
		result = a / b;
		printf("%d / %d = %d", a, b, result);
		break;
	case '%':
		result = a % b;
		printf("%d %% %d = %d", a, b, result);
		break;
	default :
		printf("연산자를 잘못 입력했습니다.");
	}
}
