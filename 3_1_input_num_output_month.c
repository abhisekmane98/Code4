// accept the number and print the month
#include<stdio.h>
int main()
{
		int a;
		printf("Enter a number");
		scanf("%d",&a);
		switch(a)
		{
			case 1:
				printf("jan");
				break;
		    case 2:
		    	printf("feb");
		    	break;
		    case 3:
		    	printf("march");
		    	break;
		    default:
		    	printf("this No. not represent month");
		}
}
