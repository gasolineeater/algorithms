#include <stdio.h>

int	binarysearch(int arr[], int item, int beg, int end)
{
	int midi;

	while (beg <= end)
	{
		midi = beg + (end - beg) / 2;
		if (arr[midi] == item)
			return (midi);
		if (arr[midi] <= item)
			beg = midi + 1;
		else
			end = midi - 1;
	}
	return (-1);
}

int	main()
{
	int arr[] = {13, 20, 30, 44, 60, 80};
	int	n;
	int	item;
	int answer;

	n = sizeof(arr) / sizeof(arr[0]);
	item = 60;
	answer = binarysearch(arr, item, 0, n-1);
	if (answer == -1)
		printf("Item not found.\n");
	else
		printf("Index:%d\n", answer);
	return (0);
}
