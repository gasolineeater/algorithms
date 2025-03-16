#include <stdio.h>

void	bubblesort(int arr[], int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = 0;
	while (i < size)
	{
		while (j < size - i - 1)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			j++;
		}
		j = 0;
	i++;
	}
}

void	print_array(int arr[], int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		printf("%d ", arr[i]);
		i++;
	}
}

int	main()
{
	 int	array[] = {14, 17, 8, 90, 11, 2};
	 int	length;

	 length = sizeof(array) / sizeof(array[0]);
	 printf("Before sorting the array: ");
	 print_array(array, length);
	 printf("\n");
	 printf("After sorting the array: ");
	 bubblesort(array, length);
	 print_array(array, length);
	 return (0);
}
