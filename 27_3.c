#include<stdio.h>
int main()
{
	int sal[100],n,i,max,min,sum;
	printf("Enter No. of employees(employs must be between 0 to 100)");
	scanf("%d",&n);
	
	for(i=0;i<=n-1;i++)
	{
		printf("Enter salary of employe No. %d",i+1);
		scanf("%d",&sal[i]);
		if(i==0)
		{
			max=sal[i];
			min=sal[i];
			sum=sal[i];
		}
		else
		{
			if(sal[i]>max)
			  max=sal[i];
			if(sal[i]<min)
			  min=sal[i];
			sum=sum+sal[i];
		}
	}
	
	for(i=0;i<=n-1;i++)
	{
		printf("salary of employ No.%d is %d\n",i+1,sal[i]);
	}
	printf("max salry is %d\nmin salary is %d\nsum of salary is %d",max,min,sum);
	return 0;
}
