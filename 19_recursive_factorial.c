// here we done by for loop
#include<stdio.h>
int fact(int x)
{
	int b;
	for(b=1;x>=1;x--)               /* for(b=1,c=1;b<=x;b++)        c=c*b;           */
	{
		b=x*b;                       
	}
	return b;
}
int main()
{
		int n,Ans;
		printf("Enter a number");
		scanf("%d",&n);
		Ans=fact(n);
		printf("%d",Ans);
}
