#include<stdio.h>
int main()
{
	    int n,b,i;
		printf("Enter the Number");
		scanf("%d",&n);
		for(b=1,i=1;i<=n;i++)
		{
			b=b*i;
		}
		printf("%d",b);
}
