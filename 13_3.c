// two times printf() and scanf()
#include<stdio.h>
int main()
{
	    int num;
	   	printf("Enter positive Number");     
		scanf("%d",&num);
	    while(num<=0)       
	    {
			printf("Enter positive Number");
			scanf("%d",&num);
	    }
	    printf("Hey you Enterd Positive No. %d",num);
	    
}
