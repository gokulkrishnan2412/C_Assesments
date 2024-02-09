//Comments 
//Name:Gokula Krishnan
//Date:23-3-2021
//Description:Program to check whether number is odd or even and its signedness
//Input:./even_odd.c
//Enter the value of 'n':4
//Output:4 is a positive even number


#include <stdio.h>

int main() {
int n;
char c;
					

do
{
printf("Enter the value of 'n':");		//Getting n value from the user
scanf("%d", &n);
if(n<-2000000 || n<2000000)			//If condition to check the number lies betweeen -2000000 and 2000000
{
if(n<0 && (n%2) !=0)				//If condition to check the number is -ve odd			
{
printf(" %d is a -ve odd number",n);
}
else if(n<0 && (n%2) ==0)			//elseif condition to check the number is -ve even			
{
printf(" %d is a -ve even number",n);
}
else if(n>0 && (n%2) !=0)			//elseif condition to check the number if +ve odd		
{
printf("%d is a +ve odd number",n);
}
else if(n>0 && (n%2) ==0)			//condition to check the number is +ve even			 
{
printf("%d is a +ve even number",n);
}
}
else
{
printf("Number out of range:");			//Print if number out of range			
}
printf("\nDo you want to continue (y/Y):");
scanf( " %c", &c);
}while((c == 'y') || (c == 'Y'));		//Condition to iterate the loop				

return 0;
}