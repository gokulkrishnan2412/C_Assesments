/*Comments 
Name:Gokula Krishnan
Date:10-4-2021
Description:Program to demote the type of given float number to integer using bitwise
operators and bitfields.
Input:./29demoted_int.c
Output: Enter any float numer : 23.76
Demoted value is 23.000000 */


#include<stdio.h>
#include<string.h>
float int2float(int value)
{
    // handles all values from [-2^24...2^24]
    // outside this range only some integers may be represented exactly
    // this method will use truncation 'rounding mode' during conversion

    // we can safely reinterpret it as 0.0
    if (value == 0) return 0.0;

    if (value == (1U<<31)) // ie -2^31
    {
        // -(-2^31) = -2^31 so we'll not be able to handle it below - use const
        // value = 0xCF000000;
        return (float *int2float);  // *((float*)&value); is undefined behaviour
    }

    int sign = 0;

    // handle negative values
    if (value < 0)
    {
        sign = 1U << 31;
        value = -value;
    }

    // although right shift of signed is undefined - all compilers (that I know) do
    // arithmetic shift (copies sign into MSB) is what I prefer here
    // hence using unsigned abs_value_copy for shift
    unsigned int abs_value_copy = value;

    // find leading one
    int bit_num = 31;
    int shift_count = 0;

    for(; bit_num > 0; bit_num--)
    {
        if (abs_value_copy & (1U<<bit_num))
        {
            if (bit_num >= 23)
            {
                // need to shift right
                shift_count = bit_num - 23;
                abs_value_copy >>= shift_count;
            }
            else
            {
                // need to shift left
                shift_count = 23 - bit_num;
                abs_value_copy <<= shift_count;
            }
            break;
        }
    }

    // exponent is biased by 127
    int exp = bit_num + 127;

    // clear leading 1 (bit #23) (it will implicitly be there but not stored)
    int coeff = abs_value_copy & ~(1<<23);

    // move exp to the right place
    exp <<= 23;

    union
    {
        int rint;
        float rfloat;
    }ret = { sign | exp | coeff };

    return ret.rfloat;
}

int main()
{
char c;
do
{

int result;
float n;
printf("Enter any float number: ");
scanf("%f", &n);
result= int2float(n);
printf("Demoted value is : %d", result);
printf("\nDo you want to continue (y/Y):");
scanf( " %c", &c);
}while((c == 'y') || (c == 'Y'));				//Condition to iterate the do while loop				

}