#include<stdio.h>
int main()
{
		int m;
		if(m>100 && m<0)
		   printf("wrong entry of marks");
		else
		    if(m<=100 && m>=80)
		       printf("Distinction");
		    else 
		       if(m<=79 && m>=60)
		          printf("First Class");
		       else 
		           if(m<=59 && m>=40)
		               printf("Second class");
		            else
		                if(m<=39 && m>=35)
		                   printf("Pass");
		                else
		                   printf("fail");
		return 0;	   
}
