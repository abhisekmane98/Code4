// bad way but correct
// program take lot of time
#include<stdio.h>
int main()
{
		int m;
		printf("Enter marks");
		scanf("%d", &m);
		
		if(m>100 && m<0)
		   printf("wrong entry of marks");
	    if(m<=100 && m>=80)
		    printf("Distinction");
	    if(m<=79 && m>=60)
		    printf("First Class");
	    if(m<=59 && m>=40)
		    printf("Second class");
		if(m<=39 && m>=35)
	        printf("Pass");
		if(m<=34 && m>=0)
		    printf("fail");
		    
		return 0;	   
}
