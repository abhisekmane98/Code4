#include<stdio.h>
int main()
{
	int a=1;
	printf("%d\n",++a);  // pre increment operator has immediate effect
	a=1;
	printf("%d\n",a++);  // post increment operator has later effect
	a=1;
	printf("%d,%d\n",a++,++a);// 2 3
	a=1;
	printf("%d,%d\n",++a,a++);// 3 1
	a=1;
}
