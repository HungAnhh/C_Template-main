#include <stdio.h>


int main()
{
    float a = 5.0;
    float b = 2.0;
    float c;

    // Addition
    c += a;
    printf("%f\n", c);
    // Subtraction
    c -= a;
    printf("%f\n", c);

    // Multiplication
    c *= a;
    printf("%f\n", c);

    // Division
    c /= a;
    printf("%f\n", c);

    // an example to raise b +1
    b = b + 1;
    printf("%f\n", b);

    // shorter version for the example
    b += 1;
    printf("%f\n", b);

    // This version is like the others but more shorter
    // b = b + 1; <=> b += 1; <=> b++
    b++;


    return 0;
}
