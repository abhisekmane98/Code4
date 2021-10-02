// take p,n,r values from user and they must be greater than equal to 1000,1,4 according to business rule and print si
#include<stdio.h>
int main()
{
	    float p,n,r;
	    do
		{
			printf("Enter p,n,r");
			scanf("%f %f %f",&p,&n,&r);
			if(p>=1000 && n>=1 && r>=4)
			    break;
			printf("Enterd invalid input so please again ");
		}while(1);
		
		printf("si is %f",p*n*r/100);
}
