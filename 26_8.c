#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,i,*q;
	p=(int*)calloc(4,sizeof(int));
	for(i=0;i<=3;i++)
	{
		printf("Enter a number at adress %d ",p);
		scanf("%d",p);
		p++;
	}
	p=p-4;
	for(i=0;i<=3;i++)
	{
		printf("value at adress %d is %d\n",p,*p);
		p++;
	}      // part 1 complete
	p=p-4;
	q=(int*)realloc(p,5*sizeof(int));
	for(i=0;i<=4;i++)
	{
		printf("Enter a number at adress %d ",q);
		scanf("%d",q);
		q++;
	}
	q=q-5;
	for(i=0;i<=4;i++)
	{
		printf("value at adress %d is %d\n",q,*q);
		q++;
	} 
	return 0;
}
