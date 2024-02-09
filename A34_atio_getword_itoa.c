//Comments 
//Name:Gokula Krishnan
//Date:26-4-2021
//Description:Program to implememt getword, atio, itoa functions.
//Input:./34_atio_getword_itoa.c
//1.getword
//2.atio
//3.itoa
//Enter your choice:1
//Enter a word:Hello
//Output:You entered hello

#include<stdio.h>
#include<string.h>
int getword( char str[])					//getword function
{
int n;
n=strlen(str);							//storing length of the string passed
return n;
}
int atio( char str[])						//atio function
{
int temp = 0,n;
n=strlen(str);							//Storing lengthh of the string in variable n
    for (int i = 0; i < n; i++) {
  
        // Since ASCII value of character from '0'
        // to '9' are contiguous. So if we subtract
        // '0' from ASCII value of a digit, we get 
        // the integer value of the digit.
        temp = temp * 10 + (str[i] - '0');
    }
    return temp;

}
int itoa(char str[])						//itoa function
{
int temp = 0,n;
n=strlen(str);
    for (int i = 0; i < n; i++) 
    {
  
        // Since ASCII value of character from '0'
        // to '9' are contiguous. So if we subtract
        // '0' from ASCII value of a digit, we get 
        // the integer value of the digit.
        temp = temp * 10 + (str[i] - '0');
    }
    return temp;
}

int main()							//Main function
{
char c;
do
{
char *word[50];
int choice,result;
printf("1.getword\n2.atio\n3.itoa");
printf("\nEnter your choice:");
scanf("%d", &choice);						//Getting choice form he user
switch(choice)							//Switch statement to call the functions
{
	case 1:
	{
	printf("Enter a word:");
	scanf(" %s", word);
	result=getword(word);					//Function call
	printf("You entered %s: %d", word, result);		//Printing word and length of the string
	break;
	}
	case 2:
	{
	printf("Enter a numeric string:");
	scanf(" %s", word);
	result=atio(word);					//Function call
	printf("String to Integer is %d", result);		//Printing the string
	break;	
	}
	case 3:
	{
	printf("Enter a number:");
	scanf(" %s", word);
	result=itoa(word);					//Function call
	printf("Integer to string is %d ", result);		//Printing the result
	break;
	}
}
printf("\nDo you want to continue (y/Y):");
scanf( " %c", &c);
}while((c == 'y') || (c == 'Y'));				//Condition to iterate the do while loop				
}
