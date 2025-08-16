

/*Condense the dweight.c program by:
    (1) replacing the assignments to height,length. and width with initializers
    (2) removing the weight variable, instead calculating (volume +165) / 166 within the last printf. */

/* Computes the dimensional weight of a box from input provided by the user */

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