// wrong check
#include<stdio.h>
int main()
{
	    int s,e,i;
		printf("Enter a start Number and End Number");
		scanf("%d %d",&s,&e);
		i=s-1;
		while(i<=e-1)
		{
			printf("%d",++i);	
		}
}
