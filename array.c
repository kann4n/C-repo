#include <stdio.h>

int main()
{
	int n = 0, sum = 0, pro = 1, searchLoc = 0, eleToSearch;
	printf("How many elements in array > ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter the element in order below \n");
	for (int i = 0; i < n; i++)
	{
		printf("\telement %d = ", i+1);
		scanf("%d", &arr[i]);
		sum += arr[i];
		pro *= arr[i];
	}
	printf("Elements in Array \n");
	for (int i = 0; i < n; i++)
	{
		printf("\telement at Array[%d] = %d\n", i+1, arr[i]);
	}

	int usr_input = 0;
	printf("(1) Sum \n(2) Product \n");
	printf("(3) Search by Location \n(4) Search by Element \n");
	printf("(5) Exit \n");
	do
	{
		printf("\nEnter your choice > ");
		scanf("%d", &usr_input);
		switch (usr_input)
		{
			case 1:
				printf("Sum of Array %d\n", sum);
				break;
			case 2:
				printf("Product of Array %d\n", pro);
				break;
			case 3:
				printf("Search Arr by location ");
				scanf("%d", &searchLoc);	
				printf("Array[%d] = %d\n", searchLoc, arr[searchLoc - 1]);
				break;
			case 4:
				printf("Search Arr by element ");
				scanf("%d", &eleToSearch);
				int didFind = 0;
				for (int i = 0; i < n; i++)
				{
					if (eleToSearch == arr[i])
					{
						printf("\t%d at Array[%d]\n", eleToSearch, i+1);
						didFind = 1;
						break;
					}	
				}
				if (!didFind)
					printf("Not found\n");
				break;
			case 5:
				printf("bte Bye...\n");
				break;
			default:
				printf("Incorrect Option \n");
				break;
		}
	}while(usr_input != 5);
	return 0;
}