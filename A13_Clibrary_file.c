//Comments 
//Name:Gokula Krishnan
//Date:1-04-2021
//Description:Program to implement own c-type library file
//Input:./c_type_lib.c
//Enter the character:t.......
//Output:The character t is an alnum character.
#include <stdio.h>
#include <ctype.h>
int my_isalnum (char x)					//my_isalnum function
{
if(isalnum(x) != 0)						//If condition to check isalnum
{
printf("The character %c is an alnum character",x);
}
else
{
printf("The character %c is not an alnum character",x);
}
return 0;
}
int my_isalpha (char x)					//my_isalpha function
{
if(isalpha(x) != 0)						//if condition to check isalpha function
{
printf("The character %c is an alpha character",x);
}
else
{
printf("The character %c is not an alpha character",x);
}
return 0;
}
int my_isascii (char x)					//my_isascii function
{
if(isascii(x) != 0)						//condition to check isascii function
{
printf("The character %c is an ascii character",x);
}
else
{
printf("The character %c is not an ascii character",x);
}
return 0;
}
int my_isblank (char x)					//my_isblank function
{
if(isblank(x) != 0)						//condition to check isblank function
{
printf("The character %c is an blank character",x);
}
else
{
printf("The character %c is not an blank character",x);
}
return 0;
}
int main()							//main function
{
char a,c;
int n=0;							//Initializing variables
do
{
printf("Enter the character:");				//Getting character from the user
scanf("%s", &a);

printf("\nSelect any option: \n1-isalpha \n2-isalnum \n3-isascii \n4-isblank \n"); 
scanf("%d", &n);						//Getting choice from the user
	switch(n)						//switch case to pass a argumrnt to functions
	{
	case 1:
	my_isalpha(a);
	break;
	case 2:
	my_isalnum(a);
	break;
	case 3:
	my_isascii(a);
	break;
	case 4:
	my_isblank(a);
	break;
	}
printf("\nDo you want to continue (y/Y):");
scanf( " %c", &c);
}while((c == 'y') || (c == 'Y'));				//Condition to iterate the loop if user says y.				

return 0;
}