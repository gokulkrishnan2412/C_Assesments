//Name		:Gokula Krishnan
//Date		:5/5/2021
//Description	:Program to implememt the solution for tower of Hanoi
//Input 	:./47toh.c
//Output	:Enter the number of disks N:3
//make the legal move from rod A to C
//make the legal move from rod A to B
//make the legal move from rod C to B
//make the legal move from rod A to C
//make the legal move from rod B to A
//make the legal move from rod B to C
//make the legal move from rod A to C


#include <stdio.h>
 
void towers(int, char, char, char);					//Recursion function
 
int main()
{
    int n;								//Initializing n and choice
    char choice;
 do									//Do whilke loop for condition
 {
printf("Enter the number of disks N : ");
scanf("%d", &n);
if(n>0)
{
towers(n, 'A', 'C', 'B');						//Calling function and passing parameters
}
else
{
printf("Error: Enter only positive values");				//Print error if negative values are entered
}
printf("\nDo you want to continue (y/Y):");
scanf( " %c", &choice);
}while((choice == 'y') || (choice == 'Y'));				//Condition to iterate the do while loop				
}

void towers(int num, char frompeg, char topeg, char auxpeg)		//tower function
{
    if (num == 1)
    {
        printf("\n Make the legal move from rod %c to %c", frompeg, topeg); 
        return;
    }
    towers(num - 1, frompeg, auxpeg, topeg);
    printf("\n Make the legal move from rod %c to %c", frompeg, topeg);
    towers(num - 1, auxpeg, topeg, frompeg);
}