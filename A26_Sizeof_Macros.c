/*Comments 
Name:Gokula Krishnan
Date:10-4-2021
Description:To define a macro SIZEOF(x), where x is a variable, without using sizeof
operator
Input:./26sizeof.c
Output:Size of int : 4
Size of char : 1
Size of float :...... */

#include<stdio.h>
#include<string.h>

/*Preprocessing macros*/
#define sizeof_var(x) (size_t)(&x+1)-(size_t)(&x)

int main()

{
int a;
/*Printing interger size*/
printf("Size of int: %ld bytes",sizeof_var(a));
char b;
/*Printing character size*/
printf("\nSize of char: %ld bytes",sizeof_var(b));
float c;
/*Printing float size */
printf("\nSize of float: %ld bytes",sizeof_var(c));
double d;
/*Printing double size */
printf("\nSize of double: %ld bytes",sizeof_var(d));
unsigned int e;
/* Printing unsigned integger size */
printf("\nSize of unsigned int: %ld bytes",sizeof_var(e));
long int f;
/* Printing long integer size */
printf("\nSize of long int: %ld bytes",sizeof_var(f));


return 0;
}