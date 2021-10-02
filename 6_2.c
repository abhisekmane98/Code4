// after run any sub program ask user ton run again or end
// using 'goto' keyword
// solved error of first two programs int float conversion
#include<stdio.h>
#include<math.h>
int main()
{
		float p,t,r,SI,CI;  // p baic amount,t years for which loan ar deposited,r-interest of bank,
		int a,m;  // m=No. of times compounded in year
		START:
		printf("To find SI Enter 1\nTo find CI Enter 2\nTo End program Enter 3");
		scanf("%d",&a);
		switch(a)
		{
			case 1:
				printf("Enter loan amount,years,interest of bank");
				scanf("%f %f %f",&p,&t,&r);
				SI=p*r*t/100;
				printf("%f\n",SI);
				goto START;
			case 2:
				printf("Enter loan amount,years,interest and compoundement of bank");
				scanf("%f %f %f %d",&p,&t,&r,&m);
				CI=p*pow(1+(1.0/100)*(r/m),m*t);   /* any operation between integer and integer result integer only
				                                                             real        real           real
				                                                             real        integer        real         in this integer is prompted to real  
													  it may happen that type on LHS and RHS is not same,in that case value on RHS is 
													  prompted or demoted upon variable on LHS
													  				 */
				printf("%f\n",CI);
				goto START;
			case 3:
				goto END;
			default:
				printf("You Enterd invalid number so please enter correct number\n");
				goto START;
		}
		END:
		return 0;
}
