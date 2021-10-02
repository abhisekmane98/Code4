#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("  "); //one important gap, one gap for distinguish
		}
		for(j=1;j<=8-i;j++)
		{
			printf("*   ");  //one gap for distinguish ,one important gap, one gap for distinguish
		}
		printf("\n");
	}
}
