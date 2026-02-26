#include <stdio.h>
#include <string.h>

int main()
{
    char orgStr[1000], replacedWith[1000], replaceStr[1000], result[3000] = { 0 };
    printf("Enter the original string: ");
    fgets(orgStr, sizeof(orgStr), stdin);
    orgStr[strlen(orgStr) - 1] = '\0'; // change the new line into null char

    printf("Enter the string to be replaced: ");
    fgets(replaceStr, sizeof(replaceStr), stdin);
    replaceStr[strlen(replaceStr) - 1] = '\0';

    printf("Enter the string to replace with: ");
    fgets(replacedWith, sizeof(replacedWith), stdin);
    replacedWith[strlen(replacedWith) - 1] = '\0';

    // copy prefix then cat replace with str then cat with suffex
    char* matchPos = strstr(orgStr, replaceStr);
    char* currpos = orgStr;
    if (matchPos == NULL)
    {
        printf("%s\n", orgStr);
        return 0;
    };
    int i = 0;
    while (strstr(currpos, replaceStr) != NULL)
    {
        strncat(result, currpos, matchPos - currpos); // matchPos added
        strcat(result, replacedWith); // full 
        currpos = matchPos + strlen(replaceStr);
        matchPos = strstr(currpos, replaceStr);
        i++;
        if (i > 100) break; // K-safe check code just work btw 
    }
    strcat(result, currpos);
    printf("Result: %s\n", result); // suffix
    return 0;
}