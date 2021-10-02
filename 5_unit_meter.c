// input unit,print bills
// up to 50 Rs 2
// 50 to 100 Rs 4
// above 100 Rs 6
#include<stdio.h>
int main()
{
		int n,B;
		printf("Enter units read on meater");
		scanf("%d",&n);
		
		if(n<=50)
		   B=n*2;
		else
		    if(n>50 && n<=100)
		        B=50*2+(n-50)*4;
		    else
		        if(n>100)
		            B=50*2+50*4+(n-100)*6;
		printf("%d",B);
		
}
