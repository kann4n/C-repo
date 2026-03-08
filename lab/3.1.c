/*
 * Author: Kannan
 * Description: Custom sin funtion using Taylor series expansion upto 0.0001% accuracy.
 *              0.0001% accuracy means the adding should stop if adding makes only 0.0001% change
 *              in return value
 *
 * note: as per my research, taylor series needs to finds very very large factorials and power values.
 *       so i did find that instead of calc fact and pow we just need to find next term using
 *       current term. like this
 *          nthTerm = perviusTerm * -1*x^2 / (2n)(2n+1) for nth term
 *       also since sin repeats itself after 2pi we can get moduls of it for easy calc
 * Date: 08/03/2026
 */

#include <stdio.h>
#include <math.h>

#define sqr(x) ((x)*(x))
#define TwoPI 6.28318

double calc_sin(double);

int main()
{
    double a;
    printf("Enter x value > ");
    scanf("%lf", &a);
    printf("sin(%lf) = %lf", a, calc_sin(a));
    return 0;
}

double calc_sin(double x) // where x in radians
{
    x = fmod(x, TwoPI); // because sin repeats and can incress efficiency
    double Taylorsum = x, xsqr = sqr(x), currAcc = 1, reqAcc = 0.0001;
    double currTerm = x, nextTerm = 0;
    int n = 1;

    while (1)
    {
        nextTerm = (double)currTerm * -1 * xsqr / ((2 * n) * (2 * n + 1));
        Taylorsum += nextTerm;
        printf("N = %d\n", n);
        currTerm = nextTerm;
        n++;
        // stop 
        currAcc = (nextTerm / Taylorsum) > 0 ? (nextTerm / Taylorsum) : -1 * (nextTerm / Taylorsum);
        if (Taylorsum == 0 || currAcc <= reqAcc) break;
        // just for extra safe
        if (n > 1000) return 0;
    }
    return Taylorsum;
}

