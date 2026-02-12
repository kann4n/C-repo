#include<stdio.h>

int main()
{
    int x, y;
    printf("enter x value ");
    scanf("%d", &x);
    if (x > 0)
        y = 1;
    else if (x == 0)
        y = 0;
    else
        y = -1;
    
    /*
     * using if only 
    if (x > 0)
        y = 1;
    if (x == 0)
        y = 0;
    if (x < 0)
        y = -1;
    */

    /*
     * using ?: only
    y = (x > 0) ? 1 : 0;
    y = (x < 0)? -1 : 0;
    */

    printf("y = %d", y);
    return 0;
}
