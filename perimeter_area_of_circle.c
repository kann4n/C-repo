#include<stdio.h>

int main()
{
    float r = 0, area = 0 , peri = 0;
    const float PI = 3.14f;
    
    printf("Enter the radius of circle ");
    scanf("%f", &r);
    
    area = PI*r*r;
    peri = 2*PI*r;
    printf("\nArea of circle is %.2f", area);
    printf("\nPerimeter of circle is %.2f", peri);
    return 0;
}
