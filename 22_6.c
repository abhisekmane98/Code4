// minu errors changing i to a
#include<stdio.h>
#include<math.h>
int main()
{
		int n,a,b,j,p;
		float i;
		
		printf("enter a number");
		scanf("%d",&n);
		
		for(i=1;;i++)
		{
			b=pow(10.0,i);
			if((n/b)==0)
			  break;
		}
		
		printf("No. of digits is %f\n",i);    // ### part 1
	
		a=i; 
		int l[a];  
		                     
		for(j=0;j<=a-1;j++)          // CHANGE 1          
		{
			p=pow(10.0,i-1-j);        // due to i only pow() get inputs of fractional
			l[j]=n/p;	       	                    
						      
		}
		
		for(j=0;j<=a-1;j++)          // CHANGE 2
		{
			printf("%d\n",l[j]);       // l[0]>l[1]>l[2].....l[d]
		}                                                                   // ### part 2
		
		int k[a];
		
		for(j=1;j<=a-1;j++)       // CHANGE 3
		{
			k[j]=l[j]%10;		
		}
		k[0]=l[0];                                                   // #### part 3
		
		for(j=0;j<=a-1;j++)        // CHANGE 4
		{
			printf("%d\n",k[j]);
		}
		
		// reversing the number
		for(j=a-1;j>=0;j--)
		{
			printf("%d",k[j]);
		}
		 
}
		
		
		
