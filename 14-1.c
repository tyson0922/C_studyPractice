#include <stdio.h>

void main(int argc, char* argv[])
{
	int i;
	printf(" argc �Ű����� ==> %d \n", argc);

	for(i=0; i<argc; i++)
		printf(" argv[%d] �Ű����� ==> %s \n", i, argv[i]);
}

