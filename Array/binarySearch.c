#include <stdio.h>

int main()
{
    int n, target, found = 0;
    printf("Enter the number of elements > ");
    scanf("%d", &n);
    int sorttedArr[n];
    printf("Enter the elements in Acending order below \n");
    for (int i = 0; i < n; i++)
    {
        printf("\tArray[%02d] = ", i+1);
        scanf("%d", &sorttedArr[i]);
        if (i > 0)
        {
            if (sorttedArr[i] < sorttedArr[i-1])
            {
                printf("Invalid input Try again \n");
                i = i - 1;
            }
        }
    }
    printf("Enter the element to search > ");
    scanf("%d", &target);
    int l = 0, h = n-1, c = 0;
    while (l <= h)
    {
        c++;
        int mid = l + (h - l)/2;
        printf("checking Array[%d]\n", mid+1);
        if (target == sorttedArr[mid])
        {
            printf("%d at Array[%d] ", target, mid);
            found = 1;
            break;
        }
        else if (target < sorttedArr[mid])
        {
            h = mid - 1;
        }
        else if (target > sorttedArr[mid])
        {
            l = mid + 1;
        }
    }
    if (!found)
        printf("Not found ");

    printf("in %d tries\n", c);
    return 0;
}