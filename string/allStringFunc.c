/*
 * Author: Kannan
 * Description: Program to showcase all/some the string functions
 *              Like strlen(), strcpy(), strcmp(), strcat() 
 * Date: 25/02/2026
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "No its hi how are you";
    printf("Length of string('%s') is %d\n\n", s1, strlen(s1)); // using strlen to get len of str
    
    char s2[100];
    strcpy(s2, s1); // using strcpy to copy str s1 into s2
    printf("Copied string s1('%s') into s2('%s')\n\n", s1, s2);

    printf("if string s1 & s2 is same it will print Same Same else Not Same\n");
    if (strcmp(s1, s2) == 0) // using strcmp to compare str s1 & s2
        printf("Same Same\n\n");
    else
        printf("Not Same\n\n");

    char s3[200] = "How high are you ";
    strcat(s3, s1); // using strcat to concat str s1 into s3
    printf("Concatenated string s3('%s')\n\n", s3);

    /*                        extra                     */
    /* strchr(), strstr(), sprintf()                    */

    // search for char '@' in string
    char *pchar = strchr(s1, '@');
    if (pchar == NULL)
        printf("character @ not found\n\n");
    else
        printf("Character @ found at position %d\n", pchar - s1);
    
    // search for substring "are" in string
    char *pstr = strstr(s1, "are");
    if (pstr == NULL)
        printf("substring 'are' not found\n\n");
    else
        printf("substring 'are' found at position %d\n\n", pstr - s1);
    
    // sprintf() function -> only stores in buffer not prints
    char s4[100];
    sprintf(s4, "The sum of %d and %d is %d", 10, 20, 30);

    // there are also other func 
    return 0;
}