#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("E:\\abc.txt","w");                    // writing mode
	printf("file has been created");
	fprintf(fp,"twinkle twinkle little star");
	fclose(fp);
	return 0;
}
