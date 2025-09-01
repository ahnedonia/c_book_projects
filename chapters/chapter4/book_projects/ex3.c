// Rewrite the program in Programming Project 2 so that it prints the reversal of a three-digit number 
// without using arithmetic to split the number into digits. Hint: See the upc.c pro-gram of Section 4.1.


#include <stdio.h>

int main(){

    int digit_one, digit_two, digit_three;

    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &digit_one, &digit_two, &digit_three);

    printf("The reversal is: %d%d%d", digit_three, digit_two, digit_one);


    return 0;
}