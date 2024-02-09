//Name		:Gokula Krishnan
//Date		:25/3/2021
//Description	:Program to print all basic data types
//Input 	:./sizeof
//Output	:Size of int:4....

#include <stdio.h>
int main()
{
int n1;
char c1;
float f1;
double d1;
unsigned int u1;
long int l1;
printf ("\nSize of int \t\t:%zu bytes",sizeof (n1));
printf ("\nSize of char \t\t:%zu byte",sizeof (c1));
printf ("\nSize of float \t\t:%zu bytes",sizeof (f1));
printf ("\nSize of double \t\t:%zu bytes",sizeof (d1));
printf ("\nSize of unsigned int \t:%zu bytes",sizeof (u1));
printf ("\nSize fo long int \t:%zu bytes\n",sizeof (l1));
return 0;
}