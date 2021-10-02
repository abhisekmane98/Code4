#include<stdio.h>
int main()
{
		int n,p,Ans,i;
		printf("Enter a number and power of no.");
		scanf("%d %d",&n,&p);
		for(i=1,Ans=1;i<=p;i++)
		{
			
			Ans=Ans*n;
		}
		printf("%d",Ans);
		return 0;
}
