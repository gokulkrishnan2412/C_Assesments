#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int matrixTranspose(int **a, int r, int c) 
{
    int i, j, temp;

    for (i = 0; i < r; i++) 
    {
        for (j = i + 1; j < c; j++) 
        {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
   
}
int matrixProduct(int **a,int **b, int r, int c)
{
int i, j, k, mul[10][10];

	// Initializing elements of matrix mult to 0.
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
		{
			mul[i][j] = 0;
		}
	}

	// Multiplying matrix firstMatrix and secondMatrix and storing in array mult.
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
		{
			for(k=0; k<c; k++)
			{
				mul[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	for( i = 0; i< r; i++)
	{
	for(j= 0; j< c ; j++)
	{
	printf("%d", mul[i][j]); 
	}
	}
}

int main() {

    int i, j, rows, cols, **a, **b;

    printf("\nEnter number of rows :");
    scanf("%d", &rows);
    printf("\nEnter number of columns :");
    scanf("%d", &cols);

    // allocate rows, each row is a pointer to int
    a = malloc(rows * sizeof (int *));

    // for each row allocate cols int
    for (i = 0; i < rows; i++) 
    {
        a[i] = malloc(cols * sizeof (int));
    }
  printf("Enter the element of %d x %d matrix:\n ",rows,cols);
    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < cols; j++) 
        {
           
            scanf("%d", &a[i][j]);
        }
    }

    b=matrixTranspose(a, rows, cols);

    printf("\nTranspose of the given Matrix\n");
    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < rows; j++) 
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\nProduct of two matrix:");
    matrixProduct(a,b,rows,cols);
    return 0;
}