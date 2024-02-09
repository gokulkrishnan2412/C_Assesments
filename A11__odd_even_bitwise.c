//Comments 
//Name:Gokula Krishnan
//Date:29-3-2021
//Description:Program to check whether number is odd or even and its signedness using bitwise operator(&)
//Input:./even_odd.c
//Enter the value of 'n':4
//Output:4 is a +ve even number


#include <stdio.h>

int main() 
{
int n;
char c;
do
{
printf("Enter the value of 'N':");		//Getting n value from the user
scanf("%d", &n);
if(n<0 && (n&1) ==1 )				//If condition to check the number is -ve odd			
{
printf(" %d is a -ve odd number",n);
}
else if(n<0 && (n&1) != 1)			//elseif condition to check the number is -ve even			
{
printf(" %d is a -ve even number",n);
}
else if(n>0 && (n&1) ==1)			//elseif condition to check the number if +ve odd		
{
printf("%d is a +ve odd number",n);
}
else if(n>0 && (n&1) !=1)			//condition to check the number is +ve even			 
{
printf("%d is a +ve even number",n);
}
printf("\nDo you want to continue (y/Y):");
scanf( " %c", &c);
}while((c == 'y') || (c == 'Y'));		//Condition to iterate the loop if user says y.				

return 0;
}