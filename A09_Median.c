//Comments 
//Name:Gokula Krishnan
//Date:23-3-2021
//Description:Program to find the median of two  unsorted array
//Input:./median.c
//Enter a size of the array1 :5..........
//Output:The Median is: 7..........

#include<stdio.h>
void swap(int *p,int *q) 				//Swap function
{
   int t;
   
   t=*p; 
   *p=*q; 
   *q=t;
}

void sort(int a[],int n) 				//Sorting function
{ 	
   int i,j,temp;

   for(i = 0;i < n-1;i++) {
      for(j = 0;j < n-i-1;j++) {
         if(a[j] > a[j+1])
            swap(&a[j],&a[j+1]);
      }
   }
}
void sortarray (int arr[], int n)
{
int i, j, min_idx;
 
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n - 1; i++) 
	{
 
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
 
        // Swap the found minimum element
        // with the first element
        swap(&arr[min_idx], &arr[i]);
    
   
}
}
void printArray(int arr[], int size)				//Printfunction to print the sorted array
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 

int main()
{
char c;
do
{
	
	float sum;
    	 printf("Enter the 'n' value for Array A: ");				//Getting na vlue from user
    	int n,i;
    	scanf("%d",&n);
	int arr[n];
	if( n<20)								//If condition to check if n<20
	{
    	
	printf("Enter the elements one by one for Array A:\n");
        for(i=0;i<n;i++)
       {
        scanf("%d",&arr[i]);
        }
	sortarray( arr, n);							//Calling function
	printf("After sorting=");
	printArray(arr, n);
	n = (n+1) / 2 - 1;
	printf("Median of array 1= %d", arr[n]);
	}
	else
	{
	printf("Max array elements exceeded");
	}

   	printf("\nEnter the 'n' value for Array B: ");				//Gettig n2 value from the user
   	int n2;
    	scanf("%d",&n2);
	int arr2[n2];
	if( n2<20)
	{
        
	printf("\nEnter the elements one by one for Array B:");			//Getting array values form the user
     	for(i=0;i<n2;i++)
       	{
        scanf("%d",&arr2[i]);
       	}

	sortarray( arr2 , n2);							//Function call
	printf("After sorting=");
	printArray(arr2 , n2);
	n2 = (n2+1) / 2 - 1;
	printf("\nMedian of array 2= %d", arr2[n2]);
	}
	else
	{
	printf("Max array elements exceeded");
	}

	sum= (arr[n] + arr2[n2]) / 2;
	printf("\nMedian of both arrays= %f ", sum);
	
printf("\nDo you want to continue (y/Y):");
scanf(" %c", &c);
}while ((c == 'y') || (c == 'Y'));			//Condition to iterate the loop or not
return 0;
}