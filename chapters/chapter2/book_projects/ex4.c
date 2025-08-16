/*
    Write a program that asks the user to enter a dollars-and-cents amount, then displays the amount with 5% tax added:

    Enter an amount: 100.00  
    With tax added: $105.00  

*/

#include <stdio.h>

int main(){

    float money_amount;
    printf("Enter an amount: ");
    scanf("%f", &money_amount);
    float result = ((5.0f / 100.0f) * money_amount) + money_amount;

    printf("With tax added: $%.2f", result);

    return 0;
}