#include <stdio.h>

void selectionsort(int arr[], int size)
{
	int	j;
	int	i;
	int	min;
	int	tmp;

	j = 0;
	while (j < size - 1)
	{
		min = j;
		i = j + 1;
		while (i < size)
		{
			if (arr[i] < arr[min])
				min = i;
			i++;
		}
		tmp = arr[j];
		arr[j] = arr[min];
		arr[min] = tmp;
		j++;
	}
}
