// find very  important error
#include<stdio.h>
int main()
{
	int i,a,*p;
	p=&a;
	printf("%d\n",p);
	printf("Enter Numbers\n");
	for(i=1;i<=1;i++)
	{
		scanf("%d\n",p);  // in this line error is there find it
		p++;
	}
	printf("\n");
	p=&a;
	for(i=1;i<=1;i++)
	{
		printf("%d\n",p);
		p++;
	}
	p=&a;
	printf("\n");
	for(i=1;i<=1;i++)
	{
		printf("%d\n",*p);
		p++;
	}
}
