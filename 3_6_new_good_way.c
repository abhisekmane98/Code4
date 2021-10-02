#include<stdio.h>
int main()
{
		int a;
		printf("Enter a number");
		scanf("%d",&a);
		
		if(a==1)
		   printf("jan");
		else 
		   if(a==2)
		      printf("feb");
		    else
		       if(a==3)
		          printf("march");
		        else
		           printf("Enterd wrong entry");
}
