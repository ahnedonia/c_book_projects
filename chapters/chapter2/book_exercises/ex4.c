/*
    Write a progrma that declares several int and float variables without initializing them and then prints their values.
    Is there any pattern to the values? (Usually there isn't)
        -No there isn't: [7447248],[7465136][7433928][0.000000],[nan][0.000000]
*/

#include <stdio.h>

int main(){

    int x,y,z;
    float a,b,c;

    printf("[%d],[%d][%d]");
    printf("[%f],[%f][%f]");

    return 0;
}