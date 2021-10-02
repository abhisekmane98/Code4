// how i started to think
#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4-i;j++)
		{
			printf("  ");
		}
		printf("*  ");
		for(j=1;i==j;j++)
		{
			printf("\n");	
		}	
		for(k=2;i==k;k++)
		{
			printf("*    ")
			printf("\n")
		}
		for(l=3;i==l;l++)
		{
			printf("*  * ");
			printf("\n");
		}
		for(m=4;i==4;m++)
		{
			printf("")
		}
	}
}
