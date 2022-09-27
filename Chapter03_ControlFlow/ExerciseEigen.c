#include <stdio.h>


int main()
{
    unsigned int Number = 0;
    unsigned int Number2 = 3;

    printf("Please enter a valid unsigned integer: ");
    scanf("%u", &Number);

    unsigned int division = Number / Number2;
    unsigned int remainder = Number % Number2;

    if (remainder < 1)
    {
        printf("The number you entered is div. by 3!\n");
        printf("The division of the operation is : %u\n", division);
    }
    else
    {
        printf("The number you entered is not div. by 3!\n");
        printf("The remainder of the operation is : %u\n", remainder);
    }


    return 0;
}
