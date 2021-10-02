#include<stdio.h>
int main()
{
	int i,a,b,c,*p;
	p=&a;
	printf("%d\n",p);
	printf("Enter Numbers\n");
	for(i=1;i<=4;i++)
	{
		scanf("%d",p);
		p++;
	}
	printf("\n");
	
	for(i=1;i<=4;i++)
	{
		printf("%d\n",p);
		p++;
	}
	p=&a;
	printf("\n");
	for(i=1;i<=4;i++)
	{
		printf("%d\n",*p);
		p++;
	}
}
