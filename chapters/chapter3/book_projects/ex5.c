// Write a program that asks the user to enter the numbers from 1 to 16 (in any order) and then displays the numbers in a 4 by 4 arrangement, 
// followed by the sums of the rows, columns, and diagonals: 

// Enter the numbers from 1 to 16 in any order: 16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1

// 16 03 02 13 
// 05 10 11 08 
// 09 06 07 12 
// 04 15 14 01 

// Row sums: 34 34 34 34 
// Column sums: 34 34 34 34 
// Diagonal sums: 34 34

#include <stdio.h>

int main(){

    int c1r1,c2r1,c3r1,c4r1,c1r2,c2r2,c3r2,c4r2,c1r3,c2r3,c3r3,c4r3,c1r4,c2r4,c3r4,c4r4;

    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &c1r1, &c2r1, &c3r1, &c4r1, &c1r2, &c2r2, &c3r2, &c4r2, &c1r3, &c2r3, &c3r3, &c4r3, &c1r4, &c2r4, &c3r4, &c4r4);

    printf("Row sums: %d %d %d %d", (c1r1+c2r1+c3r1+c4r1), (c1r2+c2r2+c3r2+c4r2), (c1r3+c2r3+c3r3+c4r3), (c1r4+c2r4+c3r4+c4r4));

    // and so on, no for cycles or other stuff introduced yet so its too monotone and hard to do



    return 0;
}