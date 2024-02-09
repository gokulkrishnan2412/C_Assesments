//Name:Gokula Krishnan
//Date:25/03/2021
//Description: Program to print ascii characters
//Input: ./ascii
//Output: Dec  oct   hex     Ascii....

#include <stdio.h>
int main()
{
int  n=127;						//Initializing n variable
printf("Dec	Oct	Hex	Ascii ");	
for (int i=0; i<128 ; i++)				//For loop to print values from 0 to 127
{
printf("\n%d\t %o\t %x\t %c",i,i,i,i);		//Print the Decimal,Octal,Hexadecimal and ASCII values.
}
return 0;
}
	  