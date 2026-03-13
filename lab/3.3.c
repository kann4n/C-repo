/*
 * Author: Kannan
 * Description: finding result of Sophomore's Dream( a infinte converging series)
 *              1 + (1/2)^2 + (1/3)^3 + (1/4)^4 + (1/5)^5 + .....
 * Date: 08/03/2026
*/

#include <stdio.h>
#include <math.h>

double sophomores_dream();

int main()
{
    double SUM = sophomores_dream();
    printf("sophomores_dream sum is %lf", SUM);
}

double sophomores_dream()
{
    double currAcc = 1, reqAcc = 0.0001;
    double result = 0, nextTerm;
    int n = 1;
    while (1)
    {
        nextTerm = pow((double)1 / n, n);
        result += nextTerm;
        n++;
        currAcc = fabs(nextTerm / result);
        if (currAcc < reqAcc) break;
    }
    return result;
}