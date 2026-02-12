/*
 * Author: Kannan
 * Description: Program to find unknown x1 & x2 from 2 linear equations
 * Note:	Crammer rule
 * 		Linear equations
 * 			ax1 + bx2 = m
 * 			cx1 + dx2 = n
 * 		so
 * 			x1 = (md - bn)/(ad - cb)
 * 			x2 = (na - mc)/(ad - cb)
*/
#include <stdio.h>

int main()
{
	int a, b, c, d, m, n;
	float x1, x2;
	
	printf("Enter 1st Linear equation coefficient(a, b, m) \nax1 + bx2 = m only enter value for a b m sparateted by space => ");
	scanf("%d %d %d", &a, &b, &m);
	printf("\nEnter 2nd Linear equation coefficient(c, d, n) \ncx1 + dx2 = n only enter value for c d n sparateted by space => ");
	scanf("%d %d %d", &c, &d, &n);
	
	int deno = a*d - c*b;
	if (deno == 0)
	{
		printf("\nThis system of Linear equations has either Zero or Infinitly many Solutions\n");
	}
	else
	{
		x1 = (float) (m*d - b*n) / deno;
		x2 = (float) (n*a - m*c) / deno;
		printf("\nx1 = %.3f \nx2 = %.3f \n", x1, x2);
	}
	return 0;
}
