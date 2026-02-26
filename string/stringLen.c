#include <stdio.h>
#include <string.h>

#define MAX_CHAR 10000

int main()
{
    char string[MAX_CHAR] = {0};            // init with null
    int i = 0;                          // start with 0
    printf("Enter the string > ");
    while(1)
    {
        scanf("%c", &string[i]);
        if(string[i] == '\n')           // check for new line
        {
            string[i] = '\0';           // replace with null terminate
            break;
        }
        i++;
        if (i >= MAX_CHAR)
        {
            printf("String is too long\n");
            return -1;
        }
    }
    int strLen = strlen(string);        // since last char is \n
    printf("Length of string('%s') is %d\n", string, strLen);
    return 0;
}