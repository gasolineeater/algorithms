#include <stdio.h>

void	bubblesort(int arr[], int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = 0;
	temp = arr[j];
	while (i < size)
	{
		while (j < size - i - 1)
		{
			if (arr[j] > arr[j + 1])
			{
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

