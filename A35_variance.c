/*Comments 
Name:Gokula Krishnan
Date:14-6-2021
Description:Program to find variance calculation with static arrays & with dynamic arrays
Input:./35variance.c
Output: Enter the 10 elements:
[0] -> 9
[1] -> 12
[2] -> 15
[3] -> 18
[4] -> 20
[5] -> 22
[6] -> 23
[7] -> 24
[8] -> 26
[9] -> 31
The Variance of the entered numbers is 40 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAXLEN 256
#define MAXVAL 20000000
#define MINVAL -20000000

int main(int argc, char **argv)
{
    int intCount, i;
    int intArray[MAXLEN];
    int variance, mean, sum;
    
    /* Do arg count check */
    if (argc != 2)
    {
        printf("Invalid entry: ./assignment37 <size> \n");
        exit(1);
    }
    else
    {
        /* Error Check for limit */
        if (((atoi(argv[1])) < 0) || ((atoi(argv[1])) > MAXLEN))
        {
            printf("Error: value is Invalid Number size. Retry\n");
            return 1;
        }
        intCount = (atoi(argv[1]));
    }
    
    printf("Enter 5 numbers: \n");
    for (i = 0; i < intCount; i++)
    {
        printf("[%d] -> ", i);
        scanf("%d", &intArray[i]);
        
        /* Error Check for limit */
        if (((intArray[i]) < MINVAL) || ((intArray[i]) > MAXVAL))
        {
            printf("Error: Out of range. Retry\n");
            return 1;
        }
        
    }
    
    /*  Compute the mean of all elements */
    for (i = 0; i < intCount; i++)
    {
        sum += intArray[i];
    }
    mean = sum / intCount;
    sum = 0;
    
    /*  Compute  variance */
    for (i = 0; i < intCount; i++)
    {
        sum = sum + pow((intArray[i] - mean), 2);
    }
    variance = sum / intCount;
    
    printf("The variance of entered numbers is %d\n", variance );
    
    return 0;
}