#include <stdio.h>

void main()
{
	int a, b, c, d, result;
	
	printf("첫 번째 계산할 값은 입력하세요 ==> ");
	scanf("%d", &a);
	printf("\n 두 번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &b);
	printf("\n 세 번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &c);
	printf("\n 네 번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &d);
	result = a + b + c + d;
	printf("\n %d + %d + %d + %d = %d", a, b, c, d, result);
}
