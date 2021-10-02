// check error
#include<stdio.h>
int main()
{
	    int n,i,sal,max=0,min=0,avg;
	    
	    printf("Enter No. of employees");
	    scanf("%d",&n);
	    
		printf("Enter salary of n Number of employees");
		for(i=1;i<=n;i++)
		{
			scanf("%d",&sal);
			if(sal>=max)
			max=sal;
			if(sal<=min)
			min=sal;
	    }
	    printf("%d %d",max,min);
}
	    
		
		
		
