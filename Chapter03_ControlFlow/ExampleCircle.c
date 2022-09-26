#include <stdio.h>

#define PI 3.14159f

int main()
{
    // Circle Example
    // 1.) Read the values for r from the user,
    //     check if the input is correct (non-negative length)
    // 2.) Compute the perimeter and area of the circle
    // 3.) Print the computed values to the console

    float r = 0.00f;


    printf("Please enter a value for r: ");
    scanf("%f", &r);

    if (r > 0)
    {
        float perimeter = 2 * r * PI;
        float area = PI * r * r;

        printf("The perimeter is: %f\n", perimeter);
        printf("The area is: %f\n", area);
    }
    else
    {
        printf("We don't accept negativ numbers");
    }


    return 0;
}
