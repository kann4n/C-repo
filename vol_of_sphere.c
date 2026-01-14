#include<stdio.h>

int main()
{
    float r=0, vol=0;
    const float PI = 3.14f;
    printf("Enter the radius of sphere ");
    scanf("%f", &r);
    vol = (4.0/3.0)*PI*r*r*r;
    printf("volume of sphere is %.2f", vol);
    return 0;
}
