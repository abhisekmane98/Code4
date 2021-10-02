//modification of 26_7 
// find an error
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,*p,n;
	
	p=(int *) malloc(3*sizeof(int));       // p contaning a base adress of memory produced using malloc()
	
	for(i=0;i<=2;i++)
	{
		printf("Enter number at adress %d",p);
		scanf("%d",p);
		p++;
    }
    
    p=p-3;                                // getting base adress again
    for(i=0;i<=2;i++)
    {
    	printf("value at adress %d is %d\n",p,*p);	
    	p++;
	}                                  // part 1 completed
	
	// Modification of employees
	
	printf("Enter New No. of Employes");
	scanf("%d",&n);
	p=p-3;
	p=(int*)realloc(p,n*sizeof(int));
	
	for(i=3;i<=n-1;i++)
	{
		printf("Add salary of new employe having No.%d at adress %d\n",i+1,p+3);
		scanf("%d",p+3);
		p++;
	}
	printf("status of p is %d\n",p);
	p=p-5;
	printf("New status of p is %d\n",p);
	for(i=0;i<=n-1;i++)
	{
		printf("value at adress %d is %d\n",p,*p);
		p++;
	}
	return 0;
}
