#include <stdio.h>

int find_largest(int, int, int);
int find_smallest(int, int, int);
float avg(int, int, int);


int main()
{
    int n1, n2, n3, V;
    printf("Enter the marks you obtained in 3 subjects(out of 100)\ninput > ");
    scanf("%d %d %d", &n1, &n2, &n3);
    int largest = find_largest(n1, n2, n3);
    int smallest = find_smallest(n1, n2, n3);
    float average = avg(n1, n2, n3);
    // set v = 1 if avg > 50 else set 0
    V = (average >= 50) ? 1 : 0; // can be used for pass checking
    printf("your highest mark is %d\n", largest);
    printf("your lowest mark is %d\n", smallest);
    printf("your avg mark is %.1f\n", average);
    return 0;
}

int find_largest(int n1, int n2, int n3)
{
    if (n1 > n2)
    {
        if (n1 > n3)    return n1;
        else    return n3;
    }
    else
    {
        if (n2 > n3)    return n2;
        else    return n3;
    }
}

int find_smallest(int n1, int n2, int n3)
{
    if (n1 < n2)
    {
        if (n1 < n3)    return n1;
        else    return n3;
    }
    else
    {
        if (n2 < n3)    return n2;
        else    return n3;
    }
}

float avg(int n1, int n2, int n3)
{
    return (n1 + n2 + n3) / 3.0f;
}
