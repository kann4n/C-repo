/*
 * Author: Kannan
 * Description: program to store an array and sort it using bubble sort
 * Date: 10/02/2026
 * site: https://visualgo.net/en/sorting
 */

#include <stdio.h>
#include <unistd.h>

#define green "\033[32m"
#define reset "\033[0m"
#define white_bg "\033[30;47m" // black on white
#define red_bg "\033[30;41m"   // black on red
#define clearLine "\033[2K"

int main()
{
    int n;
    printf("enter number of elements > ");
    scanf("%d", &n);
    // array
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf(" input > ");
        scanf("%d", &arr[i]);
    }
    // bubble sort
    int swaped = 0;    //  0 means flase 1 true
    int lastCheck = n; // as it is not currently checked
    int c = 0;
    printf("\n");
    do
    {
        swaped = 0;
        for (int i = 0; i < lastCheck - 1; i++)
        {
            for (int v = 0; v < n; v++)
            {
                printf(" %d ", arr[v]);
                if (i == n - 1)
                    printf(" %d ", arr[v + 1]);
            }
            // main logic
            if (arr[i] > arr[i + 1])
            {
                int tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                swaped = 1;
                printf("%s ==> [%d %d]%s", red_bg, arr[i], arr[i + 1], reset);
            }
            // end
            printf("\n");
            for (int v = 0; v < n; v++)
            {
                if (v == i)
                {
                    printf("%s%d %d%s", white_bg, arr[i], arr[i + 1], reset);
                    continue;
                }
                if (i < n - 1)
                    printf(" %d ", arr[v]);
                else
                    printf(" %d ", arr[v + 1]);
            }
            printf("%s\n______________\n%s", green, reset);
            usleep(250000); // 0.25 second delay
            ++c;
        }
        printf("\n");
        --lastCheck;
    } while (swaped);
    // logic ends
    printf("\nFinal Sorted Array\n");
    for (int i = 0; i < n; i++)
        printf("\033[32;40m%d ", arr[i]);
    printf("\n%ssorted in %d tries%s\n", reset, c, reset);
    return 0;
}