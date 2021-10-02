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
		                     
		for(j=0;j<=a-1;j++)                 
		{
			p=pow(10.0,i-1-j);        
			l[j]=n/p;	       	                    
						      
		}
		
		for(j=0;j<=a-1;j++)         
		{
			printf("%d\n",l[j]);       
		}                                                                   // ### part 2
		
		int k[a];
		
		for(j=1;j<=a-1;j++)       
		{
			k[j]=l[j]%10;		
		}
		k[0]=l[0];              // ## part 3 ends
		
	    for(j=0;j<=a-1;j++)       
		{
			printf("%d\n",k[j]);
		}
		
	    // checking pallindrome
	     
	     if(a%2==0)     // No. of digits are even
	     {
	     	for(j=0,k=a;j<=a/2 && k>=a/2;j++,k--)
	     	    if(l[j]==l[k])
		 }
		 else
		 {
		 	
		 }
	    
	    
	    
	    
	    
	    
	    
	    
