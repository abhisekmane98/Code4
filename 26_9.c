//modification of 26_7 
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,a[4],*p;
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
	
	
	p=p-3;
	p=(int*)realloc(p,4*sizeof(int));
	printf("Add salary of new empoye No.4");
	scanf("%d",p+3);
	
	
	for(i=0;i<=3;i++)
	{
		printf("value at adress %d is %d\n",p,*p);
		p++;
	}
	return 0;
}
