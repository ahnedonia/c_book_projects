/*
Ex 5:
Which of the following are not legal C identifiers?

    (a) 100_bottles  -Because identifiers can';t start with numbers
(b) _100_bottles  
(c) one_hundred_bottles  
(d) bottles_by_the_hundred_


Ex 6:
Why is it not a good idea for an identifier to contain more than one adjacent underscore (as in current__balance, for example)?
    -Because it may interfere with the compiler and it's libraries dependencies


Ex 7:
Which of the following are keywords in C?

    (a) for  
(b) If      -"if"
(c) main    -"just a word"
(d) printf  -"library function"
    (e) while


Ex 8:
How many tokens are there in the following statement?  
   answer = ( 3 * q - p * p ) / 3 ;
        -Every single symbol/identifier/operator etc is a token ({*- etc.

9. Insert spaces between the tokens in Exercise 8 to make the statement easier to read.

10. In the `dweight.c` program (Section 2.4), which spaces are essential?

#include <stdio.h>

int main(void)
{
    int height, length, width, volume, weight;
    height = length = 5;
    width = 1;
    volume = height * length * width;

    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight = (volume + 165) / 166);
    return 0;
}
*/