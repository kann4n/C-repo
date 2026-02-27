#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

double find_distance(double x1, double y1, double x2, double y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double find_perimeter(double diameter)
{
    return PI * diameter;
}

double find_area(double diameter)
{
    double r = diameter / 2;
    return PI * r * r;
}

int main()
{
    double x1, y1, x2, y2;
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