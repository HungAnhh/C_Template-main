#include <stdio.h>

// Enum Namenswahl sollte sehr präzise sein, wenn man denn
// mehrere Enum's benutzen möchte in der Codebase.
enum Drink
{
    DRINK_COLA = 0,
    DRINK_ICETEA = 1,
    DRINK_WATER = 2,
    DRINK_COFFEE = 3
};

enum Caffeine
{
    CAFFEINE_COFFEE = 0,
    CAFFEINE_ENERGY = 1
};


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
    case DRINK_COLA:
    {
        printf("You chosed a  Cola!");
        break;
    }
    case DRINK_ICETEA:
    {
        printf("You chosed a  Icetea!");
        break;
    }
    case DRINK_WATER:
    {
        printf("You chosed a  Water!");
        break;
    }
    case DRINK_COFFEE:
    {
        printf("You chosed a  Coffee!");
        break;
    }
    default:
    {
        printf("You did not enter a valid drink!");
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
