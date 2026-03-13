/*
 * Author: Kannan
 * Description: Custom cos funtion using Taylor series expansion upto 0.0001% accuracy.
 *              0.0001% accuracy means the adding should stop if adding makes only 0.0001% change
 *              in return value
 *
 * note: as per my research, taylor series needs to finds very very large factorials and power values.
 *       so i did find that instead of calc fact and pow we just need to find next term using
 *       current term. like this
 *          nthTerm = perviusTerm * -1*x^2 / (2n)(2n-1) for nth term
 *       also since cos repeats itself after 2pi we can get moduls of it for easy calc
 * Date: 08/03/2026
 */

#include <stdio.h>
#include <math.h>

#define sqr(x) ((x)*(x))
#define TwoPI 6.28318

double calc_cos(double);

int main()
{
    double a;
    printf("Enter x value > ");
    scanf("%lf", &a);
    printf("cos(%lf) = %lf", a, calc_cos(a));
    return 0;
}

double calc_cos(double x) // where x in radians
{
    x = fmod(x, TwoPI); // because cos repeats and can incress efficiency
    double Taylorsum = 1, xsqr = sqr(x), currAcc = 1, reqAcc = 0.0001;
    double currTerm = 1;
    int n = 1;

    while (1)
    {
        currTerm *= -1 * xsqr / ((2 * n) * (2 * n - 1));
        Taylorsum += currTerm;
        currAcc = (currTerm / Taylorsum) > 0 ? (currTerm / Taylorsum) : -1 * (currTerm / Taylorsum);
        // stop 
        if (Taylorsum == 0 || currAcc <= reqAcc) break;
        n++;
        // just for extra safe
        if (n > 1000) return 0;
    }
    return Taylorsum;
}

