// Write a program that formats product information entered by the user. 
// A session with the program should look like this: 
// Enter item number: 583 
// Enter unit price: 13.5 
// Enter purchase date (mm/dd/yyyy): 10/24/2010 
// Item Unit Purchase Price Date 583 $ 13.50 10/24/2010 
// The item number and date should be left justified; 
// the unit price should be right justified. 
// Allow dollar amounts up to $9999.99. Hint: Use tabs to line up the columns. 

#include <stdio.h>

int main(){

    int item_number, date_day, date_month, date_year;
    float unit_price;

    printf("Enter item number: ");
    scanf("%d", &item_number);

    printf("Enter unit price: ");
    scanf("%f", &unit_price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d%d%d", &date_day, &date_month, &date_year);

    printf("\nItem_Unit  Purchase_Price  Date\n%d  $%6.2f  %d  %d/%d/%d",item_number,unit_price,date_day,date_month,date_year);
    return 0;

}