//Comments 
//Name:Gokula Krishnan
//Date:10-6-2021
//Description:Program to find factorial for given number using recursive method and without
//using any other function than main function
//Input:./19factorial.c
//Output:Enter the value of N: 7
//Factorial of 7 is : 5040
#include <stdio.h>
#include <stdlib.h>

#define MAXVAl 200000000
#define MINVAL -200000000

int main()
{
    static int returnValue, flag = 1, num, n, temp =1;
	
	if(flag)
    {
        printf("Enter the value of n: ");
        scanf("%d", &num);
		
		/* Error Check for limit */
		if ((num < 0) || (num > MAXVAl))
		{
			printf("Error: Invalid Input\n");
			return 1;	
		} 		
		flag = 0;
		n=num;
	}	
	
	temp = temp * num--;

	/* check for initial valid number */
    if (num < 1)
    {
		printf("Factorial of %d is: %d \n",n, temp);
        return 0;
    }
    else
    {
		main();
	}
    
}