#include <stdio.h>
#include <math.h>

#define PI 3.141
#define square(x) ((x) * (x))

double find_distance(double x1, double y1, double x2, double y2)
{
    return sqrt(square(x2 - x1) + square(y2 - y1));
}

double find_perimeter(double diameter)
{
    return PI * diameter;
}

double find_area(double diameter)
{
    double r = diameter / 2;
    return PI * square(r);
}

int main()
{
    double x1, y1, x2, y2;
    // assuming both points in circle and maximum distance possible.
    printf("Point 1\n");
    printf("\tEnter the x and y(seperated by space) > ");
    scanf("%lf %lf", &x1, &y1);

    printf("Point 2\n");
    printf("\tEnter the x and y(seperated by space) > ");
    scanf("%lf %lf", &x2, &y2);

    double diameter = find_distance(x1, y1, x2, y2);
    double perimeter = find_perimeter(diameter);
    double area = find_area(diameter);

    printf("Diameter  = %lf\n", diameter);
    printf("Perimeter = %lf\n", perimeter);
    printf("Area      = %lf\n", area);
    return 0;
}