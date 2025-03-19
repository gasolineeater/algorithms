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
