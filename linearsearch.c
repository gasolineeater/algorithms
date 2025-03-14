#include <stdio.h>

int	linearsearch(int arr[], int targetelement, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (arr[i] == targetelement)
			return (i);
		i++;
	}
	return (-1);
}

int	main()
{
	int	arr[] = {10, 20, 30, 40, 50};
	int targetelement;
	int	n;
	int answer;

	n = sizeof(arr) / sizeof(arr[0]);
	targetelement = 50;
	answer = linearsearch(arr, targetelement, n);
	if (answer == -1)
		printf("The target was not found inside the array.\n");
	else
		printf("Target found! ------> Index:%d\n", answer);

	targetelement = 11;
	answer = linearsearch(arr, targetelement, n);
	if (answer == -1)
		printf("The target was not found inside the array.\n");
	else
		printf("Target found! ------> Index:%d\n", answer);
}
