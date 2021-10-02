// acess positive number from user
#include<stdio.h>
int main9
{
		int a;
		start:
		printf("Enter a number");
		scanf("%d",&a);
		if(a<=0)
		  goto start;
		printf("%d",a);
		
}
