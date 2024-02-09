/*Comments 
Name:Gokula Krishnan
Date:3-4-2021
Description:Read an int, & a no. n. Circular right & left shift the int by n.
Input:./16bits_ops.c
Output: Enter num: 12
Enter n : 3
Possible operations
1. circular right shift2. circular left shift
Enter your choice: 1
The binary form of number : 00000000 00000000 00000000 00001100
After circular right shifting by 3
The bianry form of number : 10000000 00000000 00000000 00000001
Want to continue [ yY / nN ] : y*/

#include<stdio.h> 
    
 int circular_right_shift(int , int);    // Function prototype
 int circular_left_shift(int , int);

 int main()
 {
     char ch;            // read input from user
     do
     {
      int num , n ,i, k , choice, nbits , new_bits;  // Initialization of variables
      printf("Enter num: ");                         // read num from the user      
      scanf("%d" , &num);
      printf("Enter n: ");
      scanf("%d" , &n);                              // read n from the user
      printf("Possible Operations");
      printf("\n1.Circular right shift\n2.Circular left shift");       // print the possible operation to perfrom based on user input 
      printf("\nEnter your choice: ");
      scanf("%d" , &choice);                        // read choice from the user
     
     if ( n <= 31 )                                 // check the condition
     {
         printf("The binary form of number: ");               
         for ( i = 31 ; i >= 0 ; i--)                 // for loop iteration to print binary representation
         {
             k = num >> i;                            // right shift 
             if ( k & 1)
             {
                 printf("1 ");
             }
             else
             {
                 printf("0 ");
             }
         }
         switch (choice)               // switch statement to perform different function based on user choice
         {
           case 1:
               printf("\nAfter circular right shifting by %d " , n); // print statement                               
               printf("\nThe binary form of number: ");            
               circular_right_shift(num , n);            // function call 
               break;
           case 2:
               printf("\nAfter circular left shifting by %d " , n);                                     
               printf("\nThe binary form of number: ");            
               circular_left_shift(num , n);        // function call
               break;
           default:
               printf("Invalid Input\n");   // print if user enter invalid choice
               break;
         }
     }
     else
     {
         printf("Entered value for 'n' is out of range\n");  // print if entered value of n out of range 
     }
      printf("\nWant to continue(yY / nN): ");     // read the input from user for continue looping operation
      scanf(" %c" , &ch);
     }while( ch == 'y' || ch == 'Y');          // check the condition
     return 0;
 }

 int circular_right_shift(int num , int n)   // function definition
 {
    int nbits , j , new_bits;               // initalization  
     for ( j = 31 ; j >=  0; j-- )
     {
         nbits = (num >> n) | (num << (32 - n));  // logic to perform right shift 
         new_bits = nbits >> j;             // print binary value    
         if ( new_bits & 1 )
         {
             printf("1 ");
         }
         else
         {
             printf("0 ");
         }
     }             
    return new_bits;                           
 }

 int circular_left_shift(int num , int n)  // function definition
 {
    int nbits , j , new_bits; 
    for ( j = 31 ; j >= 0 ; j--)
    {
      nbits = (num << n) | (num >> ( 32 - n)); // logic to perform left shift
      new_bits = nbits >> j;
      if ( new_bits & 1 )                // check condition   
      {
          printf("1 ");
      }
      else
      {
          printf("0 ");
      }
    }         
    return new_bits;
 }   
