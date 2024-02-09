/*Comments 
Name:Gokula Krishnan
Date:13-6-2021
Description:Program to read_int to read an integer
Input:./30read_int.c
Output: Enter a number: 212
The number is 212...
..... */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


#define STORAGE 255

/* Function prototype */
int read_int(char *w);

int main()
{
    int c, i;
    char option;
 
    do
    {
        
        /* clear the buffer everytime you try to store */
		char s[STORAGE] = {0} ;
	
        /* enter the value */
        printf("Enter the number: ");
        
        /* read the value similar to scanf */
        read_int(s);
        
        /* print the value that is stored in s after reading */
        printf("The number is = %s \n", s);
        
        /* Prompt for Continue option */
        printf("Do you want to continue (y/n): ");
         
        scanf("\n%c", &option);
        
        if ( option == 'y' )
        {
			getchar(); /* to remove the newline */
			continue;
        }
        else
        {
            break;
        }

    } while(1);
    return 0;
}

/* behave like scanf("%d", &i) */
int read_int(char *w)
{
    int i, ch;
    w[0] = '0';
    //int intVal = 0, s = 1;
    
    /* till new line is reached, collect the characters 
     * in s whose reference is passed 
     */
	
    for (i=0; ((ch = getchar()) != '\n'); i++)
    {
        /* check for negative value */
        if ( ch == '-')
        {
            /* If first digit is -, let s = 1 and start i from next */
            //s = -1;
            w[0] = '-';
            i++;
            ch = getchar();
        }
        
		if(isdigit(ch))
		{
			w[i] = ch;
            //intVal = intVal*10 + ch - '0';
		}
		
    }
    //printf("%d\n", (s * intVal));
    return 0 ;
}