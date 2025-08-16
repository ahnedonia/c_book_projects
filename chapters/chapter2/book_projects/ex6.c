/*
    Modify the program of Programming Project 5 so that the polynomial is evaluated using the following formula:
        (((( 3x+2 ) x-5 ) x-1 ) x+7 ) x-6
    Note: The modified program performs fewer multiplications. This technique is known as Horner’s Rule.
*/

#include <stdio.h>

int main()
{
    int input_value,result;

    printf("Enter [x] value: ");
    scanf("%d", &input_value);
    result = ((((3 * input_value + 2) * input_value - 5) * input_value - 1) * input_value + 7) * input_value - 6;
    
    printf("The result for the following equation is: %d \n", result);
}
