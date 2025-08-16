/*
    Write a program that asks the user to enter a U.S. dollar amount 
    and then shows how to pay that amount using the smallest number of $20, $10, $5, and $1 bills:

    Enter a dollar amount: 93  
    $20 bills: 4  
    $10 bills: 1  
    $5 bills: 0  
    $1 bills: 3  
*/

#include <stdio.h>

int main()
{
    int amount, rest, bills_20, bills_10, bills_5, bills_1;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    bills_20 = amount / 20;
    rest = amount % 20;

    bills_10 = rest / 10;
    rest = amount % 10;

    bills_5 = rest / 5;
    rest = amount % 5;

    bills_1 = rest / 1;
    
    printf("$20 bills: %d\n", bills_20);
    printf("$10 bills: %d\n", bills_10);
    printf("$5 bills: %d\n", bills_5);
    printf("$1 bills: %d", bills_1);

}
