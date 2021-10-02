#include<stdio.h>
int main()
{
	    int num,c=1;
	    while(num<=0 || c==1)   // counter variable to enter first time in loop  
	    {
			printf("Enter positive Number");
			scanf("%d",&num);
            c++;
	    }
	    printf("Hey you Enterd Positive No. %d",num);
}
