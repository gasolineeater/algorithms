#include <stdio.h>

int binarysearch(int arr[], int item, int end, int beg)
{
	int midi;

	if (end >= beg)
	{
		midi = beg + (end - beg) / 2;
		if (arr[midi] == item)
			return (midi);
		if (arr[midi] > item)
			return (binarysearch(arr, item, beg, midi - 1));
		return (binarysearch(arr, item, midi + 1, end));
	}
	return (-1);
}

int	main(void)
{
	int arr[] = {11, 20, 33, 44, 55};
	int	n;
	int	item;
	int	answer;

	item = 44;
	n = sizeof(arr) / sizeof(arr[0]);
	answer = binarysearch(arr, 4, 0, n - 1);
	if (answer == -1)
		printf("Item not found!\n");
	else
		printf("Answer:%d\n", answer);
	return (0);
}
