//Comments 
//Name:Gokula Krishnan
//Date:31-3-2021
//Description:Program to print  bits of signed and unsigned types of given number and check for 2's complement
//Input:./2s_comp.c
//Enter the number:12
//Output:+12->0000000000000000000000000000001100......


#include <stdio.h>

int main() 
{
int n;
signed int b;
char c;
do
{
printf("Enter the number:");			//Getting n value from the user
scanf("%d", &n);
printf( "%d->",n);
for (int i=1<<30; i>0; i= i/2)		//For loop to print bits upto 32
{
	if((n&i)!=0)				//If condition to check n and i not equal to 0
	{
	printf("1");				//Print if If condition is true
	}
	else
	{
	printf("0");				//Print if if condition is false
	}
}
b=(~n+1);					//Changing sign and storing the value of n in variable b
printf( "\n%d->",b);
for (int i=1<<30; i>0; i= i/2)		//For loop to print bits upto 32
{
	if((b&i)!=0)				//If condition to check n and i not equal to 0
	{
	printf("1");				//Print if If condition is true
	}
	else
	{
	printf("0");				//Print if if condition is false
	}
}


printf("\nDo you want to continue (y/Y):");
scanf( " %c", &c);				//Getting the value of c
}while((c == 'y') || (c == 'Y'));		//Condition to iterate the loop if user says y.				

return 0;
}