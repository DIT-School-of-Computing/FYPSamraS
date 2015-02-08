#include <stdio.h>

// Stephen Samra - C11537047
// Assignment 1: "Probably the most complex system in the known universe"

// A function that takes two numbers and returns the product
int multiply(int a, int b)
{
    return a * b;
}

void main()
{
    // Two numbers necessary for this program to function
    int a = 5;
    int b = 10;

    // Where the magic happens
    int c = multiply(a, b);

    // Inform the user of said magic
    printf("The value of c is: %d", c);
}
