#include <stdio.h>

#define PI	3.145926535
#define STR	"���� ������ ����߽��ϴ�.\n"
#define END_MSG	printf("���α׷��� ����Ǿ����ϴ�. \n\n")

void main()
{
	printf("�������� 10�� ���� ������ ==> %10.5f \n", 10*10*PI);

	printf(STR);

	END_MSG;
}
