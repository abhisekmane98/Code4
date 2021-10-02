// best way
#include<stdio.h>
int main()
{
	    int s,e,i;
		printf("Enter a start Number and End Number");
		scanf("%d %d",&s,&e);
		
		if(s%2==0)
		   i=s;
		else
		   i=s+1;
		   
		for(;i<=e;i+=2)
		{
			printf("%d ",i);
		}
}
