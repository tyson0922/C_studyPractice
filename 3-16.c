#include <stdio.h>

void main()
{
	int a, b;
	printf("�Է����� ���� <1>10 <2>16 <3>8 : ");
	scanf("%d", &a);
	printf("�� �Է� : ");

	if (a ==1){
		scanf("%d", &b);
		printf("10���� ==> %d \n", b);
		printf("16���� ==> %x \n", b);
		printf("8���� ==> %o \n", b);
	}
		
	else if (a ==2){

		scanf("%x", &b);
		printf("10���� ==> %d \n", b);
		printf("16���� ==> %x \n", b);
		printf("8���� ==> %o \n", b);
	}

	else if (a ==3){

		scanf("%o", &b);
		printf("10���� ==> %d \n", b);
		printf("16���� ==> %x \n", b);
		printf("8���� ==> %o \n", b);
	}	
	else {
	printf("Wrong input");
	}	
}	
