#include <stdio.h>
void main()
{
int a, b;
char c;
printf("수식을 한줄로 띄어쓰기로 입력하세요 : ");
scanf("%d%c%d", &a, c, &b);
printf("%d%s%d", a, b, c);
}
