#include <stdio.h>

void main()
{
	FILE *wfp;
	int hap=0;
	int in, i;

	wfp = fopen("c:\\c_study\\data6.txt","w");

	for (i=0; i<5; i++)
	{
		printf("���� %d : ", i+1);
			scanf("%d", &in);
			hap = hap + in;
	}
	fprintf(wfp, "�հ� ==> : %d\n", hap);

	fclose(wfp);
}

