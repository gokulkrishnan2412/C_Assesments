//Comments 
//Name:Gokula Krishnan
//Date:21-5-2021
//Description:Program to print all possible combinations of given string.
//Input:./49combinations.c
/*Output:Enter a string: abc
abc
acb
bca
bac
cab
cba
Do you want to continue (Y/y) : n*/

#include <stdio.h>
#include <string.h>
 
// Function to swap values at two pointers
void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
 
// Function to print permutations of string
/*This function takes three parameters:
1. String
2. Starting index of the string
3. Ending index of the string. */
void permute(char *a, int l, int r)
{
int i;
if (l == r)
    printf("%s\n", a);
else
{
    for (i = l; i <= r; i++)
    {
        swap((a+l), (a+i));
        permute(a, l+1, r);
        swap((a+l), (a+i));
    }
}
}
 
// Driver program to test above functions
int main()
{
char c;
do
{
    char str[10];
    int result;
    printf("Enter a string:");
    scanf("%s", str);
    int n = strlen(str);

    permute(str, 0, n-1);
printf("\nDo you want to continue (y/Y):");
scanf( " %c", &c);
}while((c == 'y') || (c == 'Y'));					//Condition to iterate the do while loop				
return 0;
}