/*
Name: Gokulakrishnan
Date: 13/04/2021
Description: To generate fibonacci numbers <='n' using recursions
Input: Enter the value of N: -13
Output: 0, 1, -1, 2, -3, 5, -8, -13
*/

#include <stdio.h>

void fibbonacci(int first, int second, int sum, int num, int flag)  // function for Fibonacci series
{
    								//Flag value checking differentiate positive and negative series
    if(flag == 0)  						//Flag value equal to '0' for positive series
    {
        if(sum <= num) 						//Condition to start Fibonacci series logic
        {
            printf(", %d",sum);
            first=second;
            second=sum;
            sum=(first + second);
            fibbonacci(first, second, sum, num, flag); 		//Recursive call
        }
    }
    else 							//Flag value not equal to '0' for neagtive series
    {
        if(sum <= num)
        {
            if(flag % 2 == 0)       				//Positive values for even positons using flag MOD value
            {
                printf(", %d",sum);
                first=second;
                second=sum;
                sum=(first + second);
                flag = flag + 1;     				//Flag value incrementation for every value in the series
                fibbonacci(first, second, sum, num, flag);
            }
            else 						//Negative values for odd positons using flag MOD value
            {
                printf(", %d",sum * -1);
                first=second;
                second=sum;
                sum=(first + second);
                flag = flag + 1;
                fibbonacci(first, second, sum, num, flag);
            }
        }
    }
}
  
void main()
{
  char c;
    do
    {
        int num, flag,sum=1;
        int first=0; 						//Assigning '0' as first value
        int second=1;						//Assigning '1' as second value
         						
        
        printf("Enter the value of N: ");
        scanf("%d", &num);
        
        if(num > 0) 						//Condition for positive series
        {
          flag = 0; 						//Flag '0' for positive series
          printf("%d, %d",first,second);
          fibbonacci(first, second, sum, num, flag); 			//Function call
        }
        else if(num < 0) 					//Condition for negative series
        {
         flag = 1;
         num = num * -1; 					//Converting negative input to positive
         printf("%d, %d",first,second); 			//Flag '1' for neagtive series
         fibbonacci(first, second, sum, num, flag);  		//Function call
        }
        else
        {
          printf("0"); 						//Print statement for input num = 0
        }
        
        printf("\nDo you want continue(y/Y): ");
        scanf(" %c",&c);
    } while(c == 'y' || c == 'Y');  				//DO while condition to iterate the loop 
}