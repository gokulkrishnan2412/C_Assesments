//Name		:Gokula Krishnan
//Date		:10/5/2021
//Description	:Program to implement calc_mean for all data types
//Input 	:./44_calc_mean.c
//Output	:1.int
		//2.short.....
		
#include <stdio.h>
#include <stdlib.h>

#define MAXLEN 150
#define MAXVAL 20000000
#define MINVAL -20000000

union Storage
{
    float floatStore[MAXLEN];
    int intStore[MAXLEN];
    short shortStore[MAXLEN];
    double doubleStore[MAXLEN];
};

float calc_int_mean(void* aptr, int no_of_elements);		//Recursive functions
float calc_short_mean(void *aptr, int no_of_elements);
float calc_float_mean(void *aptr, int no_of_elements);
float calc_double_mean(void *aptr, int no_of_elements);


float (* calc_mean[4])(void *, int) = {calc_int_mean,calc_short_mean, calc_float_mean, calc_double_mean};

int main(int argc, char **argv)
{
char c;
do
{
    int len;
    char *types[6] = {"int","Short", "Float", "Double"};
    int choice, i;
    union Storage store;					//Definining an object to call the union
    
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
    
   
    printf("1. Int \n2. Short \n3. Float \n4. Double \n");	//Getting thhe data type from user
    printf("Choice: ");
    scanf("%d", &choice);
    
    printf("Enter the elements:	\n");
    switch (choice) 
    {
        case 1:
            for (i = 0; i < len; i++)				//Getting elements from the user
            {
                scanf("%d", &store.intStore[i]);
                
               
                if (((store.intStore[i]) < MINVAL) || ((store.intStore[i]) > MAXVAL))
                {
                    printf("Error: Element value is Out of range. Retry\n");
                    return 1;
                }
            }
            // Pass them to calc mean function
            printf("The mean value: %f\n", calc_mean[choice - 1](store.intStore, len));
            
            break;
        case 2:
        	//Getting elemenst from the user
            for (i = 0; i < len; i++)
            {
                scanf("%hd", &store.shortStore[i]);
                
                if (((store.intStore[i]) < MINVAL) || ((store.shortStore[i]) > MAXVAL))
                {
                    printf("Error: Element value is Out of range. Retry\n");
                    return 1;
                }
            }
            
            //Passing the elements to the function
            printf("The mean value: %f\n", calc_mean[choice - 1](store.shortStore, len));
            
            break;
            
        case 3:
           	//Getting elements from the user
            for (i = 0; i < len; i++)
            {
                scanf("%f", &store.floatStore[i]);
                
                
                if (((store.floatStore[i]) < MINVAL) || ((store.floatStore[i]) > MAXVAL))
                {
                    printf("Error: Element value is Out of range. Retry\n");
                    return 1;
                }
            }
            
            //Passing them as arguments to function
            printf("The mean value: %f\n", calc_mean[choice - 1](store.floatStore, len));
            break;

        case 4:
            //Getting elemts from the user
            for (i = 0; i < len; i++)
            {
                scanf("%lf", &store.doubleStore[i]);
                
                
                if (((store.doubleStore[i]) < MINVAL) || ((store.doubleStore[i]) > MAXVAL))
                {
                    printf("Error: Element value is Out of range. Retry\n");
                    return 1;
                }
            }
            
            //Passing the vales as arguments to functions
            printf("The mean value: %f\n", calc_mean[choice - 1](store.doubleStore, len));
            break;
            
        default:
            printf("Invalid option\n");
            break;
           }
printf("\nDo you want to continue (y/Y):");
scanf( " %c", &c);
}while((c == 'y') || (c == 'Y'));				//Condition to iterate the do while loop				
}

float calc_int_mean(void* aptr, int no_of_elements)
{
    float mean, sum;
    int i;
   
    sum = 0;
    
    
    for (i = 0; i < no_of_elements; i++)		//For loop to find the mean
    {
        sum += *(((int*)aptr) + i);
    }
    
    mean = sum / no_of_elements;
    
    return mean;
}
float calc_short_mean(void *aptr, int no_of_elements)
{
float mean, sum;
int i;
sum=0;

    for (i = 0; i < no_of_elements; i++)		//For loop to find the mean
    {
        sum += *(((short*)aptr) + i);
    }
    
    mean = sum / no_of_elements;
    
    return mean;
}

float calc_float_mean(void *aptr, int no_of_elements)
{
    float mean, sum;
    int i;

    sum = 0;
    
    for (i = 0; i < no_of_elements; i++)			//For loop to find the mean
    {
        sum += *(((float*)aptr) + i);
    }
    
    mean = sum / no_of_elements;
    
    return mean;
}

float calc_double_mean(void *aptr, int no_of_elements)
{
    float mean, sum;
    int i;
    
    sum = 0;
    
    for (i = 0; i < no_of_elements; i++)			//For loop to find the mean
    {
        sum += *(((double*)aptr) + i);
    }
    
    mean = sum / no_of_elements;
    
    return mean;
}