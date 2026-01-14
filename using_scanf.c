#include<stdio.h>

int main()
{
    int a, b, c;
    float x;

    printf("Enter a, b, c separated by space ");
    scanf("%d %d %d", &a, &b, &c);
    if (b == c)
    {
        printf("zero division errr\n");
        return -1;
    }
    x = (float) a / (b-c);
    printf("\nx = %.2f", x);
    return 0;
}
