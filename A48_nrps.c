//Name		:Gokula Krishnan
//Date		:20/5/2021
//Description	:Program to take n and k (1 <= k <= 10) as inputs. Generate consecutive NRPS of
                 //length n using k distinct character (0 <= k <= 9)
//Input 	:./48nrps.c
//Output	:Enter the number caharacters C: .....
		
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

#define MAXLEN 255
#define MAXVAL 2000000
#define MINVAL -200000

void NPRSString(char str[] , int len, int k);

int main()
{
    int n, k, i, j;
    char kdistinct[MAXLEN];
    
    
    
    printf("Enter the number of Characters C: ");
    scanf("%d", &k);
    // Error Check for limit
    if ((k < 1) || (k > 10))
    {
        printf("Error: Invalid Number. Retry\n");
        return 1;
    }
    printf("Enter the Lenght of the string N: ");
    scanf("%d", &n);
    
    // boundary checking
    // Error Check for limit 
    if ((n < MINVAL) || (n > MAXVAL))
    {
        printf("Error: Invalid Number. Retry\n");
        return 1;
    }
    
    printf("Enter the %d disctint characters: \n",k);
    for (i = 0; i < k; i++)
    {
          scanf("\n%c", &kdistinct[i]);
    }
    
    // check for distinct characters 
    for (i = 0; i < k; i++)
    {
        for (j = (i+1); j < k; j++)
        {
            if(kdistinct[j] == kdistinct[i] )
            {
                printf("Error: values are not distinct.\n");
                return 1;
            }
        }
    }
    
    NPRSString(kdistinct, n, k);
      return 0;
}
//Function to print NRPS String
void NPRSString(char str[] , int len, int k) 
{
    int i, val = 0, count = 0;
    printf("Possible NRPS is ");
    for (i = 0; i < len; i++)
    {
        if(i%k == 0 && i != 0)
		{
			val++;
		}
        printf("%c", *(str+((i+val)%k)));
    }
    
}