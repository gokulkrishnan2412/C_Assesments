//Name		:Gokula Krishnan
//Date		:5/5/2021
//Description	:Program to check your processor endianess
//Input 	:./42endianness.c
//Output	:Enter any number....


#include <stdio.h>
int main() 
{
char choice;
do
{
   unsigned int i ;
   printf("Enter any number:");					//Getting an unsigned value form the user
   scanf("%u", &i);
   char *c = (char*)&i;						//Checking the value
   if (*c)  								//If else condition to print little or big endian
   {  								
       printf("Little endian");
   }
   else
   {
       printf("Big endian");
   }
   getchar();
printf("\nDo you want to continue (y/Y):");
scanf( " %c", &choice);
}while((choice == 'y') || (choice == 'Y'));				//Condition to iterate the do while loop				

return 0;
}