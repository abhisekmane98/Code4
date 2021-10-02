#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,a,*p,n;
	
	printf("%d\n",&a);
	printf("%d\n",p);
	
	printf("Enter 'n' numbers");
	scanf("%d",&n);
	
	p=(int*) calloc(n,sizeof(int));

	for(i=1;i<=n;i++)
	{
		printf("Enter number at adress %d",p);
		scanf("%d",p);                             // Not include \n in scanf() 
		p++;
	}
	printf("\n");
	
	for(i=1;i<=n;i++)
	{
		printf("%d\n",p);
		p++;
	}
	p=p-2*n;
	printf("\n");
	for(i=1;i<=n;i++)
	{
		printf("%d\n",*p);
		p++;
	}
	
}
