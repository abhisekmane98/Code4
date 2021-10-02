#include<stdio.h>
int main()
{
	int num;
	do
	{

		printf("Enter positive Number");
		scanf("%d",&num);
	}while(num<=0);                   // Error resolved
    printf("Hey you Enterd Positive No. %d",num);
}
