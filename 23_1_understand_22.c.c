// reason to do this program is int k[a] ie we can place variable also in this braces
#include<stdio.h>
int main()
{
		int a=10,i;
		int k[a];
		for(i=0;i<=9;i++)
		{
			printf("Enter number");
			scanf("%d",&k[i]);
		}
		for(i=0;i<=9;i++)
		{
			printf("%d\n",k[i]);
		}
		return 0;
}
