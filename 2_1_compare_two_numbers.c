#include<stdio.h>
int main()
{
		int n1,n2;
		printf("Enter two numbers");
		scanf("%d%d",&n1,&n2);
		if(n1>n2)
		  printf("not equal");
		else 
		  if(n1<n2)
		     printf("not equal");
		  else
		      printf("Hey they are equal");
		return 0;
}
