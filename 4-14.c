#include <stdio.h>

void main()
{
int a, b, c;

printf("�⵵�� �Է��ϼ���. : ");
scanf ("%d", &a);
b = a % 4;
c = a % 100;
if (b == 0 && c!=0 || a % 400 == 0){
	printf("\n%d ���� �����Դϴ�.", a);
	}	
else{
	printf("\n%d ���� ������ �ƴմϴ�.", a);
	}	







}
