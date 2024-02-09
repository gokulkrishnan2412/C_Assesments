/*Comments 
Name:Gokula Krishnan
Date:14-6-2021
Description:Program to Read n & n person names of maxlen 32. Sort and print the names
Input: 38sort.c
Output: Enter the 5 names of length max 32 characters in each
[0] -> Delhi
[1] -> Agra
[2] -> Kolkata
[3] -> Bengaluru
[4] -> ChennaiThe sorted names are:
[0] -> Agra
[1] -> Bengaluru
[2] -> Chennai
[3] -> Delhi
[4] -> Kolkata*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXNAMES 256
#define MAXLEN 32

void sortPersonNameASCII(char * array[], int personCount);
void swap_generic(void * aptr, void * bptr, int size);

int main()
{
    int nPerson=5, i, j, choice;
    
    char **storenPerson;
    printf("Enter the 5 names of length max 32 characters in each\n");   
    
    /* Memory to store n person Names */
    char ** const sptr = (char**)malloc(sizeof(char*) * nPerson);
    
    if (NULL == sptr) {
        printf("Error: Malloc allocation Failure \n");
        return 1;
    }
    
    /* Memory to save each names of maxlen 32*/
    for (i = 0; i < nPerson; i++)
    {
        sptr[i] = (char*)malloc(sizeof(char) * (MAXLEN+1));
        
        if (NULL == sptr[i]) {
            printf("Error: Malloc allocation Failure for Person [%d] \n", i);
            return 1;
        }

    }
    
    storenPerson = sptr;
    
    for (i = 0; i < nPerson; i++)
    {
        printf("[%d] -> ", i);
        scanf("%s", storenPerson[i]);
        
        /* check for names with maxlen 32 */
        if (strlen(storenPerson[i]) > MAXLEN) {
            printf("Error: name length of persdon %d is > 32. Retry\n", i);
            return 1;
        }
    }
    /* Printing the person elements in sorted order. */
            printf("The sorted names are: \n");
            sortPersonNameASCII(storenPerson, nPerson);
            
            for (i = 0; i < nPerson; i++)
            {
                printf("[%d]:%s\n",i, storenPerson[i]);
            }
    
    
    free(sptr);
    storenPerson = NULL;
    
    printf("\n");
    return 0;
}


/* Sorting Person Name by Alphabetically(ASCII) -
 *  Bubble sort using generic swap 
 */
void sortPersonNameASCII(char * array[], int personCount)
{
    int i, j;
    
    for (i = 0; i < personCount; i++)
    {
        for (j = 0; j < personCount - i - 1; j++)
        {
            if ((strcmp(*(array+j), *(array+j+1)) > 0 ))
            {
                swap_generic(*(array+j), *(array+j+1), MAXLEN);
            }
        }
    }
}

void swap_generic(void * aptr, void * bptr, int size)
{
    int i;
    char temp;
    
    for ( i = 0; i < size; i++ )
    {
        temp = * (char *) aptr;
        * (char *) aptr++ = * (char *) bptr;
        * (char *) bptr++ = temp;
    }
}