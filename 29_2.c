// see why not running
#include<stdio.h>
int main()
{
	int *p,i;
	for(i=0;i<=4;i++)
	{
		printf("Enter salary of employe No.%d",i+1);
		scanf("%d",&p[i]);
	}
	
	for(i=0;i<=4;i++)
	{
		printf("%d",*(p+i));
	}
	return 0;
}
