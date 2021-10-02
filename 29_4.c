// understanding the presence of array in pointer
// p=&p[0] p+1=&p[1]
// *p=p[0] *(p+1)=p[1]
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,a,i;
	p=(int *)malloc(5*sizeof(int));
	for(i=0;i<=4;i++)
	{
		printf("Enter a Number");
		scanf("%d",p+i);
    }
    for(i=0;i<=4;i++)
    {
    	printf("%d",p[i]);
	}
}
