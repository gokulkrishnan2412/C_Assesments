//Name		:Gokula Krishnan
//Date		:24/4/2021
//Description	:Program to replace ecah string of one or more blanks by a single blank
//Input 	:./A23-remove_multi_space.c
//Output	:Enter the string with more spaces in between two words........

# include <stdio.h>
#include <string.h>
int function( char *ptr)
{
char choice;
do
{
int c;
int inspace=0;
printf("Enter the string with more spaces in betweeen two words\n");
while((c=getchar()) != EOF)
{

	if(c == ' ')
	{
	if(inspace ==0)
		{
		inspace = 1;
		putchar(c);
		}
	}
	if(c != ' ')
	{		
		inspace = 0;
		putchar(c);
	}
}
printf("\nDo you want to continue (y/Y):");
scanf( " %c", &choice);
}while((choice == 'y') || (choice == 'Y'));				//Condition to iterate the do while loop				

}
int main()
{
char c[50];
function(c);
}