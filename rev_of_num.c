#include<stdio.h>

int main()
{
	int num = 0, rev_num = 0, last_num = 0;
	printf("Enter the number ");
	scanf("%d", &num);
	int tmp = num;	
	while(num > 0)
	{
		last_num = num % 10;
		rev_num = rev_num * 10 + last_num; 
		num = num / 10; // int division 
	}
	num = tmp;
	printf("reverse of number %d is %d\n", num, rev_num);
	return 0;
}
