#include <stdio.h>
#include <string.h>
#include <ctype.h> // to make case insensitive

#define CaseSensitive 0

int main()
{
    char s[100] = { 0 };
    printf("Enter the string > ");
    fgets(s, sizeof(s), stdin);
    int len = strlen(s) - 1;
    int is_pali = 1;

    if (len <= 0)
    {
        printf("invaild input\n");
        return -1;
    }
    else
    {
        s[len] = '\0';
    }
    printf("Case Sensitive = %s\n", CaseSensitive ? "true" : "false");
    for (int i = 0; i < len; i++)
    {
        if (i >= len - i - 1) break;
        printf("checking %c == %c\n", s[i], s[len - i - 1]);
        if (CaseSensitive)
        {
            if (s[i] != s[len - i - 1])
            {
                printf("Not Palindrome\n");
                is_pali = 0;
                break;
            }
        }
        else
        {
            if (tolower(s[i]) != tolower(s[len - i - 1]))
            {
                printf("not palindrome\n");
                is_pali = 0;
                break;
            }
        }
    }
    if (is_pali)    printf("string is palindrome\n");
    return 0;
}