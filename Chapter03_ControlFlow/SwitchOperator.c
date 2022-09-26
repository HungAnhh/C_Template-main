#include <stdio.h>


int main()
{
    int cola = 0;
    int icetea = 1;
    int water = 2;
    int coffee = 3;

    int selection;
    printf("Please enter a valid drink: ");
    scanf("%d", &selection);

    switch (selection)
    {
    case 0:
    {
        printf("You chosed a  Cola!");
        break;
    }
    case 1:
    {
        printf("You chosed a  Icetea!");
        break;
    }
    case 2:
    {
        printf("You chosed a  Water!");
        break;
    }
    case 3:
    {
        printf("You chosed a  Coffee!");
        break;
    }
    }


    // if (selection == cola)
    // {
    //     printf("You chosed a Cola!");
    // }
    // else if (selection == icetea)
    // {
    //     printf("You chosed an Icetea!");
    // }
    // else if (selection == water)
    // {
    //     printf("You chosed an water!");
    // }
    // else if (selection == coffee)
    // {
    //     printf("You chosed an coffee!");
    // }

    return 0;
}
