// ask sir
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[4],b,*p,*q;
	p=&b;
	
	printf("%d\n",*p);
	printf("%d\n",p);
	printf("%d\n",a);
	
	free(p);
	free(a);
	
	printf("%d\n",*p);
	printf("%d\n",p);
	printf("%d",a);
	
	return 0;
}
