#include <stdio.h>

void	insertionsort(int arr[], int n)
{
	int	i;
	int	tmp;
	int	j;

	i = 1;
	while (i < n)
	{
		tmp = arr[i];
		j = i - 1;
		while(tmp < arr[j] && j >= 0)
		{
			arr[j + 1] = arr[j];
			--j;
		}
		arr[j + 1] = tmp;
		i++;
	}
}

void	printarr(int arr[], int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		printf("%d, ", arr[i]);
		i++;
	}
	printf("\n");
}

int	main()
{
	int arr[] = {7, 5, 9, 3, 2, 1};
	int	n;

	n = sizeof(arr) / sizeof(arr[0]);
	printf("Before sorting: ");
	printarr(arr, n);
	insertionsort(arr, n);
	printf("After sorting: ");
	printarr(arr, n);
	return (0);
}
