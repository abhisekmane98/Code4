#include<stdio.h>
int main()
{
	    int n,i,sal,max=0,min=0,sum,avg;
	    
	    printf("Enter No. of employees");
	    scanf("%d",&n);
	    
		printf("Enter salary of n Number of employees");
		for(i=1;i<=n;i++)
		{
			if(i==1)
			{
				scanf("%d",&sal);
				min=sal;
				max=sal;
				sum=sal;
		    }
		    else
		    {
		    	scanf("%d",&sal);
				if(sal>=max)
				max=sal;
				if(sal<=min)
		     	min=sal;
		     	sum=sum+sal;
		    }
	    }
	    avg=sum/n;
	    printf("%d %d %d",max,min,avg);
	    return 0;
}
	    
		
		
		
