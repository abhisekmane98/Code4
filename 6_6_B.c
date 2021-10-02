// without using goto keyword,1: not ask again passward
#include<stdio.h>
#include<math.h>
int main()
{
		float p,t,r,SI,CI;  
		int a,m,passward,i=0;  
		while(1) // for incorrect passward
		{		
		                 
		    i++;
		    printf("Enter passward(Hint:integer)");
		    scanf("%d",&passward);
		    
		    
		    if(passward==7) //job of if-else check passward is correct or wrong and take decision accordin to it
		    {
		    	printf("Enterd successefully\n");
		    	
		    	while(1)    // to run program coninously without asking passward
				{                              
				                                               // START:  // goto keyword's label
	    			printf("To find SI Enter 1\nTo find CI Enter 2\nTo End program Enter 3");
					scanf("%d",&a);
				
					if(a==3)  // job of if else '1,2,wrong entry' or end the program '3'
					  break; /* directly out from inner while loop but not program end our aim is to end program
					             but if you see clearely then after closing inner while loop , next immediate step is closing of if block(passsward correct)
					             so control jumps after else block ie        'before ending of outer while loop'(saar goshtiche)
					        */
					else
					{
						switch(a)
						{
							case 1:
								printf("Enter loan amount,years,interest of bank");
								scanf("%f %f %f",&p,&t,&r);
								SI=p*r*t/100;
								printf("%f\n",SI);
								break;  // out of switch loop if you see program at the end it jumps after else block('1,2,wrong entry' or '3')
							case 2:
								printf("Enter loan amount,years,interest and compoundement of bank");
								scanf("%f %f %f %d",&p,&t,&r,&m);
								CI=p*pow(1+(1.0/100)*(r/m),m*t);   
								printf("%f\n",CI);
								break;  // out of switch loop if you see program at the end it jumps after else block('1,2,wrong entry' or '3')
							default:
								printf("You Enterd invalid number so please enter correct number\n");
						} // end of switch loop
						
					} // end of else block        // goto START; replaced by adding extra while loop 
					                              //  whose aim is start agin program without asking passward
															              
		        }  // inner while loop end
		        
		        
		    
		    }  // if block end
		    
		    else
		    {
		    	printf("Wrong passward\n");
		    	                                                        // not necessary to have for(;;) loop
		    	    if(i==1 || i==2)
		    	           ;             //  null statement replacing goto PASSWARD whose aim is ask passward at starting and 
						                 //                                            give 3 chance to user;
		    	    if(i==3)
		    	    {
		    	       printf("yor max attempts are over");
		    	       break;    // outside of outer while() looop                                   // here we have to must include 'break' in 'if' block
				    } 
		    } // else block(wrong passward) end
		    
		    if(a==3)
		       break;    // not necessary of writing of if(a==3) think......
		                                     // if user enter 1,2 or any wrong entry then it agin starts program
		                                     
	    } // outer while loop end
	    
}
