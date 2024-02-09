/*Comments 
Name:Gokula Krishnan
Date:14-6-2021
Description:Program to read a string and print it in reverse without storing in an array using recursive
method OR non-recursive method.
Input: 40str_rev.c
Output: Enter a string
: Hello World
Reverse string is : dlroW olleH */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "stype_lib.c"

#define MAXSTRINGLEN 255

int main()
{
    char option;
    char s1[MAXSTRINGLEN];
    
    do
    {
        printf("Enter string: ");
        fgets(s1, (sizeof(s1)+1), stdin);
        /* Error check for out os range */
        
        if (s1[strlen(s1)-1] != '\n')
        {
            printf("ERROR: String1 Out of range\n");
            /* clean all from stdin and set pointer to 0 */
            fflush(stdin);
            fseek(stdin, 0L, SEEK_SET);
            return -1;
        }
        
        
        /* print it in reverse order without storing in an array
         * Recursively
         */
        printf("Reverse string is: ");
        print_reverseStringRec(s1);
        printf("\n");
        
        /* Prompt for Continue option */
        printf("Do you want to continue (y/n): ");
        scanf("%c", &option);
    
        if ( option == 'y' )
        {
            getchar();
            continue;
        }
        else
        {
            break;
        }
    
    } while(1);

    return 0;
}