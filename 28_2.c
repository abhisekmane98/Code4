// see error ask  sir that switch is not loop
#include<stdio.h>
#include<stdlib.h>

int *p,n,N;

void sum_sal_array(void);
void max_array(void);
void min_array(void);
void free_array(void);

void forming_array(void)
{
	//int n;
	printf("How many No. of employs");
	scanf("%d",&n);
	p=(int*) malloc(n*sizeof(int));    // p is base adress of memopry genrate and as p is adress not a variable so we can use in any function
}

void filling_array(void)
{
	int i;
	for(i=0;i<=n-1;i++)
	{
		printf("Enter salaries of employe No.%d\n",i+1);
		scanf("%d",p+i);	// important step to not change base adress or keep base adress
	}
}
/*
void realloc_array(void)
{
	//int N,i;
	printf("Enter Modified Number of employes");
	scanf("%d",&N);
	p=(int*) malloc(N*sizeof(int));
	for(i=0;i<=N;i++)
	{
		printf("Add salary of New Employe of No.%d\n",n+i);
		scanf("%d",p+n+i);
	}
} */

void read_array(void)
{
	int i;
	for(i=0;i<=N-1;i++)
	{
		printf("%d",*(p+i));	
	}
}
	
int main()
{
	int a;
	printf("Enter 1 for Forming(malloc/calloc) an array\nEnter 2 for filling an array\nEnter 3 for realloc an array\nEnter 4 for Read an array\n");
	printf("Enter 5 for find sum of salries in array\nEnter 6 for find max\nEnter 7 for find min\nEnter 8 for free memory");
	scanf("%d",&a);
		switch(a)
		{
			case 1:
				forming_array();
				break;
			case 2:
				filling_array();
				break;
		//	case 3:
		//		realloc_array();
		//		break;
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
	return 0;
}
	
void sum_sal_array(void)
   {
		int sum=0,i;
		for(i=0;i<=n-1;i++)	
		{
			sum=sum+*(p+i);
		}
		printf("%d",sum);
   }
	
void max_array(void)
   {
		int i,max;
		max=*p;
		for(i=0;i<=n;i++)
		{
			if(*(p+i)>=max)
			  max=*(p+i);	
		}	
		printf("%d",max);
   }
	
void min_array(void)
   {
		int i,min;
		min=*p;
		for(i=0;i<=n;i++)
		{
			if(*(p+i)<=min)
			  min=*(p+i);	
		}	
		printf("%d",min);	
   }
	
void free_array(void)
   {
		free(p);	
   }
	
