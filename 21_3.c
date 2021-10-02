#include<stdio.h>
#include<math.h>
int main()
{
	    int n;
	    float i,b;    // pow() required float
 	    int c; // converting output of pow() to integer type as n/c must be integer for equating to 0 otherwise 0.000000
		printf("Enter a number");
		scanf("%d",&n);
		for(i=1;i>0;i++)
		{
			b=pow(10.0,i);
			c=b;
			if((n/c)==0)
			  break;
		}
		printf("no. is of '%f' digits",i);
		return 0;
}
