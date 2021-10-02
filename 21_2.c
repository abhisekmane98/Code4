// see errors only
#include<stdio.h>
#include<math.h>
int main()
{
	    int n;
	    float i,b;
	    int c,d;
		printf("Enter a number");
		scanf("%d",&n);
		for(i=1;i>0;i++)
		{
			b=pow(10.0,i);
			c=b;
			if((n%c)!=0)
			  break;
		}
		printf("no. is of '%d' digits",i+1);
		return 0;
}
