#include <stdio.h>

int main()
{
	float w=0.0f, b=0.0f;
	float area;
	printf("Enter the width and breadth of rectangle: ");
	scanf("%f %f", &w, &b);
	area = w*b;
	printf("Area of Rectangle is %.2f units\n", area);
	return 0;
}
