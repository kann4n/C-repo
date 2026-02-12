/*
 * Author: Kannan
 * Description: A program to find the number of and sum of all 100<integers<200 and divisible by 7
 * Date: 31/01/2026
*/

#include<stdio.h>

int main()
{
	int sum = 0, n = 0;

	for( int c_num = 101; c_num < 200; c_num++ )
	{
		if ( c_num % 7 == 0 )
		{
			sum += c_num;
			n++;
		}
	}
	printf("Total numbers in range 100 to 200 that are divisible by 7 is\t %d\n", n);
	printf("Sum\t %d\n", sum);
	return 0;
}
