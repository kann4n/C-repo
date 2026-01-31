#include <stdio.h>

int main()
{
	int a = 0, b = 1, c=0;
	int n = 0;
	printf("How many fibnachi numbers ");
	scanf("%d", &n);

	for(int i=1; i<=n; i++)
	{
		printf("%d ", a);
		c = a + b;
		a = b;
		b = c;
	}
	printf("\n");
	return 0;
}
