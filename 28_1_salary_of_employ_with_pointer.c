// concept of 26_10,26_11,26_12 used
 #include<stdio.h>
int *p;
int main()
{
	int a;
	
	sum_sal_array();
	max_array();
	min_array();
	free_array();
	
	forming_array()
	{
		int n;
		printf("How many No. of employs");
		scanf("%d",&n);
		p=(int*) malloc(n*sizeof(int));    // p is base adress of memopry genrate and as p is adress not a variable so we can use in any function
	}
	filling_array()
	{
		for(i=0;i<=n-1;i++)
		{
			printf("Enter salaries of employe No.%d",i+1);
			scanf("%d",p);
			p++;	
	}
	realloc_array()
	{
		int N;
		printf("Enter Modified Number of employes");
		scanf("%d",&N);
	}
	read_array()
	{
		
	}
	
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
	
	sum_sal_array()
	{
		
	}
	max_array()
	{
		
	}
	min_array()
	{
		
	}
	free_array()
	{
		
	}
}	

	

