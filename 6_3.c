// avoiding 'goto' keyword
// doing same program withot using 'goto'
#include<stdio.h>
#include<math.h>
int main()
{
		float p,t,r,SI,CI;  
		int a,m;  
		while(1)
		{		
	    	printf("To find SI Enter 1\nTo find CI Enter 2\nTo End program Enter 3");
			scanf("%d",&a);
			if(a!=3)
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
			}
			
			if(a!=3)
			   continue;
			else
			   break;		
	   }
}
