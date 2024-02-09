//Comments 
//Name:Gokula Krishnan
//Date:23-3-2021
//Description:Program to print the Fibbonacci series
//Input:./fibbonacci_series.c
//Enter a number:3
//Output:0,1,1


#include <stdio.h>

int main()
 {
    
    char c;
do  
{
   
   int i=0,n=0,t1=0,t2 = 1, nextTerm=0;   		//Initializing the values
    printf("Enter a number: ");				//Getting value form the user
    scanf("%d", &n);

    	for (i = 1; i <= n; ++i) 			//for loop to perform fibonacci series
	{
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

	}
printf("\nDo you want to continue (y/Y):");
scanf(" %c", &c);
}while ((c == 'y') || (c == 'Y'));			//Condition to iterate the loop or not

    return 0;
}