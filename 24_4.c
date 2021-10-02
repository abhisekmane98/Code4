#include<stdio.h>
#include<math.h>
int main()
{
		int n,a,b,j,p,x;
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
		int l[a];    // we can't ise l variable for any reason except regarding array l[]
		                     
		for(j=0;j<=a-1;j++)                 
		{
			p=pow(10.0,i-1-j);        
			l[j]=n/p;	       	                    
						      
		}
		
		for(j=0;j<=a-1;j++)         
		{
			printf("%d\n",l[j]);       
		}                                                                   // ### part 2
		
		int k[a];   // we can't ise l variable for any reason except regarding array k[]
		
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
	        for(j=0,x=a-1;j<=a/2-1 && x>=a/2;j++,x--)   // take Example and think why changed....
	       	{
	            if(k[j]!=k[x])                       
	     	    {
                   printf("Not Pallindrome");
                    break;
              	}
            }
            if(j==a/2)    // or x==a/2
               printf("Pallindrome");     	    
		}
		else
	    {
	    	for(j=0,x=a-1;j<=a/2-1 && x>=a/2+1;j++,x--)
	    	{
	    		if(k[j]!=k[x])
	    		{
	    		   printf("Not Pallindrome");
	    		   break;
	    		}
			}
			if(x==a/2) // or j==a/2
		 	  printf("Palindrome");
		}
		
		return 0;
}
	    
	    
	    
	    
	    
	    
	    
	    
