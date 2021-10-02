#include<stdio.h>
#include<math.h>
int main()
{
		int n,b,d,e;
		float i;
		
		printf("enter a number");
		scanf("%d",&n);
		for(i=1;;i++)
		{
			b=pow(10.0,i);
			if((n/b)==0)
			  break;
		}
		printf("No. of digits is %f\n",i);
		// No. of digits in number is 'i'  part 1 completed
		
		d=i-1;  // making integer type  
		int l[d];                       // array d+1=i (no. of integers)
		for(d;d>=0;d--)                  
		{
			e=pow(10.0,d);   // converting to integer type           
			l[d]=n/e;	       /*  i=d+1                                    6782
			                       l[d]=n(1)       10^d-1                         6
			                       l[d-1]=n(12)     10^d-2                        67
						           l[d-2]=n(123)                                  678
						           .                                              .
						           .                                              .
						           .                                              .
						           l[0]=n(123...n)=n     10^0=1                   6782
						        */
		}
		for(d=0;d<=i-1;d++)
		{
			printf("%d\n",l[d]);
		}
		int k[d-1],h,f,j,g;   
		k[0]=l[0];

		// whole concept is wrong
		
		for(d=i-1,j=1;d>=1 && j<=i-1;d--,j++)
		{
			
			f=l[d-1]-l[d];      
			g=pow(10.0,j+0.0);
			h=g;
			k[j]=f/h;
		}
		for(j=0;j<=i-1;j++)
		{
			printf("%d\n",k[j]);
		}
		
}
