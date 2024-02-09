//Comments 
//Name:Gokula Krishnan
//Date:06-06-2021
//Description:Program to define a macro swap (t, x, y) that interchanges two arguments of type t
//Input:./27swap.c
/*Output:/swap
Enter the num1 : 10
Enter the num2 : 20
After Swapping :
num1 : 20
num2 : 10*/

#include<stdio.h>
#include<string.h>

#define swap(t,x,y) { t _z; \
             _z = x;\
              x = y;\
              y = _z; }

int main(void)
{
char c;
do
{
   int choice,n1,n2;
   char c1,c2;
   short s1,s2;
   float f1,f2;
   double d1,d2;
   char *a,*b;
   printf("1.Int\n2.char\n3.short\n4.float\n5.double\n6.string\n");
   printf("Enter your choice:");
   scanf("%d",&choice);
   switch(choice)
   {
   case 1:
   {
   printf("Enter the number1:");
   scanf("%d",&n1);
   printf("Enter the number2:");
   scanf("%d",&n2);
   printf("After swapping:\n");
    swap(int,n1,n2);
    printf("number1:%d\nnumber2:%d\n",n1,n2);
    break;
   }
   case 2:
   {
   printf("Enter the char1:");
   scanf("%c", &c1);
   printf("Enter the char2:");
   scanf("%c", &c2);
   printf("After swapping:\n");
   swap(char,c1,c2);
   printf("char1:%c\nchar2:%c\n",c1,c2);
   break;
   }
   case 3:
   {
   printf("Enter the short1:");
   scanf("%hi", &s1);
   printf("Enter the short2:");
   scanf("%hi", &s2);
   printf("After swapping:\n");
   swap(short,s1,s2);
   printf("short1:%hi\nshort2:%hi\n",s1,s2);
   break;
   }
   case 4:
   {
   printf("Enter the float1:");
   scanf("%f", &f1);
   printf("Enter the float2:");
   scanf("%f", &f2);
   printf("After swapping:\n");
   swap(float,f1,f2);
   printf("float1:%f\nfloat2:%f\n",f1,f2);
   break;
   }
   case 5:
   {
   printf("Enter the double1:");
   scanf("%lf", &d1);
   printf("Enter the double2:");
   scanf("%lf", &d2);
   printf("After swapping:\n");
   swap(double,d1,d2);
   printf("double1:%lf\ndouble2:%lf\n",d1,d2);
   break;
   }
   case 6:
   {
   printf("Enter the string1:");
   scanf("%s", a);
   printf("Enter the string2:");
   scanf("%s", b);
   printf("After swapping:\n");
   swap(char,*a,*b);
   printf("string1:%s\nstring2:%s\n",a,b);
   break;
   }
   }
printf("\nDo you want to continue (y/Y):");
scanf( " %c", &c);
}while((c == 'y') || (c == 'Y'));			 //Condition to iterate the do while loop				
return 0;
}