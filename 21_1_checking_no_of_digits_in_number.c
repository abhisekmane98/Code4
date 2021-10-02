// see how i came to program
#include<stdio.h>
#include<math.h>
int main()
{
	    int n;
	    float i;
		printf("Enter a number");
		scanf("%d",&n);
		for(i=1;;i++)
		{
			if(n%pow(10.0,i)!=0)
			  break;
		}
		printf("no. is of '%d' digits",i+1);
		return 0;
}
