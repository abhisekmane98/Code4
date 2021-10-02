// *p  p[0]=p,p[1]=p+1,p[2]=p+2
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,i;
	p=(int*)malloc(5*sizeof(int));
	for(i=0;i<=4;i++)
	{
		printf("Enter salary of employe No.%d",i+1);
		scanf("%d",&p[i]);
	}
	
	for(i=0;i<=4;i++)
	{
		printf("%d\n",*(p+i));
	}
	return 0;
}
