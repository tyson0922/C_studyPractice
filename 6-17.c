#include <stdio.h>

void main(){

	int i, j, k;
	for (i = 2; i <= 9; i++){
		printf(" #��%d��#",i);
	}
	printf("\n\n");

	for (j = 1; j<=9; j++){
	
		for (i=2; i<=9; i++){
			printf("%2dX%2d=%2d", i, j, i*j);
		
		
		}
		printf("\n");

	}
}	
