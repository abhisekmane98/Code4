#include<stdio.h>
int main()
{
		int a,i;
		printf("Enter a number");
		scanf("%d",&a);
		for(i=2;i<=a/2;i++)
		{
			if(a%i==0)
			   break;
		}
		if(i==a/2+1)
		  printf("Prime NO.");
		else
		  printf("Consonant");

}
