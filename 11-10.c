#include <stdio.h>

void main()
{
	FILE *wfp;
	wfp = fopen("c:\\c_study\\gugu.txt","w");
	
	for (int i=2; i<10; i++)
	{
		fprintf(wfp, " #Á¦%d´Ü# ", i);
	}
	fprintf(wfp, "\n\n");

	for (int i=1; i<10; i++)
	{
		for(int j=2; j<10; j++)
		{
			fprintf(wfp, "%2dX%2d=%2d", j, i, j*i);
		}
		fprintf(wfp, "\n");
	}
	fclose(wfp);
}
