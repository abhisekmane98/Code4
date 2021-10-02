// see program 12_2,so in this program we using unnecessarily count variable
// understanding count variable
#include<stdio.h>
int main()
{
		int a,i,count=0;
		printf("Enter a number");
		scanf("%d",&a);
		for(i=2;i<=a/2;i++)
		{
			if(a%i==0) 
			{ 
			   count++;             // consonant
			   break;
			}
		}
		if(count==0)
		   printf("Prime No.");
		else 
		    printf("Consonant");
}
