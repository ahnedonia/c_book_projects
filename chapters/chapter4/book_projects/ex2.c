// 2. Extend the program in Programming Project 1 to handle three-digit numbers

#include <stdio.h>

int main(){

    int number, digit_one, digit_two, digit_three;

    printf("Enter a two-digit number: ");
    scanf("%d", &number);
    digit_three = number % 10;
    digit_two = (number % 100)/10;
        

    printf("The reversal is: %d%d%d", digit_three, digit_two, digit_one);


    return 0;
}