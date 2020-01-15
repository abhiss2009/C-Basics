#include "stdio.h"

void swap(int* xp, int* yp)
{
    if (xp == yp) // Check if the two addresses are same
        return;
    *xp = *xp + *yp;
    *yp = *xp - *yp;
    *xp = *xp - *yp;
    
}
int main()
{
    int x = 10;
    int y = 30;
    swap(&x, &y);
    printf("%d\n", x);
    return 0;
}
