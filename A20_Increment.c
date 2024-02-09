/*Comments 
Name:Gokula Krishnan
Date:10-4-2021
Description:WAF for pre and post increment and passing int pointer as their parameter
Input:./20inc.c
Output: Enter the value of N : 5
Enter the operation :
1. Pre-Increment
2. Post-Increment
Choice : 2
After post increment i = 5, num = 6. */

#include <stdio.h>
#include <stdlib.h>

#define MAXVAl 200000000
#define MINVAL -200000000

 static int num;

/* Function prototypes */
int post_increment(int * num);
int pre_increment(int * num);

int main(int argc, char **argv)
{
    int choice, i;
    char option;
	
	do
	{
		/* Do arg count check */
		/* Pass a number num from command line.
			*  b. If no numbers are entered through command line,
			*      read from user.
			*/
		
		if (argc < 2)
		{
			printf("Enter the value of N: ");
			scanf("%d", &num);
		}
		else
		{
			/* get the int value from argv */
			num = atoi(argv[1]);
		}
		
		/* Error Check for limit */
		if ((num <= MINVAL) || (num > MAXVAl))
		{
			printf("Error: num is Invalid Number. Retry\n");
			return 1;	
		} 
				
		/* Read the type of increment from user.
			*      -> post increment
			*      -> pre increment
			*/
		printf("Enter the operation:\n");
		printf("1. pre-increment\n2. post-increment\n");
		printf("Choice: ");
		scanf("%d", &choice);
		
		switch (choice)
		{
			case 1:
				i = pre_increment(&num);
				printf("After pre-increment i = %d, num = %d\n", i, num);
				break;
			case 2:
				i = post_increment(&num);
				printf("After post-increment i = %d, num = %d\n", i, num);
				break;
				
			default:
				break;
		}
		
		 /* Prompt for Continue option */
        printf("Do you want to continue (y/n): ");
        scanf("\n%c", &option);
    
        if ( option == 'y' )
        {
            continue;
        }
        else
        {
            break;
        }
    } while (1);
	
    return 0;
    
}

/*
 *  If num is 5,
 *
 *  i = post_increment(&num);
 *  printf("i === %d\n num === %d\n", i, num);
 *
 *  should print,
 *  i === 5, num === 6
 */
int post_increment(int * num)
{
    int post;
    post = *num;
    *num = (post+1);
 
    return post;
}

/*
 *  If num is 5,
 *
 *  i = pre_increment(&num);
 *  printf("i === %d\n num === %d\n", i, num);
 *
 *  should print,
 *  i === 6, num === 6
 */
int pre_increment(int * num)
{
    int pre;
    pre = *num;
    *num = ++pre;
    
    return pre;
}
