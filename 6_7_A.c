// without using goto keyword 2.again ask passward and give again 3 chance
// today 19 july 2019 i am feeling awesome after doing this program
#include<stdio.h>
#include<math.h>
int main()
{
		float p,t,r,SI,CI;  
		int a,m,passward,i=0;  
		while(1)
		{                                                                 																	
		    i++;
		    printf("Enter passward(Hint:integer)");
		   	scanf("%d",&passward); 
		    
		   	if(passward==7)
		    {
		    	printf("Enterd successefully\n");
		    	
	    		printf("To find SI Enter 1\nTo find CI Enter 2\nTo End program Enter 3");
				scanf("%d",&a);
	
				if(a==3) // if-else block of enteing required '1,2,wrong entry' or end program '3'
	     			break;
			 	else
	 			{
				    switch(a)
					{
    					case 1:
							printf("Enter loan amount,years,interest of bank");
							scanf("%f %f %f",&p,&t,&r);
							SI=p*r*t/100;
							printf("%f\n",SI);
							break;
		        		case 2:
							printf("Enter loan amount,years,interest and compoundement of bank");
							scanf("%f %f %f %d",&p,&t,&r,&m);
			     			CI=p*pow(1+(1.0/100)*(r/m),m*t);   
							printf("%f\n",CI);
							break;
						default:
							printf("You Enterd invalid number so please enter correct number\n");
					}
							i=0;  // to get 3 chance
				}
			                                                         	
		    }// if block(check passward) ends    
		    else
		    {
         	    printf("Wrong passward\n");
	            if(i==1 || i==2)
		             ;                                                                    //goto PASSWARD;
		     	if(i==3)
		    	{
		            printf("yor max attempts are over");
		             break; // out of inner while loop
		     	}	   
		    }	    
	    }// inner while loop ends
}
