#include<stdio.h>

int main()
{
	int n;
	printf("Enter the number ");
	scanf("%d", &n);
	
	// with else
	if( n % 2 == 0 )
		printf("NUMBER IS EVEN\n");
	else
		printf("NUMBER IS ODD\n");
	/*
	// without else
	if( n % 2 == 0 )
		printf("NUMBER IS EVEN\n");
	if( n % 2 != 0 )
		printf("NUMBER IS ODD\n");
	*/
	return 0;
}
