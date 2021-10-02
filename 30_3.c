#include<stdio.h>
#include<conio.h>
void add(int,int,int,int,int,int);
int main()
{
		int a=0;
		add(++a,a++,a,a++,++a,a++);        /* called by passing value
		                                      order of passing argument doesen't matter */		
}

void add(int p,int q,int r,int s,int t,int u)    //  5 3 5 2 5 0
{
		printf("%d,%d,%d,%d,%d,%d",p,q,r,s,t,u);
}
