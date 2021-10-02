#include<stdio.h>
int main()
{
	    int i=5;
		int a[i];
		int b[i];
		a[0]=1;
		a[1]=2;
		a[2]=3;
		a[3]=4;
		a[4]=5;
		
		b[0]=6;
		b[1]=7;
		b[2]=8;
		b[3]=9;
		b[4]=10;
		
		a[0]=b[0];
		printf("%d",a[0]);
		
		
}
