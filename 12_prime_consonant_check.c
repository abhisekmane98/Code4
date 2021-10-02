#include<stdio.h>
int main()
{
	int a,n;
	printf("Enter a number");
	scanf("%d",&a);
	for(n=2;n<=a-1;n++)
	{
		if(a%n!=0)
		    ;
		else
		{
		   printf("Consonant");
		   break;
	    }
	}
	if(n==a)
	   printf("Prime No.");
}
