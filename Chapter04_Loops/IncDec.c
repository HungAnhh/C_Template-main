#include <stdio.h>


int main()
{
    int a = 1;

    //Increment: a = a + 1 <=> a += 1 <=> a++
    //Increment: a = a - 1 <=> a -= 1 <=> a--

    printf("%d\n", a);
    a++;
    //++a;
    printf("%d\n", a);
    a--;
    //--a;
    printf("%d\n", a);


    return 0;
}
