// bad way to write program
// time consumed to run more,think...........
// find error,important error
#include<stdio.h>
int main()
{
		int a;
		printf("Enter a number");
		scanf("%d",&a);
		while(1)
		{
		   if(a<=0 && a>=13)
		   printf("wring entry,please enter another num");
		   break;
	    }
	    
		if(a==1)
		  printf("jan");
		if(a==2)
		   printf("feb");
		if(a==3)
		   printf("march");
		   
		return 0;
}
