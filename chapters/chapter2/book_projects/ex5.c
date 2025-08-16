/*
    Write a program that asks the user to enter a value for x and then displays the value of the following polynomial:
        3x^(5) + 2x^(4) - 5x^(3) - x^(2) + 7x - 6
    Hint: C doesn’t have an exponentiation operator, so you’ll need to multiply x by itself repeatedly in order to compute
    the powers of x. (For example, x * x * x is x cubed.)
*/

#include <stdio.h>

int main()
{
    int input_value, result, x_fifth, x_fourth, x_third, x_second;

    printf("Enter [x] value: ");
    scanf("%d", &input_value);
    x_fifth  = (input_value * input_value * input_value * input_value * input_value);
    x_fourth = (input_value * input_value * input_value * input_value);
    x_third  = (input_value * input_value * input_value);
    x_second = (input_value * input_value);
    result = (3*(x_fifth))+(2*(x_fourth))-(5*(x_third))-(x_second)+(7*(input_value))-(6);
    
    printf("The result for the following equation is: %d \n", result);
    printf("3*(%d)+2*(%d)-5*(%d)-(%d)+7*(%d)-6", x_fifth,x_fourth,x_third,x_second,input_value);
}
