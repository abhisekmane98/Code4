// wromg
#include<stdio.h>
int main()
{
	    int num;
	    while(num<=0)       // what is num contaning garbage  value only
	    {
			printf("Enter positive Number");
			scanf("%d",&num);
	    }
	    printf("Hey you Enterd Positive No. %d",num);
}
