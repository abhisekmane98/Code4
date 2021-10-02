// check error
#include<stdio.h>
#include<stdlib.h>
int *p,n,N,i=-1;
int sal[100];

void sum_sal_array(void);
void max_array(void);
void min_array(void);
void free_array(void);
void forming_array(void)
{
	printf("How many No. of employes ");
	scanf("%d",&n);
}	

void filling_array(void)
{
	for(i=0;i<=n-1;i++)
	{
		printf("\nEnter salaries of employe No.%d ",i+1);
		scanf("%d",&sal[i]);
	}
}

void realloc_array(void)
{
	printf("Enter Modified Number of employes");
	scanf("%d",&N);
	for(i=n;i<=N-1;i++)
	{
		printf("Add salary of New Employe of No.%d\n",i+1);
		scanf("%d",&i);
	}
} 

void read_array(void)
{
	int x;
	printf("\n");
	while(1)
	{
		printf("Enter 1 for read original array\nEnter 2 for read modified/reallocated array\n");
		scanf("%d",x);
		if(x==1)
		{
		   for(i=0;i<=n-1;i++)
    	   {
			   printf("%d\n",sal[i]);
			  	
		   }
		   break;
	    }
		else
		   if(x==2)
		   {
		   	    for(i=0;i<=N-1;i++)
    	  	    {
				   printf("%d\n",sal[i]);	  	
			    }
		    	break;
		   }
		   else 
		   {
			   printf("You enterd Wrong Entry so again please ");
			   continue;
		   }
    }
}

int main()
{
	int a;
	while(1)
	{
		printf("Enter 1 for Forming(malloc/calloc) an array\nEnter 2 for filling an array\nEnter 3 for realloc an array\nEnter 4 for Read an array\n");
		printf("Enter 5 for find sum of salries in array\nEnter 6 for find max\nEnter 7 for find min\nEnter 8 for free memory\n");
		scanf("%d",&a);
		switch(a)
		{
			case 1:
				forming_array();
				break;
			case 2:
				filling_array();
				break;
			case 3:
				realloc_array();
				break;
			case 4:
				read_array();
				break;
			case 5:
				sum_sal_array();
				break;
			case 6:
				max_array();
				break;
			case 7:
				min_array();
				break;
			case 8:
				free_array();
				break;
			default:
				printf("Enter invalid Entry so please enter correct entry");
				continue;
		}
    }
    return 0;
}

void sum_sal_array(void)
   {
		int sum=0;
		for(i=0;i<=n-1;i++)	
		{
			sum=sum+sal[i];
		}
		printf("%d\n",sum);
   }
	
void max_array(void)
   {
		int max;
		max=sal[0];
		for(i=0;i<=n-1;i++)
		{
			if(sal[i]>=max)
			  max=sal[i];	
		}	
		printf("%d\n",max);
   }
	
void min_array(void)
   {
		int min;
		min=sal[i];
		for(i=0;i<=n-1;i++)
		{
			if(sal[i]<=min)
			  min=sal[i];	
		}	
		printf("%d\n",min);	
   }
	
void free_array(void)
   {
		free(p);	
   }
	
