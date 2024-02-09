/*Comments 
Name:Gokula Krishnan
Date:3-4-2021
Description:Read int i, Read 0 ≤ a ≤ b ≤ 31. Read an int n, put the (b-a+1) lsb’s of n into
i[b:a]
Input:./15bits_ops.c
Enter the value of 'n' : 11
Enter the value of 'I'
: 174
Enter the value of 'a' : 3
Enter the value of 'b' : 5
Output:The binary form of 'n' : 00000000 00000000 00000000 00001011
The binary form of 'I' : 00000000 00000000 00000000 10101110
The new binary form of 'I'
: 00000000 00000000 00000000 10011110
Want to continue [ yY / nN ] : n*/

#include<stdio.h>

 int replace_nbits_from_pos(int , int , int , int , int);  // function prototype

 int main()
 {
     char ch;
     do
     {
     int n,i,a,b,nbits,k,num,replace_bits;              // Initialization of variables
     printf("Enter the value of 'n' : ");  // read value of n from user
     scanf("%d" , &n);
     printf("Enter the value of 'i' : ");  // read value of i from user
     scanf("%d" , &i);
     printf("Enter the value of 'a' : ");  // read value of a from user
     scanf("%d" , &a);
     printf("Enter the value of 'b' : ");  // read value of b from user
     scanf("%d" , &b);

     if ( a >= 0 && a <= 31 )            // check whether the condition is satisfied
     {
         if ( b >= a && b <= 31 )    // check whether value of b is greater than a and less than or equal to 31
         {  
             printf("The binary form of 'n' : ");             
             for ( k = 31 ; k >= 0 ; k--)  // for loop iteration to print binary representation
             {
                n >> k & 1 ? printf("1 ") : printf("0 ");  // logic to print binary
             }
             printf("\n");

             printf("The binary form of 'i' : ");
             for ( k = 31 ; k >= 0 ; k--)
             {
                 i >> k & 1 ? printf("1 ") : printf("0 ");
             }                 
             printf("\n");
            
             nbits = b - a + 1;                    // expression to find nbits value

             printf("Updated form of 'i'   : ");
             replace_nbits_from_pos( nbits , b , n , i , a );  // function call
             printf("\n");
         }
         else 
         {
             printf ("Entered value for b should be >= a and <= 31");  // print if value of b is less than or greater than limit
         }
     }
     else
     {
         printf("Entered value for a should be >= 0 and <= 31");  // print if value of a is less than or greater than limit
     }
     printf("\nWant to continue(yY / nN): ");
     scanf(" %c" , &ch);
     }while ( ch == 'y' || ch == 'Y' );
     return 0;
 }
     
             
 int replace_nbits_from_pos(int nbits , int b , int n , int i , int a )      // function definition
 {
     int j ,clear_bits, lsb_bits ,replace_bits, pos = 1, range;             
  
     lsb_bits = ((( 1 << nbits) - 1 ) & ( n >> (pos - 1)));     // logic to fetch nbits from the nth value 
       
     range = ((( 1 << nbits ) - 1 ) << (( b - nbits) + 1 )); // logic to clear the bits   
     clear_bits = i & ~range;                               // clearing of bits    

     for ( j = 31 ; j >= 0 ; j--)
     { 
        replace_bits = clear_bits | ( lsb_bits << a );    // logic to replacing bits
        replace_bits >> j & 1 ? printf("1 ") : printf("0 ");
    } 
    printf("\n"); 
    return replace_bits;
 }