//Comments 
//Name:Gokula Krishnan
//Date:9-4-2021
//Description:Program to implememt bitwise functions
//Input:./bit_ops.c....
//Enter your choice...
//Output:"Binary format for 12->0000000000000000000000000000001100......

#include<stdio.h>
#include<stdlib.h>
int get_nbits(int num, int n)				//get_nbuts function
{
	int i;
	for(i=31; i>=0; i--)				//For loop to print the binary value of the given number
	{
	if ((num>>i)&1)
	{
	printf("1");
	}
	else
	{
	printf("0");
	}
	}
}
int replace_nbits(int num, int n, int val)		//replace_nbits function
{
	int i;
	for(i=31; i>=0; i--)				//For loop to print the binary value of the given number
	{
	if ((num>>i)&1)
	{
	printf("1");
	}
	else
	{
	printf("0");
	}
	}
}
int get_nbits_from_pos(int num, int n, int pos)	//get_nbits_from_pos function
{
	int i;
	for(i=31; i>=0; i--)				//For loop to print the binary value of the given number
	{
	if ((num>>i)&1)
	{
	printf("1");
	}
	else
	{
	printf("0");
	}
	}
}
int replace_nbits_from_pos(int num, int n, int pos, int val)
{
	int i;						//replace_nbits_from_pos function
	for(i=31; i>=0; i--)				//For loop to print the binary value of the given number
	{
	if ((num>>i)&1)
	{
	printf("1");
	}
	else
	{
	printf("0");
	}
	}
}
int toggle_bits_from_pos(int num, int n, int pos)	//toggle_bits_from_pos
{
	int i;
	for(i=31; i>=0; i--)				//For loop to print the binary value of the given number
	{
	if ((num>>i)&1)
	{
	printf("1");
	}
	else
	{
	printf("0");
	}
	}
}
int print_bits(unsigned int num, int n)		//print_bits function
{
	int i;
	for(i=31; i>=0; i--)				//For loop to print the binary value of the given number
	{
	if ((num>>i)&1)
	{
	printf("1");
	}
	else
	{
	printf("0");
	}
	}
}
int main()
{
int num,n,val,pos,choice;				//Initializing the variables
char c;
do							//do_while loop
{
int result=0;
printf("Select bit operation from below list \n1.get_nbits \n2.replace_nbits \n3.get_nbits_from_pos \n4.set_nbits_from_pos");
printf("5.togggle_bits_from_pos \n6.print_bits \nEnter your choice:");
scanf("%d", &choice);
switch(choice)							//Switch condition to enter the choice
{
	case 1:
	{
	printf("Enter num:");
	scanf("%d", &num);
	printf("Enter n:");
	scanf("%d", &n);
	printf("Binary format for %d->%d",num,result);
	result=get_nbits(num, n);				//Function call and passing arguments
	break;
	}
	case 2:
	{
	printf("\nEnter num:");
	scanf("%d", &num);
	printf("Enter n:");
	scanf("%d", &n);
	printf("Enter the val:");
	scanf("%d", &val);
	printf("Binary format for %d->",result);
	result=replace_nbits(num, n,val);			//Function call and passing arguments
	break;
	}
	case 3:
	{
	printf("\nEnter num:");
	scanf("%d", &num);
	printf("Enter n:");
	scanf("%d", &n);
	printf("Enter pos:");
	scanf("%d", &pos);
	printf("Binary format for %d->",result);
	result=get_nbits_from_pos(num, n,pos);		//Function call and passing arguments
	break;
	}
	case 4:
	{
	printf("\nEnter num:");
	scanf("%d", &num);
	printf("Enter n:");
	scanf("%d", &n);
	printf("Enter the val:");
	scanf("%d", &val);
	printf("Enter pos:");
	scanf("%d", &pos);
	printf("Binary format for %d->",result);
	result=replace_nbits_from_pos(num, n,pos, val);	//Function call and passing arguments
	break;
	}
	case 5:
	{
	printf("\nEnter num:");
	scanf("%d", &num);
	printf("Enter n:");
	scanf("%d", &n);
	printf("Enter pos:");
	scanf("%d", &pos);
	printf("Binary format for %d->",result);
	result=toggle_bits_from_pos(num, n,pos);		//Function call and passing arguments
	break;
	}
	case 6:
	{
	printf("\nEnter num:");
	scanf("%d", &num);
	printf("Enter n:");
	scanf("%d", &n);
	printf("Binary format for %d->",result);
	result=print_bits(num, n);				//Function call and passing arguments
	break;
	}
	case 7:
	{
	printf("\nError: Invalid Input");
	}
}
printf("\nDo you want to continue (y/Y):");
scanf( " %c", &c);
}while((c == 'y') || (c == 'Y'));				//Condition to iterate the do while loop				

return 0;
}