#include <stdio.h>
#include <string.h>

#define MAX_CHAR 50

int main()
{
    char name[MAX_CHAR] = { 0 };
    int i = 0;
    printf("Enter your name > ");
    while (1) {
        scanf("%c", &name[i]);
        if (name[i] == '\n') {
            name[i] = '\0';
            break;
        }
        i++;
        if (i > MAX_CHAR){
            printf("name too long\n");
            return -1;
        }
    }
    // name to ascii table
    printf("+-----------+\n");
    for (int i = 0; name[i] != '\0' && i <= MAX_CHAR; i++)
    {
        printf("| %3c - %3d |\n", name[i], name[i]);
    }
    printf("+-----------+\n");

    printf("final ascii code of your name => ");
    for (int i = 0; name[i] != '\0' && i <= MAX_CHAR; i++)
    {
        printf("%3d ", name[i]);
    }
    printf("\n");
    return 0;
}