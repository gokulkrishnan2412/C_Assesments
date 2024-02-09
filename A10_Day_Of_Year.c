//Comments 
//Name:Gokula Krishnan
//Date:1-04-2021
//Description:Program to find which day of a year
//Input:./day_of_the_year.c
//Enter the value of 'n':9........
//Output:The 9th day is Tuesday
#include <stdio.h>
void main()
{

char c;
do
{
int n=0,day=0,opt=0,sum=0;					//Initializing the variables
printf("Enter the value of 'n':");
scanf("%d",&n);						//Getting n value from the user
	if(n>=1 && n<=365)					//Condition checking if n>0 and n<=365
	{
	printf("Choose First Day:\n1.Sunday\n2.Monday\n3.Tuesday\n4.Wednesday\n5.Thursday\n6.Friday\n7.Saturday");
	printf("\nEnter the option to set the first day:");
	scanf("%d",&opt);					//Getting option value from the user
		if(opt>0 && opt <=7)				//Condition checking if opt>0 and opt<=7
		{
		opt=--opt;					//statement to decrease opt value by 1
		sum=n+opt;					//Adding n and opt to find the sum
		day = sum % 7;  				//Find the % value of sum and 7 and storing it in day
		
  
    		switch(day)  					//Switch case to print the day
    		{  
    		case 1: printf("The %dth day is Sunday.\n",n);  
                break;  
        	case 2: printf("The %dth day is Monday.\n",n);  
                break;  
        	case 3: printf("The %dth day is Tuesday.\n",n);  
                break;  
        	case 4: printf("The %dth day is Wednesday.\n",n);  
                break;  
        	case 5: printf("The %dth day is Thursday.\n",n);  
                break;  
        	case 6: printf("The %dth day is Friday.\n",n);  
                break;  
        	case 7: printf("The %dth day is Saturday.\n",n);  
                break;  
    		}  
 		}
 		else
 		{
 		printf("Error:Invalid input, first day should be >0 and <=7\n");	//Error Statement
 		}
 	}
 	else
 	{
 	printf("Error : Invalid input, n value should be >0 and <=365\n"); 		//Error satement
 	} 
printf("\nDo you want to continue (y/Y):");
scanf( " %c", &c);
}while((c == 'y') || (c == 'Y'));							//Condition to iterate the loop if user says y.	
}			