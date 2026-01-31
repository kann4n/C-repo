#include<stdio.h>

int main()
{
	int sum=0, num, last_digit;
	printf("Enter the number ");
	scanf("%d", &num);
	while (num > 0)
	{
		last_digit = num % 10;
		sum += last_digit;	
		num = num / 10; //int division
	}
	printf("Sum of digits is %d\n", sum);
	return 0;
}
