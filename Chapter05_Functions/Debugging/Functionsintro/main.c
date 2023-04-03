#include <stdio.h>

void printEvenOrOdd(int number)
{
    if (number % 2 == 0)
    {
        printf("A is even!\n");
    }
    else
    {
        printf("A is odd!\n");
    }
}

int main()
{
    int a = 2;
    int b = 3;
    int c = 4;

    if (a % 2 == 0)
    {
        printf("A is even!\n");
    }
    if (b % 2 == 0)
    {
        printf("B is even!\n");
    }
    if (c % 2 == 0)
    {
        printf("C is even!\n");
    }

    return 0;
}
