// at starting of 1st row unnecessary gap
// we remove this error also check line 9
#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=i-1;j++)  // j<=i-1 rather than j<=i
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
