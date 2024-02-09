//Name		:Gokula Krishnan
//Date		:12/5/2021
//Description	:Program to implement binary search for all basic datatypes
//Input 	:./43binary_search.c 4
//Output	:1.int
		//2.short.....

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXLEN 150

int main(int argc, char **argv)
{
int len,c, a[100];
 if (argc != 2)						//Condition to check that no of array is given through command line
    {
        printf("Invalid entry: ./assignment45 <length_of_array>\n");
        exit(1);
    }
    else
    {
        len = atoi(argv[1]);
        if ((len <= 0) || (len > MAXLEN))
        {
            printf("Error: Invalid number of elements. Retry\n");
            return 1;
        }
     }
printf("1.Int\n2.Char\n3.Float\n4.Double\n5.String");
printf("\nChoice:");
scanf("%d", &c);
switch(c)
{
	case 1:
		printf("Enter %d elements of type int", len);
		for(int i=1; i<=len; i++)
		{
		printf("\n%d.", i);
		scanf("%d", &a[i]);
		fun_int( a, len);
		}
}
}

int fun_int( int a[100], int len)
{
int x;
        for (int i = 0; i < len; ++i) 
        {
 
            for (int j = i + 1; j < len; ++j)
            {
 
                if (a[i] > a[j]) 
                {
 
                    x= a[i];
                    a[i] = a[j];
                    a[j] = x;
                   }
             }
            }
            for (int i=0; i< len; i++)
           { 
           printf("%d", a[i]);
           }
}