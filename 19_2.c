#include<stdio.h>
int fact(int x)
{
	int b;
	if(x==1)
	    return 1;
	else
    	b=x*fact(x-1);
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
