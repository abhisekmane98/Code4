// program to accept money that are multiple of 500 and give back remaning(print giveback only if it is there)
#include<stdio.h>
int main()
{
		int m,r;
		printf("Enter money");
		scanf("%d",&m);
		r=m%500;
		printf("savingss are %d",m-r);
		if(r!=0) 
		    printf("giveback is %d",r);
		return 0;
}
