// modification to save time
#include<stdio.h>
int main()
{
	    int n,i,sal,max,min,sum=0,avg;
	    
	    printf("Enter No. of employees");
	    scanf("%d",&n);
	    
		printf("Enter salary of n Number of employees");
		
		for(i=1;i<=n;i++)
		{
				scanf("%d",&sal);
				if(i==1)
				{
				   max=sal;
				   min=sal;
				   sum=sum+sal;
			    }
				else
				{
				   if(sal>max)
				   		max=sal;
				   if(sal<min)
				        min=sal;
				    sum=sum+sal;
			    }
				
		}
	    avg=sum/n;
	    printf("%d %d %d",max,min,avg);
	    return 0;
}
	    
		
		
		
