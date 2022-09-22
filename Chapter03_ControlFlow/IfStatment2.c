#include <stdio.h>

int main()
{
    int age_jan = 26;
    int age_marc = 26;
    int age_sarah = 30;

    // &&: Conjunction, logical AND operator
    // ||: Disjunction, logical OR operator
    // Ausrufzeichen: Negration, logical NOT operator

    if ((age_jan < age_marc) && (age_jan < age_sarah))
    {
        printf("Jan is the youngest\n");
    }
    else if ((age_marc < age_jan) && (age_marc < age_sarah))
    {
        printf("Marc is the youngest\n");
    }
    else if ((age_sarah < age_marc) && (age_sarah < age_jan))
    {
        printf("Sarah is the youngest\n");
    }
    else
    {
        printf("Two persons have the samen age!!\n");
    }


    return 0;
}
