#include<stdio.h>
int main()
{
	    int num;
	    while(1)
	    {
			printf("Enter positive Number");
			scanf("%d",&num);
			if(num>0)
			  break;
	    }
	    printf("Hey you Enterd Positive No. %d",num);
}
