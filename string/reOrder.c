#include <stdio.h>
#include <string.h>

#define MAX_CHAR 1000
int main()
{
    char us[MAX_CHAR] = { 0 }, os[MAX_CHAR] = { 0 }, tmp;
    int i = 0;
    printf("Enter the String > ");
    while (1)
    {
        scanf("%c", &us[i]);
        if (us[i] == '\n')           // check for new line
        {
            us[i] = '\0';           // replace with null terminate
            break;
        }
        i++;
        if (i >= MAX_CHAR)
        {
            printf("String is too long\n");
            return -1;
        }
    }
    strcpy(os, us);
    int n = strlen(us);
    int swapped = 0;
    for (int i = 0; i < n-1; i++)
    {
        swapped = 0;
        for (int j = 0; j < n-i-1; j++)
        {
            if (os[j] > os[j+1]) // if left side > right side swap it 
            {
                tmp = os[j];
                os[j] = os[j+1];
                os[j+1] = tmp;
                swapped = 1;
            }
        }
        if (swapped == 0)
            break;
    }
    printf("Orginal String > '%s'\n", us);
    printf("ordered String(Case Sensitive) > '%s'\n", os);
    return 0;
}