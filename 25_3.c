#include<stdio.h>
int main()
{
	int *p,i,n,a;
	p=&a;
	printf("how many No. you want to Enter");
	scanf("%d",&n);
	printf("enter numbers");
	for(i=1;i<=n;i++)
	{
		scanf("%d",(p+i));
	}
}
