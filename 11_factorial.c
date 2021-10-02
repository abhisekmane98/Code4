#include<stdio.h>
int main()
{
	    int n,b;
		printf("Enter the Number");
		scanf("%d",&n);
		for(b=1;n>=1;n--)
		{
			b=b*n;
		}
		printf("%d",b);
		return 0;
}
