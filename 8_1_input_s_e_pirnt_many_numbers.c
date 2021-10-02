// input s,e and print even numbers between them
#include<stdio.h>
int main()
{
	    int s,e,i;
		printf("Enter a start Number and End Number");
		scanf("%d %d",&s,&e);
		i=s;
		
		if(i%2==0)
		   while(i<=e)
		   {
		   	    printf("%d",i);
		   		i=i+2;
		   }	   
		else
		{
			i++;
			while(i<=e)
			{
				printf("%d ",i);
				i=i+2;
			}
		}
}
		 

