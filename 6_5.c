/*passward protected and only 3 chance to user and asking only at starting of program 

  problem: after again startingg program it again ask passward 1: not ask again passward
                                                               2: if again asking for passward then give again 3 chance to user
   above problem statement solve in 6_6 and 6_7 respectively */
#include<stdio.h>
#include<math.h>
int main()
{
		float p,t,r,SI,CI;  
		int a,m,passward,i=0;  
		while(1)
		{		
		
		    START:                  // goto keyword's label
		    i++;
		    printf("Enter passward(Hint:integer)");
		    scanf("%d",&passward);
		    
		    
		    if(passward==7)
		    {
		    	printf("Enterd successefully\n");
	    		printf("To find SI Enter 1\nTo find CI Enter 2\nTo End program Enter 3");
				scanf("%d",&a);
				
				if(a==3)
				  break;
				else
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
				if(a!=3)
				   continue;		// not outside the if-else but at starting the loop  
		    }
		    
		    
		    else
		    {
		    	printf("Wrong passward\n");
		    	for(;;)
		   		{
		    	    if(i==1 || i==2)
		    	       goto START;
		    	    if(i==3)
		    	       printf("yor max attempts are over");
		    	       break;
			    }
			    
		    }
		    
		    break;
	    }
}
