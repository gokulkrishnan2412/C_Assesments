//Comments 
//Name:Gokula Krishnan
//Date:29-4-2021
//Description:Program to find the average of n numbers by taking input in three different ways
//Input:./A18_avg.c
//Select the methos to calculate average
//1.Scan from keyboard.
//2.Proceed with provided command line arguments
//3.Proceed with environment variable arguments
//Enter your choice:1
//Enter the total number of integers....o
//Output:The average of entered numbers is: 6.25


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLEN 15000

float scan_from_keyboard( int a[], int n)
{
int sum=0;
float average;
for( int i=0; i<n ; i++)
{
sum=sum+a[i];
}
average=(float)sum/n;
return average;
}

int main(int argc,char *argv[],char *envp[])
{
/*Initializing the variables */
int count, number[MAXLEN],choice,n,a[100];
int i;
float average, sum,result,avg=0;
char *arr;
const char str[2] = " ";
char *token;
/*Getting choice form the user*/
    
printf("Select the methos to calculate average:\n1.Scan from keyboard.");
printf("\n2.Proceed with provided command line arguments.");
printf("\n3.Proceed with environment variable arguments.");
printf("\nEnter your choice\t:");
scanf("%d", &choice);
/*Switch case*/
switch(choice)
{
case 1:
	{
	/*Getting number of integers and elements from the user*/
	printf("Enter the total number of integers:");
	scanf("%d", &n);
	printf("Enter the elements:");
	for( int i=0; i<n; i++)
	{
	scanf("%d", &a[i]);
	}
	/*Passing arguments to function*/
	result=scan_from_keyboard(a,n);
	printf("The average of entered numbers : %.2f", result);
	break;
	}
case 2:
	{
	/*Checking if arguments in command line*/
	if(argc<=1)
	{
	/*Print error if no numbers are given through command line*/
	printf("\nEnter appropriate number of arguments to calculate average. \n \n");
	exit(0);
	}
	/*Else loop to print the average of the numbers through command line*/
	else
	{
		for(i=1;i<argc;i++)
		{
			avg+=atoi(argv[i]);
		}
	}
        avg/=argc-1;
	printf("The average of entered numbers: %f \n",avg); 
	break;
        }
        
case 3:
	{
	 
        
   	 average = 0;
    	 sum = 0;
   	 count = 0;
    
    	printf("From shell export a variable which contain numbers. export arr= 1 2 3 4 \n");
    
    	/* get the data from environment variable that was set */
    	 arr = getenv("ARR");
    
     	printf ("Arr= %s.\n", arr);
  
    	/* get the first token */
     	token = strtok(arr, str);
    
    	/* walk through other tokens */
     	while( token != NULL )
     	{
        count++;
        /* convert the string to integer */
        number[count] = atoi(token);
        /* sum of the numbers */
        sum += number[count];
        /* Actual Numbers */
        //printf( " %s\n", token );
        token = strtok(NULL, str);
     	}
     	//printf ("sum = %f \n", sum);
     	/*  Calculate average of entered numbers and print it on the screen */
     	 average = sum / count;
 
      	printf("The average of entered numbers\t: %f \n", average);
    
   	return 0;
   	break;
      }
	}
}
	