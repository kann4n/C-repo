#include <stdio.h>
#include <string.h>

#define MAX_CHAR 10000

int main()
{
    int charLen, wordLen, capsLen, smallLen;
    charLen = wordLen = capsLen = smallLen = 0; // start from 0

    char s[MAX_CHAR] = { 0 }; // init with null
    printf("Enter the string > ");
    // get input from user
    while (1)
    {
        scanf("%c", &s[charLen]);
        if (s[charLen] == '\n')           // check for new line
        {
            s[charLen] = '\0';           // replace with null terminate
            break;
        }
        else if (s[charLen] == ' ') wordLen++; // without using string functions btw
        else if (s[charLen] >= 'A' && s[charLen] <= 'Z') capsLen++;
        else if (s[charLen] >= 'a' && s[charLen] <= 'z') smallLen++;
        charLen++;
        if (charLen >= MAX_CHAR)
        {
            printf("String is too long\n");
            return -1;
        }
    }


    printf("The given string has %d chars, %d words, %d caps, %d small charecters\n", charLen, wordLen, capsLen, smallLen);
    return 0;
}