// best way
#include<stdio.h>
int main()
{
	    int s,e,i;
		printf("Enter a start Number and End Number");
		scanf("%d %d",&s,&e);

        i=(s%2==0?s:s+1);  // initialisation
		   
		for(;i<=e;i+=2)
		{
			printf("%d ",i);
		}
}
