//Comments 
//Name:Gokula Krishnan
//Date:29-3-2021
//Description:Program to check progression
//Input:./progression.c
//Enter the first value:....
//Output:AP:2,.....


#include <stdio.h>
int main()
{
char c;							//Initializing c variable
do
{
int a=0,r=0,n=0,value=0;					//Initializing the variables
float sum=0;
printf("Enter the first number'A':");
scanf("%d",&a);
printf("Enter the Common Difference / Ratio 'R':");		//Getting a,r,n values from the user
scanf("%d",&r);
printf("Enter the number of terms 'N':");
scanf("%d",&n );
if(a>0 && n>0 && r>0)						//If condition checking if entered numbers greater than 0
{
	if(a<2000 && n<2000 && r<2000)			//Condition to check if entered numbers are less than 2^10
	{
	printf("AP:");
	value=a;
	for(int i=0; i<n ;i++)					//For loop to find the AP series
	{
	printf("%d,",value);
	sum+=value;
	value=value+r;
	}
	printf("\nGP:");
	value=a;
	for(int i=0;i<n;i++)					//For loop to find GP series
	{
	printf("%d,",value);
	sum+=value;
	value=value*r;
	}
	printf("\nHP:");
	value=a;
	sum=0;
	for(int i=0;i<n;i++)					//For loop to find HP series
	{
	sum= 1/(float)value;
	value+=r;
	printf("%f,", sum);
	
	}
	}

	else
	printf("Input's out of range");			//Else condition will be printed, if entered numbers greater than 2^10
}
else
{
printf("Invalid Input's: Please enter only positive values"); //Else condtion will be printed, if numbers >2^10
}
printf("\nDo you want to continue(y/Y):");
scanf(" %c", &c);
}while((c == 'y') || (c == 'Y'));				//Condition to iterate the loop if the user wants to continue
return 0;
}