#include <stdio.h>

void main()
{
int a, b, c;

printf("년도를 입력하세요. : ");
scanf ("%d", &a);
b = a % 4;
c = a % 100;
if (b == 0 && c!=0 || a % 400 == 0){
	printf("\n%d 년은 윤년입니다.", a);
	}	
else{
	printf("\n%d 년은 윤년이 아닙니다.", a);
	}	







}
