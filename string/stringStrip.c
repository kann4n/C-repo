#include <stdio.h>
#include <string.h>

int main()
{
    char string[1000], extracted_string[1000];
    int stripStart = 0, stripEnd = 0, ex = 0;
    printf("Enter the string > ");
    for (int i = 0; i < 1000; i++)
    {
        scanf("%c", &string[i]);
        if (string[i] == '\n')
        {
            string[i] = '\0';
            break;
        }
    }
    printf("Strip From( eg: 0) nth char > "); scanf("%d", &stripStart);
    printf("Strip till( eg: 5) nth char > "); scanf("%d", &stripEnd);

    for(int i=stripStart; i < stripEnd && string[i] != '\0'; i++)
    {
        extracted_string[ex] = string[i];
        ex++;
    }
    extracted_string[ex] = '\0';

    printf("Extracted String\n");
    printf("'%s'", extracted_string);
    return 0;
}