//1. Write a program that accepts a date from the user in the form mmdd/yyyy and then displays it in the form yyyymmdd:
//Enter a date (mm/dd/yyyy): 2/17/2011 You entered the date 20110217

#include <stdio.h>

int main(){

    int day, month, year;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d%d%d", &day, &month, &year);

    printf("You entered the date: %d/%d/%d", day, month, year);
    return 0;

}