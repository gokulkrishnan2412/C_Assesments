//Comments 
//Name:Gokula Krishnan
//Date:23-3-2021
//Description:Program to swap two numbers
//Input:./swap.c
//Enter a number a:3
//Enter a number b:2
//Output:After swapping a=2 b=3
#include <stdio.h>
void swap( int *a, int *b)
{
int temp;						//Initializing a temporary variable
temp= *a;
*a= *b;
*b= temp;

}
int main()
{
int a,b;					
printf("Enter a number a:");
scanf("%d", &a);					//Getting values for the user
printf("Enter a number b:");
scanf("%d", &b);
swap( &a, &b);
printf("After swapping \na= %d\nb=%d",a,b);		//Printing the result
return 0;
}