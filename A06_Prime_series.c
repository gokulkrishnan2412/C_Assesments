//Name		:Gokula Krishnan
//Date 		:26/03/2021
//Description	:Proggram to print prime numbers using Erathosthenes methos.
//Input		:./prime_series
//Output	:Enter the value of 'n':20
		//The prime less than or equal to 20 are:2,3,5,7,...

#include <stdio.h>
int main()
{
char c;
do
{
int n=0;
printf("Enter n value: ");						//Getting values from the user
scanf("%d", &n);
if (n>0)								//Condition to check if n greater 0
{	
  if (n<2000000)							//If condition to check if number less than 2000000
  {
	int prime[n+1];
									//Loading the array with numbers from 1 to n
	for(int i = 1; i <= n; i++)
	{
		prime[i] = i;
	}
									
	for(int i = 2; i*i <= n; i++)   				//Start with least prime number, which is 2.
									//No need to check for numbers greater than square root of n.
									//They will be already marked.
	{
		if(prime[i] != -1)
		{
									//Mark all the multiples of i as -1.
			for(int j = 2*i; j <=n ; j += i)
				prime[j] = -1;
		}
	}
	printf("Prime numbers are: \n");
	for(int i=2; i <= n; i++)
	{
		if(prime[i] != -1)
		{
			printf("%d ", i);				//Loop to print the prime numbers
		}
	}

}
else
{
printf("\nNumber ouut of range");					//Print if number greater than 2000000
}
}
else
{
printf("\nInvalid Input");						//Print if number less than 0
}
printf("\nDo you want to continue (y/Y):");
scanf( " %c", &c);
}while ((c == 'y') || (c == 'Y'));					//While condition to iterate the loop
}