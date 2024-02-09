//Comments 
//Name:Gokula Krishnan
//Date:26-4-2021
//Description:Program to prinyt the values in sorted order without modifying or copying "store"
//Input:./36_sort.c
//Enter the count of float elements needed to be stored
//Output:After sorting:......

#include<stdio.h>
int function( float ptr[],int n)
{
printf("\n\nElement After Sorting \n\n");

for(i=0;i<n;i++)
{
    for(j=0;j<n-i-1;j++)
    {
        if(a[j]>a[j+1])
        {
            temp=a[j+1];//swaping element 
            a[j+1]=a[j];
            a[j]=temp;
        }
    }
}
									//printing output of program
for(i= 0; i< n; i++) 
{
    printf("%.2f  ", a[i]);
}
printf("\n\n");
}
int main()
{
char c;
do 
{
 int i,n,j;
float temp=0.0f;
printf("Enter the count of float elements need to be stored:");
scanf ("%d", &n);
float a[n];								//Getting number of elements needed to be stored
for (i =0; i<n; i++)
{
printf("[%d]=",i);
scanf("%f", &a[i]);
}
function(a,n);

printf("\nDo you want to continue (y/Y):");
scanf( " %c", &c);
}while((c == 'y') || (c == 'Y'));					//Condition to iterate the do while loop				

}