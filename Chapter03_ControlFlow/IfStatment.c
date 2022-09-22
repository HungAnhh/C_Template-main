#include <stdio.h>

int main()
{
    int age_jan = 26;
    int age_marc = 28;

    if (age_jan < age_marc)
    {
        printf("Jan is younger than Marc !!\n");
    }
    else if (age_jan > age_marc)
    {
        printf("Jan is older than Marc !!\n");
    }
    else
    {
        printf(" Jan and Marc have the same age !!\n");
    }


    return 0;
}
