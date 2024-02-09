//Comments 
//Name:Gokula Krishnan
//Date:23-3-2021
//Description:Program to check whether number perfect number or not
//Input:./perfect_number.c
//Enter a number:6
//Output:Yes, entered number is a perfect number

#include <stdio.h>
 
int main()
{
    char c;
    
do 
{
 int number=0, rem=0, sum = 0, i=0;					//Initializing the variables
 printf("Enter a Number:");						//Getting value from the user
    scanf("%d", &number);
if (number>1)
{
	if (number<2000000)
	{

 
   
   	 for (i = 1; i <number; i++)					        //For loop to find all divisors and add them
    	{
        rem = number % i;
	if (rem == 0)
        {
            sum = sum + i;
        }
   	}
    	if (sum == number)						//Condition to check the entered number is perfect number or not.
        printf("\n Yes, entered Number is perfect number");
    else
        printf("\n No, entered Number is not a perfect number");	//Print if the entered number in not a perfect number

	}
	else
	{
	printf("\n Number out of range.");
	}	
	}
else
{
printf("\n Error : Invalid Input, Enter only positive number");
}
printf("\n Do you want to continue (y/Y):");
scanf(" %c", &c);
}while ((c == 'y') || (c == 'Y'));					//Condition to iterate the loop if the user wants to continue

return 0;
}