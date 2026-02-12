#include<stdio.h>

int main()
{
    int math, phy, chem;
    printf("Enter marks of maths physics chemistry ");
    scanf("%d %d %d", &math, &phy, &chem);
    int total = math + phy + chem;
    
    if (total >= 200 && math >= 60 && phy >= 50 && chem >= 40)
    {
        printf("You are ELIGIBLE to apply for this course\n");
    }
    else if (math + phy >= 150)
    {
        printf("You are ELIGIBLE to apply for this course\n");
    }
    else
    {    
        printf("You are NOT-ELIGIBLE to apply for this course\n");
    }
    return 0;
}
