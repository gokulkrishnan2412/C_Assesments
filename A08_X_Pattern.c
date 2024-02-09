//Comments 
//Name:Gokula Krishnan
//Date:29-3-2021
//Description:Program to print hello in x format
//Input:./x_pattern.c
//Enter a number line:6
//Output: Hello   Hello...


#include <stdio.h>
int main()
{
char c;
do
{
int i=0,j=0,size=0;				//Initializing the variables
printf("Enter a number line:");
scanf("%d", &size);				//getting the size value from the user
if(size>0)					//If condition to check if number greater than 0
{
	if(size<32)				//Condition to check if number less than N<2^5
	{
	for(i=0;i<size;i++)			//For loop to iterate the loop
	{
		for(j=0;j<size;j++)
		{
		if(j==i || j==(size-1-i))	//Condition to check if i=j or j=size-1-i
		{
		printf("Hello");		//Print "hello" if if condition is true
		}
		else
		{
		printf(" ");			//Print space if 'IF' condition is false
		}
		}
		printf("\n");
		}
	}
	else
	{
	printf("Number out of range");	//Print if number out of range
	}
}
else
{
printf("Enter only positive values");		//Print error if entered number is negative
}
printf("\nDo you want to continue(y/Y):");	//Condition to iterate the loop
scanf(" %c", &c);
}while((c == 'y') || (c == 'Y'));	
return 0;
}