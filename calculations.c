#include <stdio.h>

int multiply(int a, int b)
{
    return a * b;
}

void main()
{
    int a = 5;
    int b = 10;

    int c = multiply(a, b);

    printf("The value of c is: %d", c);
}
